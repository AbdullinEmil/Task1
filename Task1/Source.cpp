#include "WebApp.h"
#include "Tools.h"

const std::string link = "https://boredapi.com";

int main() {
	setlocale(LC_ALL, "RUS");

	using json = nlohmann::json;

	std::string CategoryForThingToDo;
	std::cout << "������� ��������� ��� ������ ������� ��������: (recreational, education � �.�)" << std::endl;
	std::cin >> CategoryForThingToDo;

	int AccesibilityForThingToDo;
	std::cout << "������� ������� ����������� ��� ������ ������� ( �� 1 �� 10 ): " << std::endl;
	std::cin >> AccesibilityForThingToDo;

	ThingsToDoWhenBored app("https://boderapi.com/api/", link);
}