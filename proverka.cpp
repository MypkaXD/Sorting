#include <iostream>

void proverka(int* x)
{
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cout << "������� �������� ��������:";
	std::cin >> *x;
}