#include "asientos.h"

int Asientos::getColumnas()
{
    return this->columnas;
}

void Asientos::setColumnas(int newColumnas)
{
    this->columnas = newColumnas;
}

char Asientos::getPedirfilas()
{
    return this->pedirfilas;
}

void Asientos::setPedirfilas(char newPedirfilas)
{
    this->pedirfilas = newPedirfilas;
}

Asientos::Asientos()
{
    this->filas='A'-1;
    this->w=1;
}


void Asientos::setA(int a)
{

        for (int i=0;i<5;i++){
                for (int j=0;j<5;j++){
                    if(a==0){
                        this->A[i][j]=0;
                     }else if(a==1){
                        this->A[i][j]=1;
                        }
                }
        }
}

int Asientos::getA()
{
    for (int i=0;i<5;i++){
            for (int j=0;j<5;j++){
                return this->A[i][j];
            }
    }
    return 0;
}

char Asientos::getF()
{
    return this->filas++;
}


int Asientos::getW()
{
    return this->w++;
}
