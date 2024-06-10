#include <iostream>

int main() {
    int n, p, po = 1;

    std::cout << "Ingresa un número: ";
    std::cin >> n;

    std::cout << "Ingresa una potencia: ";
    std::cin >> p;

    for (int i = 1; i <= p; i++) {
        po *= n;
    }

    std::cout << "El resultado es: " << po;

    return 0;
}
