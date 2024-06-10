#include <iostream>

int main()
{
    int i, t;
    std::cout << "Cuántos terminos quiere mostrar\n";
    std::cin >> t;
    for (i = 1; i <= t; i = i + 5)
    {
        std::cout << "num = " << i << "\n";
    }
    return 0;
}