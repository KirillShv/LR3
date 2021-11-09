#include <math.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a;

	a =pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
	while (fabs(a) > 0)
	{
		a =pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
		if (fabs(a) <= eps && a < 0)
		{
			return ++i;
		}
		++i;
	}

}