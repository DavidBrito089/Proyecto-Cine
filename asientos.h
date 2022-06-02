#ifndef ASIENTOS_H
#define ASIENTOS_H
#include <string>
using namespace std;
class Asientos
{
private:
    int A[5][5];
    int w;
    int columnas;
    char filas;
    char pedirfilas;
public:
    Asientos();
    void setA(int a);
    int getA();
    char getF();
    int getW();
    int getColumnas();
    void setColumnas(int newColumnas);
    char getPedirfilas();
    void setPedirfilas(char newPedirfilas);
};

#endif // ASIENTOS_H
