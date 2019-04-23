#ifndef MOTORISTA_H
#define MOTORISTA_H

#include <iostream>
#include <string>

using std::cout;
using std::string;


class Motorista
{
public:
    Motorista();
    ~Motorista();
    
    void mostrarIformacaoMotorista();
private:
    
    string nome;
    string numeroPlaca;
};

#endif // MOTORISTA_H
