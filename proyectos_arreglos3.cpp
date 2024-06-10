#include <iostream>
using namespace std;

int main()
{ 
    int n, i, numero;
    std::cout<<"digite el tamaño del arreglo";
    std::cin>> n;
    int num[n];
    for (i=1; i<n; i++)
    {
     std::cout<<"digite un numero para la posicion"<< i <<std::endl;
     std::cin>>numero;
     int num[1]= numero;   
    }
    for (i=1; i<n; i++)
    {
        std::cout<<"el dato en la posicion "<< i <<" es: "<< num[i] <<std::endl;
    }
    return 0;
}