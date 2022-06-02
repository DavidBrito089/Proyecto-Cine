#include "boletos.h"

Boletos::Boletos()
{

}

void Boletos::setformatosala()
{

}

char Boletos::formato()
{
    char linea[60];
        for(int i=0; i<60; i++){
            linea[i]='=';
        }
        cout<<" ";

        cout<<endl;

        cout<<"|=";
        for(int i=0; i<57; i++){
            cout<<linea[i];
        }
        cout<<"=|";
        cout<<endl;


        for(int i=0; i<61; i++){
            cout<<sala[i];
        }

        cout<<endl;

        for(int i=0; i<61; i++){
            cout<<hora[i];
        }

        cout<<endl;

        for(int i=0; i<61; i++){
            cout<<asiento[i];
        }

        cout<<endl;

        for(int i=0; i<61; i++){
            cout<<pelicula[i];
        }


        //linea inferior
        cout<<endl;
        cout<<"|=";
        for(int i=0; i<57; i++){
            cout<<linea[i];
        }
        cout<<"=|";
}
