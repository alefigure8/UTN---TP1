//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 9
//Comentarios: Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.



#include <iostream>
using namespace std;

int main (void){
  int total_minutos, minutos, horas;

  cout << "Ingrese el total de minutos: ";
  cin >> total_minutos;

  horas = total_minutos / 60;
  minutos = total_minutos % 60;

  cout << endl
       << total_minutos
       << " equivale a "
       << horas
       << " Horas y "
       << minutos
       << " minutos";

  return 0;
}