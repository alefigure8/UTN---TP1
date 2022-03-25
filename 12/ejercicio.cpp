//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 12
//Comentarios: Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por pantalla el importe total a pagar.


#include <iostream>
using namespace std;

int main (void){
  int huevos, docena, unidad, precio_docena, precio_unidad, total_precio;

  cout << "Ingrese el total de huevos: ";
  cin >> huevos;

  docena = huevos / 12;
  unidad = huevos % 12;

  precio_docena = docena * 100;
  precio_unidad = unidad * 12;

  total_precio = precio_docena + precio_unidad;

  cout << docena
       << " cajas y "
       << unidad
       << " Unidades. Total: $"
       << total_precio;

  return 0;
}