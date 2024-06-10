#include <iostream>

int main()
{
    float h;
    int r;
   
    do { 
    std::cout << "Ingrese una hora en formato de 24 horas: ";
    std::cin >> h;
        if (h >= 1 && h < 12)
    {
        std::cout << "Buenos días" << std::endl;
    }
    
    else if (h >= 12 && h < 19)
    {
        std::cout << "Buenas tardes" << std::endl;
    }
    else if(h >= 19 && h <= 24)
    {
      std::cout<< "Benas noches"<< std::endl;
    }
    else
    {
        std::cout << "DATOS INVALIDOS" << std::endl;
    }
    std::cout<<"desea agregar otra hora? (1=si, 0=no)"<<std::endl;
    std::cin>> r;
    }while( r==1 || r==2);
    
    return 0;
}