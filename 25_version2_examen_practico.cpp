#include <iostream>
#include <string>

int main() {
    int i;
    std::string contr, nom;

    for (i = 0; i < 3; i++) {
        std::cout << "\ningrese su nombre\n";
        std::cin >> nom;
        std::cout << "\ningrese su contraseña\n";
        std::cin >> contr;

        if (nom == "Mauricio" && contr == "2bmpg7") {
            std::cout << "bienvenido al sistema\n";
            break;
        } else {
            std::cout << "acceso denegado\n";
        }
    }

    if (i == 3) {
        std::cout << "\nmayoría de intentos acceso denegado\n";
    }

    return 0;
}
