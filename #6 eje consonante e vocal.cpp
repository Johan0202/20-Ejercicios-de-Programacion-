/*Generar un programa que permita ingresar un carácter, e
identifique si es una vocal o una consonante.*/
#include<iostream>
using namespace std;
int main (){
	char l;
	cout << "Ingrese una letra : ";	
	cin >> l;
	switch(l){
	case 'a':
		cout << "\nVOCAL"; break;		
	case 'e':
		cout << "\nVOCAL"; break;		
	case 'i':
		cout << "\nVOCAL"; break;		
	case 'o':
		cout << "\nVOCAL"; break;		
	case 'u':
		cout << "\nVOCAL"; break;		
	default:		
		cout << "\nCONSONANTE";
	}
	return 0;
}	
	
