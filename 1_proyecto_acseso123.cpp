#include <iostream>

int main()
{
    int n1, n2, n3;
    std::cout << "Ingrese 3 números enteros: ";
    std::cin >> n1 >> n2 >> n3;

    if (n1 == 1 && n2 == 2 && n3 == 3)
    {
        std::cout << "Acceso permitido" << std::endl;
    }
    else
    {
        std::cout << "Acceso denegado" << std::endl;
    }

    return 0;
}