///Ejercicio: N°07
///Autor:LGR
///Fecha:04/08/2021
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

    float IV, PD, DES, TOTAL;

    cout << "Ingresar el importe de venta: "<<endl;
    cin>> IV;
    cout<< "Ingresar el porcentaje de descuento: "<<endl;
    cin>> PD;

    DES=(IV*PD) / 100;
    TOTAL=IV-DES;

    cout<< "El importe total a pagar con descuento es: "<<TOTAL<<endl;



system ("pause");
return 0;
}
