 /*Desarrollar un programa que solicite ingresar una contraseña, que realice
la confirmación de dicha contraseña y nos diga acceso permitido, o acceso
denegado, dicha solicitud solamente tendrá 5 intentos, de lo contrario se
cerrará.*/ 
#include <iostream>
using namespace std;
int main(){
    string contra = "REALHASTALAMUERTEFI";
    string password;
	cout<<"Ingrese su password:"<<endl;
	cin >> password;
	for (int i=1; i<5; i++){
		if(password == contra){
			cout<<"Contraseña correcta! "<<endl;
			break;
		}else{
			cout<<"Contraseña incorrecta, favor ingresar nuevamente: "<<endl;
			cin>> password;
		}if(i==4){
			cout <<"Haz realizado 5 intentos, tu celular ha sido bloqueado, CHEKE MI CHELE"<<endl;
		}
	}
	return 0;
}
