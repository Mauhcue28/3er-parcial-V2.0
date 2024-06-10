#include <iostream>
#include <vector>
using namespace std;
 int main()
 {
    
    int acum=0;
    int i, num;
    
    std::vector<int>numeros;
    do
    {
        std::cout<<"digite un numero";
        std::cin>> num;
        
        if (num != 0)
        {
            numeros.push_back(num);   
        }  
    }while (num!=0 && numeros.size()<20);
     
    for (i=numeros.size()-1; i >= 0; i--)
    {
        acum =acum+numeros[i];
        std::cout<<"numero: "<< numeros[i]<<"suma" << acum << std::endl;
    }
    std::cout<<"la suma de los numeros es: "<< acum <<std::endl;
    return 0;
}