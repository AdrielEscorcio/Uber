#ifndef UBER_H
#define UBER_H

#include <iostream>
#include <string>

using std::string;
using std::cout;

class uber
{
    
public:
    uber(int ,const string &, const string &);
    
    
    void setescolherFormaDePagamento(int);
    
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
};

#endif // UBER_H
