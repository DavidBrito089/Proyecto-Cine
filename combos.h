#ifndef COMBOS_H
#define COMBOS_H
#include <string>

using namespace std;

class Combos
{
private:
    string combos;
    float p;
public:
    Combos();
    Combos(string C,float p);
    float getPresio();
    string getCombos();
    string iCombos();
};

#endif // COMBOS_H
