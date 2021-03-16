#include "dominio.h"
#include <cstring>

// METODOS CODIGO
void Codigo::validar(string valor){
    if (valor == "00000")
        throw invalid_argument("Valor do codigo invalido.");
}

void Codigo::setCod(string val){
    validar(val);
    this->cod = val;
}
// FIM METODOS CODIGO

// METODOS CLASSE
void Classe::validar(int valor){
    if(valor < 1 || valor > 3)
        throw invalid_argument("Valor do classe invalido.");
}

void Classe::setTipo(int valor){
    validar(valor);
    this->tipo = valor;
}
// FIM METODOS ClASSE

void Descricao::validar(string valor){
    if (strlen(valor) != 30)
        throw invalid_argument("Valor do codigo invalido.");
}

void Descricao::setDes(string val){
    validar(val);
    this->des = val;
}
