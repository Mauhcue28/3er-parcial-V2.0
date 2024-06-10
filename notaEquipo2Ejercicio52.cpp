//Equipo 2
//Fecha de Entrega 10/06/2024
//Jedreck___funciones

#include <iostream>

using namespace std;

float calcularPromedio(float parcial1, float parcial2, float parcial3) {
   return (parcial1 * 0.2) + (parcial2 * 0.2) + (parcial3 * 0.6);
}

float obtenerNotaMaxima(float notaExamen, float notaContinua){ 
return(notaExamen > notaContinua)? notaExamen : notaContinua;
} //Mauricio_funcion_promedio

//elizabeth:declarar y leer las calificaciones
int main () {
  char respuesta;
for(;;) {
  float parcial1,parcial2,parcial3,notaExamen,notaContinua,notaFinal;
  cout<<"ingrese la calificacion del primer parcial";
  cin>>parcial1;
  cout<<"ingrese la calificacion del segundo parcial";
  cin>>parcial2;
  cout<<"ingrese la calificacion de la nota continua";
  cin>>notaContinua;
  //Alexandra Calcular promedio final
   notaExamen= calcularPromedio(parcial1,parcial2,parcial3);
   notaFinal= obtenerNotaMaxima(notaExamen,notaContinua);

   cout<<"La nota final es:"<<notaFinal<<endl;

   cout<<"Desea ingresar una nueva nota?(s para salir)";
   cin>> respuesta;

   while(respuesta=='s') {
       break;
   }
}

   return 0;
}
