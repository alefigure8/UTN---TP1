//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 13
//Comentarios: Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.

#include <iostream>
using namespace std;

int main (void){
  int importe, billetes_1000, billetes_500, billetes_200, billetes_100, aux;

  cout << "Ingrese el importe ";
  cin >> importe;

 billetes_1000 = importe / 1000;
 aux =  importe % 1000;
 billetes_500 = aux / 500;
 aux = aux % 500;
 billetes_200 = aux / 200;
 aux = aux % 200;
 billetes_100 = aux / 100;

 cout << "Entregar: "
      << billetes_1000
      << " billetes de 1000, "
      << billetes_500
      << " billetes de 500, "
      << billetes_200
      << " billetes 200 y "
      << billetes_100
      << " billetes de 100";

  return 0;
}