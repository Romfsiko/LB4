#include <math.h>

double f(const double* x, double* result)
{
	*result = ((sin(4**x)/(1+cos(4**x))) / ((cos(2**x))/(1+cos(2**x))));
}
