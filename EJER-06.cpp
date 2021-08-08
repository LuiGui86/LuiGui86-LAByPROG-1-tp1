///Ejercicio: N°6
///Autor:LGR
///Fecha:04/08/2021
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

float SEM1, SEM2, SEM3, SEM4, TOTAL, PROMEDIO, PSEM1, PSEM2, PSEM3, PSEM4;

cout<< "Total recaudado semana 1: "<<endl;
cin>> SEM1;
cout<< "Total recaudado semana 1: "<<endl;
cin>> SEM2;
cout<< "Total recaudado semana 1: "<<endl;
cin>> SEM3;
cout<< "Total recaudado semana 1: "<<endl;
cin>> SEM4;

TOTAL= SEM1+SEM2+SEM3+SEM4;
PROMEDIO= TOTAL/4;
PSEM1= (SEM1*100) / TOTAL;
PSEM2= (SEM2*100) / TOTAL;
PSEM3= (SEM3*100) / TOTAL;
PSEM4= (SEM4*100) / TOTAL;

cout<< "El promedio recaudado en el mes fue de: "<< PROMEDIO<<endl;
cout<< "El porcentaje recaudado de la semana 1 fue de: "<<PSEM1<<endl;
cout<< "El porcentaje recaudado de la semana 2 fue de: "<<PSEM2<<endl;
cout<< "El porcentaje recaudado de la semana 3 fue de: "<<PSEM3<<endl;
cout<< "El porcentaje recaudado de la semana 4 fue de: "<<PSEM4<<endl;

system ("pause");
return 0;
}
