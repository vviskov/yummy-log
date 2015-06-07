var
  mongodb = require("mongodb"),
  winston = require("winston");


function connection(callback) {
  mongodb.MongoClient.connect("mongodb://127.0.0.1:27017/yummy-log", function(err, db) {
    if(err) {
      winston.error("Error: ", err);
      throw err;
    }
    callback(db);
  });
}

exports.loadRecipes = function(callback) {
  connection(function(db) {
    db.collection("recipes").find().toArray(function(err, data) {
      if(err) {
        winston.error(err);
        throw err;
      }

      callback(data.map(function(recipe) {
        return {
          "id": recipe._id.toString(),
          "name": recipe.name,
          "description": recipe.description,
          "steps": recipe.steps,
          "chef": recipe.chef,
          "ingredients": {
            "ingredient": recipe.ingredients ? recipe.ingredients.map(function(ingredient) {
              return {
                "name": ingredient.ingredient.name,
                "amount": ingredient.ingredient.amount
              }
            }): []
          }
        };
      }));
    });
  });
};

exports.saveRecipe = function(xmlRecipe, callback) {
  var recipeToSave = {
    "name": xmlRecipe.recipe.name[0],
    "description": xmlRecipe.recipe.description[0],
    "chef": xmlRecipe.recipe.chef[0],
    "ingredients": xmlRecipe.recipe.ingredients ? 
      xmlRecipe.recipe.ingredients[0].ingredient.map(function(ingredient) {
      return {
        "ingredient" : {
          "name": ingredient.name[0],
          "amount": ingredient.amount[0]
        }
      };
    }) : [],
    "steps": xmlRecipe.recipe.steps[0]
  };

  if(xmlRecipe.recipe.id) {
    var mongoId = new mongodb.ObjectID(xmlRecipe.recipe.id[0]);
    recipeToSave["_id"] = mongoId;
  }

  connection(function(db) {
    db.collection("recipes").save(recipeToSave, {w: 1}, function(err, data) {
      if(err) {
        winston.error(err);
        throw err;
      }
      callback();
    });
  });
};

exports.deleteRecipe = function(xmlRecipe, callback) {
  if(xmlRecipe.recipe.id) {
    connection(function(db) {
      db.collection("recipes").remove({
        "_id": { "$eq": new mongodb.ObjectID(xmlRecipe.recipe.id[0])}
      }, 
      {w: 1}, 
      function(err, result) {
        if(err) {
          winston.error(err);
          throw err;
        }
        callback();
      })
    });
  } 
}
