#include <stdio.h>

/**
 * main - sums multplies of 3 or 5
 *
 * Return: 0
 */
int main(void)
{
	int start_num, end_num, sum;

	end_num = 1024;
	sum = 0;
	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
			sum = sum + start_num;
		else
			continue;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
