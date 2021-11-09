#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
	double a = 0;
	int i = 0;

	while (i < n)
	{
		if ((i + 1) % k == 0)
		{
			++i;
			continue;
		}
		a =pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		printf("%lf ", a);
		++i;
	}
	printf("\n");
}