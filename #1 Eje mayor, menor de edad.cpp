/*Desarrollar un programa que permita ingresar el a�o de
nacimiento de una persona y el programa determine si es
mayor de edad o no lo es*/
#include<iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"Ingrese el a�o de su nacimiento:"<<endl;
	cin>>num;
	if(num<=2004)
		cout<<"mayor de edad"<<endl;
	if(num>=2005)
		cout<<"menor de edad"<<endl;
	return 0;
}































































































































