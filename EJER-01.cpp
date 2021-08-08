///Ejercicio:
///Autor:
///Fecha:
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

int HT, VH, SUELDO;

cout<< "Ingrese horas trabajadas por el empleados: "<<endl;
cin>>HT;
cout<< "Ingrese el valor de la hora: "<<endl;
cin>>VH;

SUELDO=HT*VH;

cout<< "Sueldo a pagar al empleado es: "<<SUELDO<<endl;

system ("pause");
return 0;
}
