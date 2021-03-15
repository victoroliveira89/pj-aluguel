#include "dominio.h"

void Matricula::validar(int valor){

    if (valor == 00000)
        throw invalid_argument("Argumento invalido.");

}
