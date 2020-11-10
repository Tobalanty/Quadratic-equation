#include <math.h>
#include <iostream>

double discriminant(double a, double b, double c, double d) {

	double discr;

	if (d != 0)
		c = c - d;

	discr = pow(b, 2) - 4 * a * c;
		return discr;
}