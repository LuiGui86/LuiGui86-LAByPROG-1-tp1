///Ejercicio: Ejercicio 04
///Autor: LGR
///Fecha: 01/08/2021
///Comentarios: me costo un poco pensar en el porcentaje no ocupado

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

int CA, AV, ANV;
float PO, PNO;

cout << "Ingrese cantidad de asientos disponibles: "<<endl;
cin >> CA;
cout <<"Ingrese cantidad de asientos vendidos: " <<endl;
cin >> AV;

ANV= CA-AV;
PO= (AV*100)/CA;
PNO= (ANV*100)/CA;

cout<< "El porcentaje de asiento disponible es: "<< PO << endl;
cout<< "El porcentaje de asiento no disponible es: "<< PNO << endl;

system ("pause");
return 0;
}
