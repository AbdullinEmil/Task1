#pragma once
#include <iostream>
#include <string>
#include <httplib.h>
#include <nlohmann/json.hpp>


class ThingsToDoWhenBored {
	std::string link;
	std::string request;
	nlohmann::json result;
	std::string RandomThingToDo;
public:
	ThingsToDoWhenBored();

	ThingsToDoWhenBored(std::string link, std::string RandomThingToDo);

	nlohmann::json getResult(std::string result);

	nlohmann::json showRandomThingToDo(std::string result);

	nlohmann::json FindThingToDoByCategory(std::string result);

	nlohmann::json FindThingToDoByAccesibility(std::string result);
};