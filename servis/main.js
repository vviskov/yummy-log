var
	express = require("express"),
	winston = require("winston"),
	exb = require("express-xml-bodyparser"),
	otx = require("object-to-xml"),
	mongoi = require("./mongoi.js");
	

var
	server = express();

server.use(function(request, response, next) {
	response.setHeader("Access-Control-Allow-Origin", "*");
	response.setHeader("Access-Control-Allow-Headers", "X-Requested-With,content-type");
	next();
});
server.use(exb());

server.get("/recipes", function(request, response) {
	mongoi.loadRecipes(function(data) {
		response.send(
			otx({
				'?xml version="1.0" encoding="UTF-8"?' : null,
				"recipes": data
			})
		);
	});
});

server.post("/recipes", function(request, response) {
	mongoi.saveRecipe(request.body, function(data) {
		response.send(otx({"msg": "OK"}));
	});
});

server.delete("/recipes", function(request, response) {
	mongoi.deleteRecipe(request.body, function(data) {
		response.send(otx({"msg": "OK"}));
	});
});

winston.info("starting");
server.listen(3000);
