#include <iostream>
#define pr 70

int main()
{
    int precio = pr, edad, precio_descuento;

    std::cout << "El precio de un ticket de cine es: $" << pr << std::endl;
    std::cout << "Ingrese su edad para aplicarle un descuento: ";
    std::cin >> edad;

    if (edad <= 5)
    {
        precio_descuento = pr * 0.60;
        std::cout << "Su precio con un descuento del 60% es de: $" << precio_descuento << std::endl;
    }
    else if (edad >= 60)
    {
        precio_descuento = pr * 0.55;
        std::cout << "Su precio con un descuento del 55% es de: $" << precio_descuento << std::endl;
    }
    else
    {
        std::cout << "No aplica descuento. El precio es de: $" << pr << std::endl;
    }

    std::cout << "Gracias por venir, ¡disfrute de su película!" << std::endl;
    
    return 0;
}