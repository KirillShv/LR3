#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	a =pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
	while (fabs(a) > eps)
	{
		a =pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		if (fabs(a) <= eps)
		{
			break;
		}
		++i;
	}
	return ++i;
}