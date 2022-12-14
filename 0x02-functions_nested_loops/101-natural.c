#include <>
#include ""

/**
 *
 *
 *
 */

int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3 == 0) || (i % 5 == 0)) && i != 1024)
		{
			sum += i;
		}
	}

	printf("%d", sum);

	return (0);
}
