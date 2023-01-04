#include "search_algos.h"
/**
* linear_search - linear search algos...
* @array: ptr input searche value in array integers
* @size: number of elements
* @value: value to search
* Return: index or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t a;
	int temp;

	if (array != NULL)
	{
		for (a = 0; a < size; a++)
		{
			temp = array[a];
			printf("Value checked array[%ld] = [%d]\n", a, temp);
			if (temp == value)
				return (a);
		}
	}
	return (-1);
}
