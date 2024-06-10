#include <iostream>

int main() {
    int k = 0;
    int num, sumaActiva = 0;

    while (true) {
        std::cout << "Introduzca un numero: ";
        std::cin >> num;
        
        if (num == 0) {
            break;
        } else {
            k++;
            sumaActiva += num;
            std::cout << "Su numero es: " << sumaActiva << std::endl;
        }
    }

    std::cout << "Finalizado: k ha introducido " << k << " numeros.\n";
    std::cout << "Suma de numeros: " << sumaActiva << std::endl;
    
    return 0;
}
