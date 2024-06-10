#include  <iostream>
using namespace std;

int main()
{
   int f, c, i, j, numero;
   std::cout<<"digite el numero de filas";
   std::cin>> f;
   std::cout<<"digite el numero de columnas";
   std::cin>> c;
   int matriz[f && c];
   for (i=1; i<f; i++)
   {
    for (j=1; j<c; j++)
    {
        std::cout<<"digite el dato para la fila"<< i <<" columna "<< j <<std::endl;
        std::cin>> numero;
        matriz[i && j]=numero;
    }
   }
   for (i=1; i<f; i++)
   {
    for (j=1; j<c; j++)
    {
        std::cout<<"los datos que hay en la matriz son "<< matriz[i && j] <<std::endl;
    }
   }
   return 0;
}