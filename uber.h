#ifndef UBER_H
#define UBER_H

#include <iostream>
#include <string>

#include "motoristas.h"

using std::string;
using std::cout;
using std::cin;

class uber
{
    
public:
    uber(const string &, const string &);
    
    
    void setinicializarFormaDePagamento();
    
    void setescolherFormaDePagamento(int);
    
    void mostarFormaPagamento() const;
    
    void setinserirLocalDePartida(const string &) const;
    
    void setinserirLocalDeDestino(const string &) const; 
    
    void setvalorMinimoCobradoPorViagem() const;

   	static int  getnumeroDeViagens();
   
private:
    
	int  formaDePagamento;
    const string localDeDestino;
    const string localDePartida;
    
    static int quantViagens;
    
    const static int valorMinimoDeViagem = 5.00;
    
    const static int quantFormaPagamento = 3;
    const string pag[quantFormaPagamento];
    
};

#endif // UBER_H
