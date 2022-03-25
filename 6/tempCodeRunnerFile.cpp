//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 6
//Comentarios: Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatros semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.


#include <iostream>
using namespace std;

int main (void){
  float semana_1, semana_2, semana_3, semana_4;
  float porc_semana_1, porc_semana_2, porc_semana_3, porc_semana_4;

  cout << "Ventas de la primera semana: ";
  cin >> semana_1;
  cout << "Ventas de la segunda semana: ";
  cin >> semana_2;
  cout << "Ventas de la tercera semana: ";
  cin >> semana_3;
  cout << "Ventas de la cuarta semana: ";
  cin >> semana_4;

  float total_semana = semana_1 + semana_2 + semana_3 + semana_4;
  float porcentaje_semana = total_semana / 4;

  porc_semana_1 = (semana_1 * 100) / total_semana;
  porc_semana_2 = (semana_2 * 100) / total_semana;
  porc_semana_3 = (semana_3 * 100) / total_semana;
  porc_semana_4 = (semana_4 * 100) / total_semana;

  cout << endl << "Promedio de ventas: " << porcentaje_semana;
  cout << endl << "Porcentaje semana 1: " << porc_semana_1;
  cout << endl << "Porcentaje semana 2: " << porc_semana_2;
  cout << endl << "Porcentaje semana 3: " << porc_semana_3;
  cout << endl << "Porcentaje semana 4: " << porc_semana_4;

  return 0;
}