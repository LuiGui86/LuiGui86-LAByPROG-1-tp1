///Ejercicio: N° 9
///Autor:LGR
///Fecha:04/08/2021
///Comentarios: me costo sacar la cantidad de horas

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

int MIN, M, H;

cout<< "Ingrese la cantidad de minutos: "<<endl;
cin>> MIN;

M=MIN%60;
H=(MIN-M)/60;

cout<< "Son horas: "<<H<<endl;
cout<< "Son minutos: "<<M<<endl;

system ("pause");
return 0;
}
