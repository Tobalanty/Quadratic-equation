#include <iostream>
#include <math.h>
#include "equation.h"

int main()
{
    int a, b, c, d;

        std::cout << "Input a: " << std::endl; std::cin >> a; 
        std::cout << "Input b: " << std::endl; std::cin >> b;
        std::cout << "Input c: " << std::endl; std::cin >> c;
        std::cout << "Input d: " << std::endl; std::cin >> d;

        answer(a, b, c, d);

        system("pause");
    return 0;
}