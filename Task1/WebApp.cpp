#include "WebApp.h"

using json = nlohmann::json;

ThingsToDoWhenBored::ThingsToDoWhenBored(std::string link, std::string RandomThingToDo);

json ThingsToDoWhenBored::getResult(std::string request) {
	this->request = "http://www.boredapi.com/api/activity/";

	return ("/api/activity/");
}