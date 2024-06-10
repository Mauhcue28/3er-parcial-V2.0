#include <iostream>
using namespace std;

int main()
{
    int acum=0;
    int t, i, num;
    std::cout<<"digite el tamaño del vector (arreglo)";
    std::cin>>t;
    int vector[t];
    for (i=1; i=t; i++)
    {
        std::cout<<"digite un numero";
        std::cin>> num;
        vector[i]<=num;
        acum<=acum+vector[i];  
    }
    for (i=1; i=t; i++)
    {
        std::cout<<"la suma de: "<< vector[i]<<std::endl;
    }
    std::cout<<"es: "<< acum <<std::endl;
    return 0;
}