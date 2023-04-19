void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	size_t i = 0;
	while (i < size)

	{
		action(array[i]);
		i++;
	}
}
