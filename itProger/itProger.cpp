#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "Russian");
	
	int res = 10;
	std::cout << res;

	return 0;
}