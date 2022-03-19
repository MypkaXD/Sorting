#include <iostream>

void SortOfChoice(double* array, int* answer, int *lenght)
{
	for (int startIndex = 0; startIndex < *lenght - 1; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int curretIndex = startIndex + 1; curretIndex < *lenght; ++curretIndex)
		{
			if (*answer == 1)
			{
				if (array[curretIndex] > array[smallestIndex])
					smallestIndex = curretIndex;
			}
			else if (*answer == 2)
			{
				if (array[curretIndex] < array[smallestIndex])
					smallestIndex = curretIndex;
			}
		}
		double temp = array[startIndex];
		array[startIndex] = array[smallestIndex];
		array[smallestIndex] = temp;
	}
}