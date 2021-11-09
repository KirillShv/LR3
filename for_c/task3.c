#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
	double a = 0;
	
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % k == 0)
		{
			continue;
		}
		a = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		printf("%lf ", a);
	}
	printf("\n");
}