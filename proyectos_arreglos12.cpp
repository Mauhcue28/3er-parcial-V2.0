#include  <iostream>
using namespace std;

int main()
{
    int acum=0;
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
    acum=acum+matriz[i && 1];
   }
   for (i=1; i<f; i++)
   {
    for (j=1; j<c; j++)
    {
        std::cout<< matriz[i && j] <<std::endl;
    }
   }
   std::cout<<"todos los elementos de la columna 1 suman un total de:  "<<  acum <<std::endl;
   return 0;
}