#include<iostream>
using namespace std;
int main(){
	float num1,num2,num3,num4, promedio, suma;
	
	cout<<"Ingrese la nota de fisica"<<endl;
	cin>>num1;
	cout<<"Ingrese la nota de Economia"<<endl;
	cin>>num2;
	cout<<"Ingrese la nota de Biologia"<<endl;
	cin>>num3;
	cout<<"Ingrese la nota de programacion"<<endl;
	cin>>num4;

	
	promedio=(num1+num2+num3+num4)/4;
	suma=(num1+num2+num3+num4);
	
	cout<<"El promedio es:"<<promedio<<endl;
	cout<<"La sumatoria es:"<<suma<<endl;
	
	return 0;
}
