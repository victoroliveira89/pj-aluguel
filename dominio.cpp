#include "dominio.h"

void Codigo::validar(int valor){
    if (valor == 11)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setValor(int val){
    validar(val);
    this->valor = val;
}
