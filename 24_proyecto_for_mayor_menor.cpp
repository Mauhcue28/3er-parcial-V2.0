#include <iostream>

int main() {
    int num, acum = 0, menor, mayor;

    std::cout << "Ingrese diez números:" << std::endl;

    std::cin >> num;
    menor = mayor = num;
    acum += num;

    for (int i = 2; i <= 10; i++) {
        std::cin >> num;
        acum += num;

        if (num < menor) {
            menor = num;
        }
        if (num > mayor) {
            mayor = num;
        }
    }

    std::cout << "El número menor es: " << menor << std::endl;
    std::cout << "La suma de los números es: " << acum << std::endl;
    std::cout << "El número mayor es: " << mayor << std::endl;

    return 0;
}
