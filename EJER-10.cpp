///Ejercicio: N°10
///Autor: LGR
///Fecha: 04/08/2021
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

int H, RH, RD;

cout<<"Ingrese cantidad de horas: "<<endl;
cin>>H;

RH= H%24;
RD= (H-RH) / 24;

cout << "La cantidad de dias es: "<<RD<<endl;
cout << "La cantidad de horas es: "<<RH<<endl;

system ("pause");
return 0;
}
