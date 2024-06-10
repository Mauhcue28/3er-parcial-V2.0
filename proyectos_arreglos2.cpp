#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i;
    char nombre;
    std::cout<<"digite el numero de posiciones";
    std::cin>> n;
    int personas[n];
    for (i=0; i<n-1; i++)
    {
        std::cout<<"digite un nombre para la posicion"<< i <<std::endl;
        std::cin>> nombre;
        personas[i]<=nombre;
    }
    for (i=0; i< n-1; i++)
    {
        std::cout<<"el dato en la posicion"<< i <<"es: "<< personas[i]<<std::endl;
    }
return 0;
}