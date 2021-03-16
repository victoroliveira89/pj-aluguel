#include <iostream>

#include "dominio.h"

using namespace std;

int main() {

    int teste;

    Codigo *cod = new Codigo();
    cod->setValor(11);
    teste = cod->getValor();

    cout << teste;


    return 0;
}
