/**
 * int_index - finds an integer
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 * Return: -1 on error or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (a = 0; a < size; a++)
		{
			cmp(array[a]);
			if (cmp(array[a]) > 0)
			{
				res = a;
				break;
			}
			if ((cmp(array[a]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}

