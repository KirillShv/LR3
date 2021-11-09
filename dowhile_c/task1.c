#include <math.h>

double summ(int n)
{
	double sum = 0;
	int i = 0;

	if (n == 0)
	{
		return 0;
	}
	else
	{
		do
		{
			sum += pow(-1, i) * pow(2, i) / (pow(i, i + 1) + 1);
			++i;
		} while (i < n);
		return sum;
	}
}

