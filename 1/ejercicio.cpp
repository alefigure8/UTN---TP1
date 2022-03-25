//Nombre: GOMEZ NIETO ALEJANDRO
//TP Nº 1
//EJ Nº 1
//Comentarios:
#include <iostream>
using namespace std;

int main (void){
    int horas;
    float resultado, precio_hora;
    cout << "Cantidad de Horas trabajadas: ";
    cin >> horas;
    cout << "Precio por Hora Trabajada: ";
    cin >> precio_hora;
    resultado = horas * precio_hora;
    cout << endl
         << "Total: "
         << resultado;
    return 0;
}
