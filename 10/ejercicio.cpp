//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 10
//Comentarios: Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen.

#include <iostream>
using namespace std;

int main (void){
  int total_horas, horas, dias, resto_dias;

  cout << "Ingrese el total de horas: ";
  cin >> total_horas;

  dias =  total_horas / 24;
  horas = total_horas % 24;

  cout << endl
       << total_horas
       << " equivale a "
       << dias << " dia y "
       << horas
       << " Horas";

  return 0;
}