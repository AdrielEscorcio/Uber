#ifndef UBER_H
#define UBER_H

#include <iostream>
#include <string>

#include "Motorista.h"

using std::string;
using std::cout;
using std::cin;

class Uber
{
    
public:
    Uber(const string &, const string &);
    
    
    void setinicializarFormaDePagamento();
    
    void setescolherFormaDePagamento(int);
    
    void mostarFormaPagamento() const;
    
    void setinserirLocalDePartida(const string &) const;
    
    void setinserirLocalDeDestino(const string &) const; 
    
    void setvalorMinimoCobradoPorViagem() const;

   	static int  getnumeroDeViagens();
    
    void ostrarIformacaoMotorista();
    
   
private:
    
	int  formaDePagamento;
    const string localDeDestino;
    const string localDePartida;
    
    static int quantViagens;
    
    const static int valorMinimoDeViagem = 5.00;
    
    const static int quantFormaPagamento = 3;
    string pag[quantFormaPagamento];
    
     Motorista inforMotorista;
};

#endif // UBER_H
