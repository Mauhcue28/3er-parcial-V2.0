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
    } else {
        int precio, cantidad, total = 0;
        while (true) {
            std::cout << "introduzca el precio del articulo\n";
            std::cin >> precio;
            std::cout << "introduzca la cantidad del articulo\n";
            std::cin >> cantidad;

            if (precio > 0 && cantidad > 0) {
                total += precio * cantidad;
                std::cout << "¿Desea agregar otro artículo? (1 para sí, 0 para no)\n";
                int respuesta;
                std::cin >> respuesta;
                if (respuesta == 0) {
                    break;
                }
            } else {
                std::cout << "Precio o cantidad inválidos, inténtelo de nuevo.\n";
            }
        }
        std::cout << "El importe total de la factura es: " << total << std::endl;
    }

    return 0;
}
