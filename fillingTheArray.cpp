#include <iostream>

void fillingTheArray(int* lenght, double*& array, int* questionOfFilling)
{
	if (*questionOfFilling == 1)
	{
		for (int count = 0; count < *lenght; ++count)
		{
			std::cout << "a[" << count << "] " << "= ";
			std::cin >> array[count];
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(32767, '\n');
				std::cout << "Что-то пошло не так, попробуйте заново" << std::endl;
				std::cout << "a[" << count << "] " << "= ";
				std::cin >> array[count];
			}
		}
	}
	else if (*questionOfFilling == 2)
	{
		srand(static_cast<int>(time(0)));
		for (int count = 0; count < *lenght; ++count)
			array[count] = rand();
	}
}