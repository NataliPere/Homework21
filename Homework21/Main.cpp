#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	std::cout << "Введите первое число: \n";
	std::cin >> x;
	std::cout << "Введите второе число: \n";
	std::cin >> y;

	int* px = &x;
	int* py = &y;

	std::cout << "Среднее арифметическое значений = " << (*px + *py) / 2 << "\n";







	return 0;
}