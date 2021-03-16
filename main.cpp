#include <iostream>

#include "dominio.h"

using namespace std;

int main() {

    int teste;

    Classe *cla = new Classe();
    cla->setTipo(0);
    teste = cla->getTipo();

    cout << teste;


    return 0;
}
