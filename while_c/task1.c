#include <math.h>

double summ(int n)
{
	double sum = 0;
	int i = 0;

	while (i < n)
	{
		sum += pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		++i;
	}

	return sum;
}
