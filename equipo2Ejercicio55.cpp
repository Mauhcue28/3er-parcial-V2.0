#include <iostream>
using namespace std;
int main() 
{
int opcion;
  cout<<"Selecciona el usuario que deseas:";
  cout<<"1)Anonimo :)";
  cout<<"2)Usuario registrado :)";
  cout<<"3)Usuario administrativo :)";
  cin>> opcion;
  switch(opcion)
  {
    case '1':
      
      cout<<"Seleccionaste usuario anonimo :)";
      break;    
  case '2':
  
      cout<<"Seleccionaste usuario registrado :)";
    break;
  case '3':
    
    cout<<"Seleccionaste usuario administrativo :0";
    break;
  }
  return 0;
}