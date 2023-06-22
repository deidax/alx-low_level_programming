int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
