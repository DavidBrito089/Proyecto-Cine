#include "cartelera.h"

Cartelera::Cartelera()
{

}
void Cartelera::listarTodaslasPelis()
{

    string As[5];
    As[0]=("Spider-Man: Sin camino a casa               ");
    As[1]=("Doctor Strange en el Multiverso de la Locura");
    As[2]=("The Batman                                  ");
    As[3]=("Deadpool 2                                  ");
    As[4]=("Toy Story 4                                 ");
    float D[5];
    D[0]=160;
    D[1]=121;
    D[2]=145;
    D[3]=120;
    D[4]=180;
    int s[5];
    s[0]=true;
    s[1]=false;
    s[2]=true;
    s[3]=true;
    s[4]=false;
    string h[5];
    h[0]="10:40";
    h[1]="11:10";
    h[2]="22:50";
    h[3]="09:00";
    h[4]="17:00";
    for(int i=0;i<5;i++){
        Peliculas Peliculas(As[i],D[i],s[i],h[i]);
        this->pelis.push_back(Peliculas);
    }
}

void Cartelera::imprmir()
{
    for(Peliculas A:pelis){
        cout<<A.cartelera()<<endl;
    }
    cout<<"\nValor de las Entradas:3.50 por entrada\n";
}

void Cartelera::imprimirAsientos()
{
    int cont=0;
    cout<<"Ingrese la ide de la pelicula: ";
    int id;
    do{
        cin>>id;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"\n\nError esto es una letra solo se aceptan numeros";
            cout<<"\nIngrese la opcion nuevamente: ";
            cin>>id;
            cout<<"\n";
        };
        if(id>5 || id<1){
           cout<<"Error la id no fue encontrada ingrese nuevamente:";
           cin>>id;
           while(cin.fail()){
               cin.clear();
               cin.ignore();
               cout<<"\n\nError esto es una letra solo se aceptan numeros";
               cout<<"\nIngrese la opcion nuevamente: ";
               cin>>id;
               cout<<"\n";
           };
          }
    }while(id>5 || id<1);

        for(Peliculas A:pelis){
            cont++;
            if(id==cont){
                cout<<A.cartelera()<<endl;
                    int Al[5][5];
                    for (int i=0;i<5;i++){
                        for (int j=0;j<5;j++){
                                Al[i][j]=0;
                        }
                    }
                    cout<<endl;
                    SALASDELCINE(Al);
                    cout<<endl;
            }
        }

}

void Cartelera::seleccionarA()
{
    int conta=0;
    cout<<"Ingrese la ide de la pelicula: ";
    int id;
    do{
        cin>>id;
        while(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"\n\nError esto es una letra solo se aceptan numeros";
            cout<<"\nIngrese la opcion nuevamente: ";
            cin>>id;
            cout<<"\n";
        };
        if(id>5 || id<1){
           cout<<"Error la id no fue encontrada ingrese nuevamente:";
           cin>>id;
           while(cin.fail()){
               cin.clear();
               cin.ignore();
               cout<<"\n\nError esto es una letra solo se aceptan numeros";
               cout<<"\nIngrese la opcion nuevamente: ";
               cin>>id;
               cout<<"\n";
           };
          }
    }while(id>5 || id<1);

        for(Peliculas P:pelis){
            conta++;
            if(id==conta){
                cout<<P.cartelera()<<endl;
        Asientos Asi;
        int cuantos;
            cout<<"Ingrese el numero de voletos: ";
            cin>>cuantos;
            while(cin.fail()){
                cin.clear();
                cin.ignore();
                cout<<"\n\nError esto es una letra solo se aceptan numeros";
                cout<<"\nIngrese la opcion nuevamente: ";
                cin>>cuantos;
                cout<<"\n";
            };
            char s[5]={'a','b','c','d','e'};
            int A[5][5];
            int columnas=0;
            char filas;
            for (int i=0;i<5;i++){
                for (int j=0;j<5;j++){
                        A[i][j]=0;
                }
            }
            SALASDELCINE(A);
            int cont=1;
            string marcar="x";
            do{
                cout<<"ingrese el la fila y columna: ";
                cin>>filas;
                cin>>columnas;
                if(filas<'a'||filas>'e'){
                do{
                            cout<<"\nError No encontre esta butaca: ";
                            cin>>filas;
                            cin>>columnas;
                    }while(filas<'a'||filas>'e');
                }
                    for (int i=0;i<5;i++){
                        for (int j=0;j<6;j++){
                            if(filas==s[i] && columnas==j){
                                Asi.getF();
                                if(A[i][j-1]==1){
                                    cout<<"Error la butaca "<<Asi.getF()-1<<j<<" esta ocupada";
                                    cout<<"\ningrese la butaca nuevamente: ";
                                }else{
                                    A[i][j-1]=1;
                                    this->Asiento.push_back(A[i][j-1]);
                                    cont++;
                                }
                            }
                        }
                    }
            }while(cont<=cuantos);
                cout<<endl<<P.getTitulos()<<endl;
                SALASDELCINE(A);
                cont=1;
                float presio;
                presio=3.15;
                int edad;
                cout<<"ingrese la edad: ";
                cin>>edad;
                if(edad<12 or edad>60){
                    presio=1.60;
                }
                float total;
                cout<<"\nResumen de la compra\n";
                do{
                    cout<<"boleto #"<<cont<<endl;
                    cout<<"========================================================\n";
                    cout<<"|sala: "<<id<<"\t\t\t\t\t\t|"<<endl;
                    cout<<"|Hora: "<<P.getHora()<<"\t\t\t\t\t\t|"<<endl;
                    cout<<"|Asiento: "<<filas<<cont<<"\t\t\t\t\t\t|"<<endl;
                    cout<<"|Pelicula: "<<P.getTitulos()<<"\t|"<<endl;
                    cout<<"========================================================\n";
                    total=presio*cont;
                    cont++;

                }while(cont<=cuantos);
                    cout<<"\nTotal presio a pagar: "<<total;
            }
        }
}

void Cartelera::SALASDELCINE(int A[][5])
{
    char s;
        int w;
        string marcar="x";
        s='A';
        w=1;
        cout<<" ";
        for(int i=0;i<5;i++){
            cout<<" "<<w++<<" ";
        }
        cout<<endl;
        for (int i=0;i<5;i++){
            cout<<s++;
            for (int j=0;j<5;j++){
                if (A[i][j]== 0){
                cout<<" "<<"o"<<" ";
                }else if(A[i][j]== 1){
                cout<<" "<<marcar<<" ";
                }
            }
            cout<<"\n";
        }
}
void Cartelera::listaDeCombos()
{
    string As [7];
    As[0]=("COMBO 1:(1 Canguil MED + 1 Bebida MED + 1 Nacho)");
    As[1]=("COMBO 2:(1 Canguil GRA + 2 Bebidas GRA + 1 Mega Nacho)");
    As[2]=("COMBO 3:(1 Canguil MED + 1 Bebida MED + 1 Hot-Dog)");
    As[3]=("COMBO 4:(1 Canguil GRA + 2 Bebidas GRA + 1 Mega Hot-Dog)");
    As[4]=("COMBO 5:(1 Canguil GRA + 1 Bebida GRA + 1 Nacho + 1 Hot-Dog o 2 Nachos o 2 Hot-Dogs)");
    As[5]=("COMBO 6:(2 Canguiles MED + 2 Bebidas MED)");
    As[6]=("COMBO 7:INFANTIL:(1 Canguil Infantil + 1 Bebida PEQ + 1 Kinder Joy)");
    float P[7];
    P[0]=8.99;
    P[1]=12.99;
    P[2]=8.99;
    P[3]=12.99;
    P[4]=14.99;
    P[5]=9.99;
    P[6]=6.99;
    for (int i=0; i<7; i++){
        Combos C(As[i],P[i]);
        this -> tienda.push_back(C);
    }
}

void Cartelera::imprimirCombos()
{
    int id,cont=0;
    cin>>id;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"\n\nError esto es una letra solo se aceptan numeros";
        cout<<"\nIngrese la opcion nuevamente: ";
        cin>>id;
        cout<<"\n";
    };
    for(Combos c:tienda){
        cont++;
        if(id==cont){
            cout<<"Usted ha seleccionado El combo: ";
            cout << c.iCombos() << endl;
            cout <<"\nResumen de la compra\n\n";
            cout <<"Combos: "<< c.getCombos()<<endl;
            cout <<"Presio total: "<<c.getPresio()<<"|"<<endl;
        }
    }
}

void Cartelera::combos()
{

    for(Combos c:tienda){
        cout << c.iCombos() << endl;
    }
}


