//grupo1
//commit 2
#include <iostream>
#include "cartelera.h"
using namespace std;
int Peliculas::enumerar=0;
int main()
{
    Cartelera A;
    A.listarTodaslasPelis();
    A.listaDeCombos();
    int op;
    do{
        cout << "\n\tMENU" << endl;

                cout << "\n1. MOSTRAR CARTELERA" << endl;
                cout << "2. MOSTRAR SALA" << endl;
                cout << "3. COMPRAR BOLETOS" << endl;
                cout << "4. Tienda de Snaks" << endl;
                cout << "0. SALIR" << endl;
                cout << "ingrese la opcion: ";
    cin>>op;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"\n\nError esto es una letra solo se aceptan numeros";
        cout<<"\nIngrese la opcion nuevamente: ";
        cin>>op;
        cout<<"\n";
    };
    switch (op) {
    case 1:
        A.imprmir();
        system("pause");
        break;
    case 2:
        A.imprmir();
        A.imprimirAsientos();
        system("pause");
        break;
    case 3:
        A.seleccionarA();
        break;
    case 4:
        A.combos();
        cout<<"Seleccione un combo: ";
        A.imprimirCombos();
        system("pause");
        break;
    default:
        break;
    }
    }while(op!=0);
    return 0;
}
