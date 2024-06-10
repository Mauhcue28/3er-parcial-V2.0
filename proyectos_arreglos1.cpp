#include <iostream>
using namespace std;

int main()

{
int i, numero;
int num[5];
for (i=0; i<5-1; i++ )
{
std::cout<< "digite el numero para la poscion"<< i << std::endl;
std::cin>> numero;
num[1]<=numero;
}
for (i=0; i<=5-1; i++ )
{
    std::cout<< "el dato en la posicion"<< i <<"es"<<num[1]<< std::endl;
}
return 0;
}