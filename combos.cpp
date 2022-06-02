#include <iostream>
#include "combos.h"
#include <vector>

Combos::Combos()
{

}

Combos::Combos(string C, float p):combos(C),p(p)
{

}

float Combos::getPresio()
{
    return this->p;
}

string Combos::getCombos()
{
    return this -> combos;

}

string Combos::iCombos()
{
    return this->combos+", Presio: "+to_string(this->p);
}
