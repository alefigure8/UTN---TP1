//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 8
//Comentarios: Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.



#include <iostream>
using namespace std;

int main (void){
  float precio, descuento_precio;

  cout << "Ingrese el importe de la venta: ";
  cin >> precio;
  cout << "Ingrese el precio con descuento : ";
  cin >> descuento_precio;

  float porc_descuento = 100 - ((descuento_precio * 100) / precio);

  cout << endl << "Venta sin descuento: $" << precio;
  cout << endl << "Venta con descuento: $" << descuento_precio;
  cout << endl << "Porcentaje de descuento: " << porc_descuento << "%";

  return 0;
}