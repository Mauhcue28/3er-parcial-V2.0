#include <iostream>
#include <cmath>

int main() {
    int n, p;
    double po;

    std::cout << "Ingrese un número: ";
    std::cin >> n;

    std::cout << "Ingrese su potencia: ";
    std::cin >> p;

    po = std::pow(n, p);

    std::cout << "El resultado con potencia es " << po << std::endl;

    return 0;
}
