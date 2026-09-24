//EJERCICIO 2:Solicita al usuario dos numeros entre 1 a 99 y las operaciones basicas con funciones
#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>


using namespace std;
 
// Funciones para las operaciones
int sumar(int a, int b) {
    return a + b;
}
int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

double dividir(int a, int b) {
    return a / b;
}

// Función principal
int main(){
    
    // Solicitud de los dos números
    double num1 ;
    double num2 ;
    int numOper ;
    int result;
    cout << "Ingresa el primer numero (1-99): ";
    cin >> num1;
    cout << "Ingresa el segundo numero (1-99): ";
    cin >> num2;
   //validacion de numero
   		if (num1 < 1 || num1 > 99) {
   		 	cout << "Numero invalido. El número debe ser un entero entre 1 y 99.\n";
   		 	return num1;
   		}
   		if (num2 < 1 || num2 > 99) {
   		 	cout << "Numero invalido. El número debe ser un entero entre 1 y 99.\n";
   		 	return num2;
   		}
   	
    // Menú de opciones
    cout << "Elige la operación a realizar:"<< endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cin >> numOper;
    cout << "Resultado" ;
    // Estructura switch / case para manejar la selección
    switch (numOper) {
        case 1:
            cout << num1 << " + " << num2 << " = " << sumar(num1, num2) << endl;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << restar(num1, num2) << endl;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << multiplicar(num1, num2) << endl;
            break;
        case 4:
                cout << num1 << " / " << num2 << " = " << dividir(num1, num2) << endl;
            break;
        default:
            cout << "Opción no válida.";
            break;
    }

    return 0;
 }
