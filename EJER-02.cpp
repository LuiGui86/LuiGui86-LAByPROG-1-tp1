///Ejercicio:
///Autor:
///Fecha:
///Comentarios:

# include <iostream>
# include <cstdlib>

using namespace std;

int main () {

    int A, B, C;

    cout << "Ingrese el primer numero: "<<endl;
    cin >> A;
    cout << "Ingrese el segun numero: "<<endl;
    cin>>B;

    C=B;
    B=A;
    A=C;

    cout << "El primer numero pasa a ser: "<< A << endl;
    cout << "El segundo numero pasa a ser: "<< B<< endl;

system ("pause");
return 0;
}
