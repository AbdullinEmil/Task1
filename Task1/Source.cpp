#include "WebApp.h"
#include "Tools.h"

const std::string link = "https://boredapi.com";

int main() {
	setlocale(LC_ALL, "RUS");

	using json = nlohmann::json;

	std::string CategoryForThingToDo;
	std::cout << "¬ведите категорию дл€ поиска зан€ти€ например: (recreational, education и т.д)" << std::endl;
	std::cin >> CategoryForThingToDo;

	int AccesibilityForThingToDo;
	std::cout << "¬ведите уровень доступности дл€ поиска зан€ти€ ( от 1 до 10 ): " << std::endl;
	std::cin >> AccesibilityForThingToDo;

	ThingsToDoWhenBored app("https://boderapi.com/api/", link);
}