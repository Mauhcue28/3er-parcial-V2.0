#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout << "Ingrese el número de una carta de la baraja española" << endl;
    cin >> num;

    if (num == 1) {
        cout << "As" << endl;
    }
    else if (num == 10) {
        cout << "Sota" << endl;
    }
    else if (num == 11) {
        cout << "Caballo" << endl;
    }
    else if (num == 12) {
        cout << "Rey" << endl;
    }
    else if (num >= 2 && num <= 9) {
        cout << "No es figura ni tampoco As" << endl;
    } 
    else {
        cout << "Este no es número de una carta de la baraja española" << endl;
    }

    return 0;
}