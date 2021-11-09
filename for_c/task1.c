#include <math.h>

double summ(int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
	}
	return sum;
}
