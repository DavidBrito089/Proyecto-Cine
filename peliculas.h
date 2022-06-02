#ifndef PELICULAS_H
#define PELICULAS_H
#include <string>
#include <vector>
using namespace std;
class Peliculas
{
private:
    string titulo,hora;
    int id;
    float duracion;
    bool estado;
public:
    Peliculas();
    Peliculas(string titulo,float duracion,bool estreno,string hora);
    static int enumerar;
    /*void setTitulos(string As[5]);
    void setDuracion(float D[5]);
    void setEstreno(bool value);
    void setHora(string value);*/
    string getHora();
    string getTitulos();
    string getDuracion();
    string cartelera();
    string Estreno();
    int getid();
};

#endif // PELICULAS_H
