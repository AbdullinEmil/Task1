#pragma once
#include <iostream>
#include <nlohmann/json.hpp>

namespace Tools {
	void showMenu();

	void showRandomThingToDo(nlohmann::json data);

	void FindThingToDoByCategory(nlohmann::json data);

	void FindThingToDoByAccesibility(nlohmann::json data);
}