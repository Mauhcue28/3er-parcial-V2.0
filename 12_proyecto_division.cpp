#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Ingrese dos números: ";
    std::cin >> num1 >> num2;

    if (num1 != 0 && num1 % num2 == 0)
    {
        std::cout << "La división es divisible" << std::endl;
    }
    else
    {
        std::cout << "La división no se puede realizar" << std::endl;
    }

    return 0;
}