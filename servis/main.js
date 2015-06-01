var
	express = require("express"),
	bodyParser = require("body-parser"),
	winston = require("winston"),
	otx = require("object-to-xml");

var
	server = express();

server.use(function(request, response, next) {
	response.setHeader("Access-Control-Allow-Origin", "*");
	response.setHeader("Access-Control-Allow-Headers", "X-Requested-With,content-type");
	next();
});
server.use(bodyParser.json());

var onBla = function(request, response) {
	winston.info(request.hostname);
	response.send(
		otx({
			'?xml version="1.0" encoding="UTF-8"?' : null,
			"msg": "mb hfcn"
		})
	);
	winston.info("duboko");
};

server.get("/bla", onBla);

winston.info("starting");
server.listen(3000);

