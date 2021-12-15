#include <iostream>

int main()
{
	double a, b;

	std::cin >> a;
	std::cin >> b;
	std::cout.fixed;
	std::cout.precision(10);
	std::cout << double(a / b) << std::endl;
	return 0;
}