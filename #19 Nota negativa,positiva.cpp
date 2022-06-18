/* Ingresar la cantidad de notas de un estudiante, el programa finalizará
hasta que se ingrese una nota Negativa, el programa mostrará el promedio y
sumatoria de los números ingresados*/
#include <iostream>
using namespace std; 
int main(){
    int nota, suma = 0, contador = 0;
    float promedio;
    cout << "Ingrese la nota: ";
    cin >> nota;

    while (nota >= 0)
    {
        suma = suma + nota;
        contador++;
        cout << "Ingrese la nota: ";
        cin >> nota;
    }

    promedio = suma / contador;
    cout << "El promedio es: " << promedio << endl;
    cout << "La suma es: " << suma << endl;

    return 0;
}
