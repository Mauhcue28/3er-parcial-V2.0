#include <iostream>
using namespace std;

int main() 
{
    char caracter;

    cout << "Ingrese un carácter: ";
    cin >> caracter;

    switch (caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "El carácter ingresado es una vocal." << endl;
            break;
        default:
            cout << "El carácter ingresado no es una vocal." << endl;
            break;
    }

    return 0;
}