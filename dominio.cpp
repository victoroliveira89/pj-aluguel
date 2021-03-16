#include "dominio.h"

void Matricula::validar(int valor){
    if (valor == 11)
        throw invalid_argument("Argumento invalido.");
}

void Matricula::setValor(int val){
    validar(val);
    this->valor = val;
}
