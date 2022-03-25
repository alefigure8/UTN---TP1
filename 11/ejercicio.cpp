//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 11
//Comentarios: Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.

#include <iostream>
using namespace std;

int main (void){
  int total_minutos, minutos, horas, dias, resto_dias;

  cout << "Ingrese el total de minutos: ";
  cin >> total_minutos;

  dias = total_minutos / 1440;
  resto_dias = total_minutos % 1440;
  horas = resto_dias / 60;
  minutos = resto_dias % 60;

  cout << endl
       << total_minutos
       << " equivale a "
       << dias
       << " dia, "
       << horas
       << " Horas y "
       << minutos
       << " minutos";

  return 0;
}