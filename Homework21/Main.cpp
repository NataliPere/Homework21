#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	std::cout << "������� ������ �����: \n";
	std::cin >> x;
	std::cout << "������� ������ �����: \n";
	std::cin >> y;

	int* px = &x;
	int* py = &y;

	std::cout << "������� �������������� �������� = " << (*px + *py) / 2 << "\n";







	return 0;
}