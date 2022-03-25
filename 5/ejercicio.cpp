//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 5
//Comentarios: Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.


#include <iostream>
using namespace std;

int main (void){
  int alfa_1, alfa_2, alfa_3;
  float porc_alfa_1, porc_alfa_2, porc_alfa_3;

  cout << "Ingrese cantidad de alfajores de la primera marca: ";
  cin >> alfa_1;
  cout << "Ingrese cantidad de alfajores de la segunda marca: ";
  cin >> alfa_2;
  cout << "Ingrese cantidad de alfajores de la tercera marca: ";
  cin >> alfa_3;

  float total_vendidos = alfa_1 + alfa_2 + alfa_3;

  porc_alfa_1 = (alfa_1 * 100)/ total_vendidos;
  porc_alfa_2 = (alfa_2 * 100)/ total_vendidos;
  porc_alfa_3 = (alfa_3 * 100)/ total_vendidos;

  cout << endl << "Alfajores marca 1: " << porc_alfa_1 << "%";
  cout << endl << "Alfajores marca 3: " << porc_alfa_2 << "%";
  cout << endl << "Alfajores marca 4: " << porc_alfa_3 << "%";

  return 0;
}
