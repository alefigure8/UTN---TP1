//Nombre: GOMEZ NIETO ALEJANDRO
//TP N� 1
//EJ N� 3
//Comentarios: Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 m�s $ 2.000 de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.

#include<iostream>
using namespace std;

int main (void){
   const int sueldo = 15000;
   const int premio = 2000;
   int premio_total, cant_autos, resultado;

   cout << "Ingrese la cantidad de autos vendidos: ";
   cin >> cant_autos;

   premio_total = premio * cant_autos;
   resultado = premio_total + sueldo;

   cout << endl
        << "Sueldo total: "
        << resultado;

   return 0;
}
