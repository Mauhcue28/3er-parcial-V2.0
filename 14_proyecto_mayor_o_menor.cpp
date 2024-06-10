#include <iostream>

int main()
{
    int num1, num2;

    std::cout << "Ingrese dos números: ";
    std::cin >> num1 >> num2;

    if (num1 < num2)
    {
        std::cout << "El número " << num1 << " es mayor" << std::endl;
    }
    else if (num1 == num2)
    {
        std::cout << "Los números son iguales" << std::endl;
    }
    else
    {
        std::cout << "El número " << num2 << " es mayor" << std::endl;
    }

    return 0;
}