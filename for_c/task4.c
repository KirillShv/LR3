#include <math.h>

int findFirstElement(double eps)
{
	int i = 0;
	double a;

	for (i; ;i++)
	{
		a = pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		if (fabs(a) <= eps)
		{
			break;
		}
	}
	return ++i;
}