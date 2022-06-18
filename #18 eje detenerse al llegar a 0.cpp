/*Desarrollar un ejercicio que permite ingresar
 N cantidad de números, y 
que se detenga hasta que ingrese un valor = 0 */
#include <iostream>
using namespace std;
int main (){
	int contador= 0;
	float promedio;
	float acumulador;
	float num;	
	cout<<" ingrese un numero :"<<endl;
		cin>> num; 
	while (num!= 0)
	{
	
		acumulador = acumulador + num ;
		contador++;
    } 

	 return 0;
}
