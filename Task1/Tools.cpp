#include "Tools.h"

void ShowMenu() {
	std::cout << "����� ��������� ������� - 1" << std::endl;
	std::cout << "����� ���� �� ��������� - 2" << std::endl;
	std::cout << "����� - 3" << std::endl;
}

void showRandomThingToDo(nlohmann::json data) {
	std::cout << "������� ���� ������ ������: " << data["api"][0]["activity"] << std::endl;
}

void FindThingToDoByCategory(nlohmann::json data, std::string CategoryForThingToDo) {
	std::cout << "������� ��������� ��� ������: " << std::endl;
	std::cin >> CategoryForThingToDo;
	std::cout << "������� �� ������� ���������: " << data["api"][0]["activity?type=:type"] << std::endl;
}

void FindThingToDoByAccesibility(nlohmann::json data, int AccesibilityForThings) {
	std::cout << "������� ������� ����������� � ������ (�� 1 �� 10): " << std::endl;
	std::cin >> AccesibilityForThings;
	std::cout << "������� �� ������� �����������: " << data["api"][0]["activity?accessibility=:accessibility"] << std::endl;
}