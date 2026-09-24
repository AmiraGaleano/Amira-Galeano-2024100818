
//EJERCICIO 1:solicita al usuario los dias de la semana en valor numerico e imprime su equivalente 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
 
 int main(){
 	//declaracion de variables
 	int diaSemana; 
 	//ingreso del dato solicitado al usuario
 	cout << "Ingresa un valor de la semana: ";
 	cin >> diaSemana;
 	//mensaje del equivalente del dia con case
 	switch(diaSemana){
	 case 1:
	 	cout <<"El dia es lunes";
		break;
	case 2:
	 	cout <<"El dia es martes";
		break;	
	case 3:
	 	cout <<"El dia es miercoles";
		break;	
	case 4:
	 	cout <<"El dia es jueves";
		break;	
	case 5:
	 	cout <<"El dia es viernes";
		break;	
	case 6:
	 	cout <<"El dia es sabado";
		break;	
	case 7:
	 	cout <<"El dia es domingo";
		break;	
	//mensaje cuando el valor no es valido
	 default:
	 	cout <<"Dia de la semana no valido";
		break;
	 }
	 return 0;
 }
