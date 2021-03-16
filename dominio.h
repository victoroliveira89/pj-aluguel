#ifndef DOMINIO_H_INCLUDED
#define DOMINIO_H_INCLUDED
#include <stdexcept>

using namespace std;

class Codigo {

private:
    int valor;
    void validar(int);

public:
    void setValor(int);
    int getValor() const {
        return valor;
    }

};

class Classe {

private:
    int valor;
    void validar(int);

public:
    void setValor(int);
    int getValor() const {
        return valor;
    }

};

class Descricao {

private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const {
        return valor;
    }
};

class Endereco {

private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const {
        return valor;
    }
};

class Data {

private:
    int valor;
    void validar(int);

public:
    void setValor(int);
    int getValor() const {
        return valor;
    }
};

class Numero {

private:
    int valor;
    void validar(int);

public:
    void setValor(int);
    int getValor() const {
        return valor;
    }
};

class Moeda {

private:
    double valor;
    void validar(double);

public:
    void setValor(double);
    double getValor() const {
        return valor;
    }
};

class Email {

private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const {
        return valor;
    }
};

class Senha {

private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const {
        return valor;
    }
};

class Telefone {

private:
    int valor;
    void validar(int);

public:
    void setValor(int);
    int getValor() const {
        return valor;
    }
};


#endif // DOMINIO_H_INCLUDED
