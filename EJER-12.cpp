///Ejercicio:N° 12
///Autor:LGR
///Fecha:05/08/2021
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

int CHV, RS, RCA, PRS, PRCA, TOTAL;

cout << "Ingrese cantidad de huevos vendidos: "<<endl;
cin>> CHV;

RS=CHV%12;
RCA=(CHV-RS) /12;
PRS=RS*12;
PRCA=RCA*100;
TOTAL= PRS+PRCA;

cout<< "El total a pagar es: "<<TOTAL<<endl;

system ("pause");
return 0;
}
