#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    int arreglo1[2],arreglo2[3];
    int arreglo[1]= 'fernando';
    arreglo2[2]= 'oscar';
    arreglo2[1]=74;
    arreglo2[2]=56;
    arreglo2[3]=10;
    std::cout<<"arreglo 1";
    for (i=1; i<2; i++)
    {
        std::cout<<"el dato en la posicion "<< i <<" es: "<< arreglo1[i] <<std::endl;
    }
    std::cout<<"arreglo 2";
    for (i=1; i<3; i++)
    {
        std::cout<<"el dato en la posicion "<< i <<" es: "<<arreglo2[i];
    }
    return 0;
}
