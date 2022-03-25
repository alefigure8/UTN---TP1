//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 2
//Comentarios: Hacer un programa que solicite por teclado que se ingresen dos n�meros y luego guardarlos en dos variables distintas. A continuaci�n se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.

#include<iostream>
using namespace std;

int main (void){
   int num, num2, aux;

   cout << "Ingrese un numero: ";
   cin >> num;
   cout << "Ingrese un segundo numero: ";
   cin >> num2;
   
   aux = num2;
   num2 = num;
   num=aux;
   cout << endl
        << "Primer numero: "
        << num << " "
        << "Segundo Numero: "
        << num2;

   return 0;
}