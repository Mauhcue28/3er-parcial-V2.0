#include <iostream>
using namespace std;

int main() 
{
    int r, a, b, B, h;

    cout << "CALCULO DE AREAS" << endl;
    cout << "===================================" << endl;
    cout << "1.-Calcular el area de un triangulo" << endl;
    cout << "2.-Calcular el area de un trapecio" << endl;
    cout << "3.-Calcular el area de un rectangulo" << endl;
    cout << "¿Qué área desea calcular?" << endl;
    cin >> r;

    if (r == 1)
    {
        cout << "Ingrese la base del triángulo: ";
        cin >> b;
        cout << "Ingrese la altura del triángulo: ";
        cin >> h;
        a = b * h / 2;
    }
    else if (r == 2)
    {
        cout << "Ingrese la base menor del trapecio: ";
        cin >> b;
        cout << "Ingrese la base mayor del trapecio: ";
        cin >> B;
        cout << "Ingresa la altura del trapecio: ";
        cin >> h;
        a = (B + b) / 2 * h;
    }
    else 
    {
        cout << "Ingrese la base del rectángulo: ";
        cin >> b;
        cout << "Ingrese la altura del rectángulo: ";
        cin >> h;
        a = b * h;
    }

    cout << "El área de la figura es: " << a << endl;

    return 0;
}