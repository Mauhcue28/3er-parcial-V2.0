#include <iostream>
#include <vector>
using namespace std;
 int main()
 {
    std::vector<std::vector<int>>tabla(4, std::vector<int>(3));
int i, j;
for ( i = 0; i < 4; i++)
{
    for ( j = 0; i < 3; j++)
    {
        std::cout<<" ingrese valor de la fila "<< i+1<<" y columna"<< j+1 <<":";
        std::cin>> tabla[i][j];
    }
}
int mayor=0;
for (int j = 0; j < 3; i++)
{
    int suma=0;
    for ( i = 0; i < 4; i++)
    {
        suma= suma+tabla[i][j];
    }
if (suma>mayor)
{
    mayor=suma;

}
std::cout<<"la mayor suma de las columnas es: "<< mayor <<std::endl;
return 0;
}
 }