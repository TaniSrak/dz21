#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	std::cout << "Введите обозначение для х и y -> ";
	std::cin >> x >> y;

	int* px = &x;
	int* py = &y;

	int peremena = *px;
	*px = *py;
	*py = peremena;

	std::cout << " x = " << x << std::endl;
	std::cout << " y = " << y << std::endl;

	//   =%

	return 0;
}
