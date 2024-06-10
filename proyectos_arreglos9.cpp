#include  <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i, pos;
    char nombre;
    std::cout<<"digite el numero de paises";
    std::cin>> n;
    int paises[n];
   for (i=1; i<n-1; i++)
   {
    std::cout<<"digite pais "<< i <<std::endl;
    std::cin>> nombre;
    paises[i]=nombre;
   }
   std::cout<<"digite la posicion";
   std::cin>> pos;
   std::cout<<"el pais que hay en la posicion "<< pos <<" es: "<< paises[pos];
return 0;
}