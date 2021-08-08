///Ejercicio: N° 11
///Autor: LGR
///Fecha:04/08/2021
///Comentarios: ME COSTO DARME CUENTA QUE PARA SACAR EL RESTO DE HORAS, PRIMERO DEBERIA CALCULAR LAS HORAS.

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

int M, RM, HORAS, RH, RD;

cout<< "Ingrese la cantidad de minutos: "<<endl;
cin>>M;

RM=M%60;
HORAS=(M-RM)/60;
RH=HORAS%24;
RD=(HORAS-RH)/24;

cout<<"Son dias: "<<RD<<endl;
cout<<"Son horas: "<<RH<<endl;
cout <<"Son minutos: "<<RM<<endl;

system ("pause");
return 0;
}
