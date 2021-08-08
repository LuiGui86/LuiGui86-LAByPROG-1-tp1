///Ejercicio: N° 8
///Autor:LGR
///Fecha:04/08/2021
///Comentarios: me costo un poco el que me de el porcentaje de descuento realizado.

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

float IV, IVCD, DES;

cout << "Ingresa el importe de venta: "<<endl;
cin>> IV;
cout<< "Ingrese el importe con el descuento realizado: "<<endl;
cin>>IVCD;

DES= 100 -((IVCD*100)/IV);

cout << "El porcentaje de descuento realizado en la venta es de: "<<DES<<endl;

system ("pause");
return 0;
}
