#include <iostream>

void SortOfBubble(double* array, int* answer, int* lenght)
{
	for (int startIndex = 1; startIndex < *lenght; ++startIndex)
	{
		for (int curretIndex = 0; curretIndex < *lenght - 1; ++curretIndex)
		{
			if (*answer == 1)
			{
				if (array[curretIndex] < array[startIndex])
				{
					double temp = array[startIndex];
					array[startIndex] = array[curretIndex];
					array[curretIndex] = temp;
				}
			}
			if (*answer == 2)
			{
				if (array[curretIndex] > array[startIndex])
				{
					double temp = array[startIndex];
					array[startIndex] = array[curretIndex];
					array[curretIndex] = temp;
				}
			}
		}
	}
}