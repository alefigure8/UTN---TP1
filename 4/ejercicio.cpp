//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 4
//Comentarios: Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avion y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupacion y el porcentaje de no ocupacion del mismo.

#include <iostream>
using namespace std;

int main (void){
  int asientos, pasajes;
  float ocupados, vacios;

  cout << "Ingrese la cantidad de asientos: ";
  cin >> asientos;
  cout << "Ingrese la cantidad de pasajes vendidos: ";
  cin >> pasajes;

  ocupados = (pasajes * 100) / asientos;
  vacios = 100 - ocupados;

  cout << endl
       << "Total de asientos ocupados: "
       << ocupados << "%"
       << endl
       << "Total de asientos vacios: "
       << vacios << "%";

  return 0;
}
