//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 7
//Comentarios: Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importa a pagar.


#include <iostream>
using namespace std;

int main (void){
  float precio, descuento;

  cout << "Ingrese el importe de la venta: ";
  cin >> precio;
  cout << "Ingrese el porcentaje de descuento: ";
  cin >> descuento;

  float total_descuento = (100 - descuento) / 100;
  float precio_descuento = precio * total_descuento;

  cout << endl 
       << "Total a pagar: $"
       << precio_descuento;

  return 0;
}