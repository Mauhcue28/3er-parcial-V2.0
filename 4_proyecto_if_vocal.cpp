#include <iostream>
using namespace std;

int main() 
{
    char caracter;

    cout << "Ingrese un carácter: ";
    cin >> caracter;

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        cout << "El carácter ingresado es una vocal." << endl;
    } else {
        cout << "El carácter ingresado no es una vocal." << endl;
    }

    return 0;
}