#include <iostream>
#include <string>

int main() {
    int i = 0;
    std::string contr, nom;

    do {
        std::cout << "\ningrese su nombre\n";
        std::cin >> nom;
        std::cout << "\ningrese su contraseña\n";
        std::cin >> contr;

        if (nom == "Mauricio" && contr == "2bmpg7") {
            std::cout << "bienvenido al sistema\n";
            int precio, cantidad, total = 0;

            do {
                std::cout << "introduzca el precio del articulo\n";
                std::cin >> precio;
                std::cout << "introduzca la cantidad del articulo\n";
                std::cin >> cantidad;

                if (precio > 0 && cantidad > 0) {
                    total += precio * cantidad;
                    std::cout << "¿Desea agregar otro artículo? (1 para sí, 0 para no)\n";
                    int r;
                    std::cin >> r;
                    if (r == 0) {
                        break;
                    }
                } else {
                    std::cout << "precio o cantidad inválidos, intentelo denuevo.\n";
                }
            } while (true);

            std::cout << "el importe total de las ventas del dia es: " << total << std::endl;
            break; 
        } else {
            std::cout << "acceso denegado\n";
        }

        i++;
    } while (i < 3);

    if (i == 3) {
        std::cout << "\nmayoría de intentos acceso denegado\n";
    }

    return 0;
}
