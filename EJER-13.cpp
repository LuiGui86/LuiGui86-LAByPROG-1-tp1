///Ejercicio:
///Autor:
///Fecha:
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

  int IMP, R1000, B1000, R500, B500, R200, B200, R100, B100;

cout << "Ingrese el importe: "<<endl;
cin >> IMP;

R1000=IMP%1000;
B1000=(IMP-R1000)/1000;
R500=R1000%500;
B500=(R1000-R500)/500;
R200=R500%200;
B200=(R500-R200)/200;
R100=R200%100;
B100=(R200-R100)/100;

cout<<"Cantidad de billete de 1000: "<<B1000<<endl;
cout<<"Cantidad de billetes de 500: "<<B500<<endl;
cout <<"Cantidad de billetes de 200: "<<B200<<endl;
cout <<"Cantidad de billetes de 100: "<<B100<<endl;



system ("pause");
return 0;
}
