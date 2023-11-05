/**
  * reverse_array - reverse an array of ints
  * @a: pointer to input array
  * @n: size of array passed
  */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = temp;
	}
}
