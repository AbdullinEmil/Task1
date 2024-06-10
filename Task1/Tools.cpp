#include "Tools.h"

void ShowMenu() {
	std::cout << "Найти случайное занятие - 1" << std::endl;
	std::cout << "Найти дело по категории - 2" << std::endl;
	std::cout << "Выйти - 3" << std::endl;
}

void showRandomThingToDo(nlohmann::json data) {
	std::cout << "Занятие если нечего делать: " << data["api"][0]["activity"] << std::endl;
}

void FindThingToDoByCategory(nlohmann::json data, std::string CategoryForThingToDo) {
	std::cout << "Введите категорию для поиска: " << std::endl;
	std::cin >> CategoryForThingToDo;
	std::cout << "Занятие по запросу категории: " << data["api"][0]["activity?type=:type"] << std::endl;
}

void FindThingToDoByAccesibility(nlohmann::json data, int AccesibilityForThings) {
	std::cout << "Введите уровень доступности в цифрах (от 1 до 10): " << std::endl;
	std::cin >> AccesibilityForThings;
	std::cout << "Занятие по запросу доступности: " << data["api"][0]["activity?accessibility=:accessibility"] << std::endl;
}