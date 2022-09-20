/**
 * swap_int - swap the value of two ints
 *
 * @a : pointer to the variable a
 * @b : pointer to the variable b
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	int d = *b;

	*a = d;
	*b = c;
}
