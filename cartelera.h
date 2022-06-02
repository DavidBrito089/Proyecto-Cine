#ifndef CARTELERA_H
#define CARTELERA_H
#include <iostream>
#include "combos.h"
#include "peliculas.h"
#include "asientos.h"
#include "boletos.h"
class Cartelera:public Peliculas,public Asientos
{
private:
    vector <Peliculas> pelis;
    vector <int> Asiento;
    vector <Combos> tienda;
public:
    Cartelera();
    void listarTodaslasPelis();
    void imprmir();
    void imprimirAsientos();
    void seleccionarA();
    void SALASDELCINE(int A[][5]);
    void listaDeCombos();
    void imprimirCombos();
    void combos();
};

#endif // CARTELERA_H
