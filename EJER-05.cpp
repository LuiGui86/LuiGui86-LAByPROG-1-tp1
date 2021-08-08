///Ejercicio:
///Autor:
///Fecha:
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

float MA, MB, MC, TAV;
float PMA, PMB, PMC;

cout << "Ingresar cantidad de alfajores marca A vendidos: "<<endl;
cin >> MA;
cout << "Ingresar cantidad de alfajores marca B vendidos: "<<endl;
cin >> MB;
cout << "Ingresar cantidad de alfajores marca C vendidos: "<<endl;
cin >> MC;

TAV = MA+MB+MC;
PMA= (MA*100)/TAV;
PMB= (MB*100)/TAV;
PMC= (MC*100)/TAV;

cout<<"Porcentaje de alfajores marca A : "<<PMA<<endl;
cout <<"Porcentaje de alfajores marca B: "<<PMB<<endl;
cout<<"Porcentaje de alfajores marca C: "<<PMC<<endl;

system ("pause");
return 0;
}
