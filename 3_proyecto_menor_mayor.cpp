#include <iostream>
using namespace std;

int main() 
{
    int n1, n2, n3;

    cout << "Ingrese 3 digitos: ";
    cin >> n1 >> n2 >> n3;

    if (n1 < n2) {
        if (n1 < n3) {
            if (n2 < n3) {
                cout << "Los valores ordenados de menor a mayor son: " << n1 << " " << n2 << " " << n3 << "\n\n";
            } else {
                cout << "Los valores ordenados de menor a mayor son: " << n1 << " " << n3 << " " << n2 << "\n\n";
            }
        } else {
            cout << "Los valores ordenados de menor a mayor son: " << n3 << " " << n1 << " " << n2 << "\n\n";
        }
    } else {
        if (n1 < n3) {
            cout << "Los valores ordenados de menor a mayor son: " << n2 << " " << n1 << " " << n3 << "\n\n";
        } else {
            if (n3 < n2) {
                cout << "Los valores ordenados de menor a mayor son: " << n3 << " " << n2  <<" "<<  n1  <<" "<< "\n\n";
            } else {
                cout<<  Los valores ordenados de menor a mayor son:  "<<n2<<" "<<n3<<" "<<n1<<" "<<endl;
            }
        }
    }
    return 0;
}