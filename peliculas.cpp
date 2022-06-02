#include "peliculas.h"


Peliculas::Peliculas()
{

    this->hora="0";
    this->titulo="";
    this->duracion=0;
    this->estado="";
}

Peliculas::Peliculas(string titulo, float duracion, bool estado, string hora)
    :titulo(titulo), hora(hora), duracion(duracion),estado(estado)
{
    Peliculas::enumerar++;
    this ->id = Peliculas::enumerar;
}

string Peliculas::getHora()
{
 return this->hora;
}
/*
void Peliculas::setTitulos(string As[5])
{
    As[0]=("Spider-Man: Sin camino a casa\t\t");
    As[1]=("Doctor Strange en el Multiverso de la Locura");
    As[2]=("The Batman\t\t");
    As[3]=("Deadpool 2\t");
    As[4]=("Toy Story 4\t");
    this->titulo=As[5];
}

void Peliculas::setDuracion(float D[5])
{
    D[0]=160;
    D[1]=121;
    D[2]=145;
    D[3]=120;
    D[4]=180;
   this->duracion=D[5];
}

void Peliculas::setEstreno(bool value)
{
    value=true;
    this->estado=value;
}*/
string Peliculas::getDuracion()
{
    return to_string(this->duracion);
}
string Peliculas::getTitulos()
{
    return this->titulo;
}

string Peliculas::Estreno()
{
    return this->estado? " *Esta en estreno* " : " *No esta en estreno* ";
}

int Peliculas::getid()
{
    return this ->id;
}
string Peliculas::cartelera()
{
    string a;
    return to_string(this->id)+" - "+
            "["+this->hora+"]"+getTitulos()+"("+getDuracion()+")"+Estreno();
}
