#include  <iostream>
using namespace std;

int main()
{
    int p,a,i,numero;
   int cont=0;
   std::cout<<"digite el numero de posiciones (tamaño)";
   std::cin>> p;
   int num[p];
   for (i=1; i<p; i++)
   {
    std::cout<<"digite numero"<< i <<std::endl;
    std::cin>> numero;
    num[i]=numero;
   }
   for (i=1; i<p; i++)
   {
    std::cout<<"los numeros ingresados son: "<< num[1]<<std::endl;
    if (num[i]>0)
    {
        cont=cont+1;
    }
   }
   std::cout<<"hay "<< cont <<"numeros positivos";
   return 0;
}