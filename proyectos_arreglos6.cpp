#include  <iostream>
using namespace std;

int main()
{
    int acum=0;
    int acum2=0;
    int t, i, num;
    std::cout<<"digite el tamaño de el vector 1";
    std::cin>>t;
    int vector1[t];
    for (i=1; i<t; i++)
    {
        std::cout<<"digite un numero"<< i <<std::endl;
        std::cin>> num;
        vector1[i]=num;
        acum=acum+vector1[i];
    }
    std::cout<<"digite el tamaño del vector 2";
    std::cin>> t;
    int vector2[t];
    for (i=1; i<t; i++)
    {
         std::cout<<"digite un numero"<< i <<std::endl;
         std::cin>>num;
         vector2[i]=num;
         acum2=acum2+vector2[i];
    }
    int vector3[2];
    vector3[i]=acum+acum2;
    std::cout<<"resultado total = "<< vector3[i];
    return 0;
}