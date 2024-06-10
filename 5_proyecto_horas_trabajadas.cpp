#include <iostream>
using namespace std;

int main()
{
    int pago, h, salario;
    cout << "Ingrese su pago por hora: ";
    cin >> pago;
    cout << "Ingrese sus horas trabajadas: ";
    cin >> h;

    if (h <= 40)
    {
        salario = pago * h;
        cout << "Su salario es de $" << salario << endl;
    }
    else if (h > 40 && h < 50)
    {
        salario = pago * h + 0.50;
        cout << "Su salario es de $" << salario << endl;
    }
    else if (h >= 50)
    {
        salario = (pago * h) * 2;
        cout << "Su salario es de $" << salario << endl;
    }

    return 0;
}