/*Elaborar un programa que reciba un 
numero entre el 10 y 15 y mencionar si el
numero ingresado fue elegido, de lo contrario
utilizar el 
default para imprimir, numero
ingresado esta fuera del rango.*/

#include<iostream>
using namespace std;
int main (){
	int num;
	cout<<"Ingrese un numero entre el 10 y 15"<<endl;
	cin>>num;
	
	switch(num){
		case 11:cout<<"El numero ingresado es 11"<<endl;
	break;
		case 12:cout<<"El numero ingresado es 12"<<endl;
	break;
	    case 13:cout<<"El numero ingresado es 13"<<endl;
	break;
		case 14:cout<<"El numero ingresado es 14"<<endl;
	break;
		case 15:cout<<"El numero ingresado es 15"<<endl;
	break;
		case 16:cout<<"El numero ingresado es 16"<<endl;
	break;
		
	default: cout<<"Numero ingresado esta fuera del rango";
	break;	
		
	}
		
	
	
	
	
	return 0;
}
