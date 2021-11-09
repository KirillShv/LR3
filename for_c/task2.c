#include <math.h>

double summ2(double eps)
{
	double sum = 0;
	int i = 0;
	double a;

	a = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
	for (i = 0; fabs(a) > eps; i++)
	{
		a = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		sum += a;

	}
	return sum;
}
