 /*Desarrollar un programa que solicite ingresar una contrase�a, que realice
la confirmaci�n de dicha contrase�a y nos diga acceso permitido, o acceso
denegado, dicha solicitud solamente tendr� 5 intentos, de lo contrario se
cerrar�.*/ 
#include <iostream>
using namespace std;
int main(){
    string contra = "REALHASTALAMUERTEFI";
    string password;
	cout<<"Ingrese su password:"<<endl;
	cin >> password;
	for (int i=1; i<5; i++){
		if(password == contra){
			cout<<"Contrase�a correcta! "<<endl;
			break;
		}else{
			cout<<"Contrase�a incorrecta, favor ingresar nuevamente: "<<endl;
			cin>> password;
		}if(i==4){
			cout <<"Haz realizado 5 intentos, tu celular ha sido bloqueado, CHEKE MI CHELE"<<endl;
		}
	}
	return 0;
}
