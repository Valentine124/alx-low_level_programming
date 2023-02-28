/**
 * swap int - given two ints and swap them
 * @a the first oprand
 * @b: secod opreand
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
