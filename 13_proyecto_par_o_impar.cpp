#include <iostream>

int main()
{
    int num;
    
    std::cout << "Ingrese un número: ";
    std::cin >> num;
    
    if (num % 2 == 0)
    {
        std::cout << "El número es par" << std::endl;
        if (num % 3 == 0)
            std::cout << "Además, es múltiplo de 3" << std::endl;
    }
    else
    {
        std::cout << "El número es impar" << std::endl;
        if (num % 3 == 0)
            std::cout << "Es múltiplo de 3" << std::endl;
    }

    return 0;
}