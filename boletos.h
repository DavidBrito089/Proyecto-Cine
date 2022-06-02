#ifndef BOLETOS_H
#define BOLETOS_H
#include <string>
#include <iostream>
#include "peliculas.h"
#include "asientos.h"
using namespace std;
class Boletos:public Peliculas,public Asientos
{
private:
    char sala[60];
    char hora[60];
    char asiento[60];
    char pelicula[60];
public:
    Boletos();
    void  setformatosala();
    char getformatos();
    void setformatohora(char A[50]);
    string getformatoho();
    void setformatoas(char A[50]);
    string getformatoas();
    void setformatopeliculas(char A[50]);
    string getformatope();
    char formato();

};

#endif // BOLETOS_H
