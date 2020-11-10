#include <math.h>
#include <iostream>

double discriminant(double a, double b, double c, double d);

void answer(double a, double b, double c, double d) {

	double discr = discriminant(a, b, c, d), x1 = NULL, x2 = NULL;

	if ((a == 0 && b < 0 && c == 0 && d == 0) ||
		(a == 0 && b == 0 && c == 0 && d != 0) ||
		(a == 0 && b == 0 && c != 0 && d == 0) ||
		(a == 0 && b == 0 && c != 0 && d != 0)) {

			std::cout << "There is no solution. " << std::endl;

	}
	else
		if ((a == 0 && b != 0 && c != 0 && d != 0) ||
			(a == 0 && b != 0 && c == 0 && d != 0) ||
			(a == 0 && b != 0 && c != 0 && d == 0)) {

				x1 = (d - c) / b;
				x2 = x1;
				std::cout << "You entered a linear equation (bx + c = d) and answer is: " << std::endl;
				std::cout << "x = " << x1 << std::endl;

		}else
			if ((a != 0 && b == 0 && c != 0 && d != 0) ||
				(a != 0 && b == 0 && c == 0 && d != 0) ||
				(a != 0 && b == 0 && c != 0 && d == 0)) {

					x1 = sqrt((d - c) / a);
					x2 = -x1;
					std::cout << "Answer is: " << std::endl;
					std::cout << "x1 = " << x1 << std::endl;
					std::cout << "x2 = " << x2 << std::endl;

			}else
				if (((a != 0 && b != 0 && c != 0 && d != 0) ||
					(a != 0 && b != 0 && c == 0 && d != 0) ||
					(a != 0 && b != 0 && c != 0 && d == 0)) && discr == 0) {

					x1 = (-b) / (2 * a);
					x2 = x1;
					std::cout << "Discriminant = " << discr << std::endl;
					std::cout << "Since the discriminant is zero the answer is: " << std::endl;
					std::cout << "x1 = x2 = " << x1 << std::endl;

				}else
					if (((a != 0 && b != 0 && c != 0 && d != 0) ||
						(a != 0 && b != 0 && c == 0 && d != 0) ||
						(a != 0 && b != 0 && c != 0 && d == 0)) && discr < 0) {

							std::cout << "Discriminant = " << discr << std::endl;
							std::cout << "Since the discriminant is less than zero, there is no solution" << std::endl;

					}else
						if (((a != 0 && b != 0 && c != 0 && d != 0) ||
							(a != 0 && b != 0 && c == 0 && d != 0) ||
							(a != 0 && b != 0 && c != 0 && d == 0)) && discr > 0) {

								x1 = ((-b) + sqrt(discr)) / (2 * a);
								x2 = ((-b) - sqrt(discr)) / (2 * a);
								std::cout << "Discriminant = " << discr << std::endl;
								std::cout << "Since the discriminant is above zero, solution is: " << std::endl;
								std::cout << "x1 = " << x1 << std::endl;
								std::cout << "x2 = " << x2 << std::endl;

						}

}