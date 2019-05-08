#ifndef UBER_H
#define UBER_H

#include <iostream>
#include <string>



#include "Motorista.h"
#include "TipoCarro.h"

using std::string;
using std::cout;
using std::cin;


class Uber
{
	public:
		Uber();
		Uber(const string &, const string &);
		Uber(const Uber &);
		~Uber();
		
		void setinserirLocalDePartida() const;
		   
    	void setinserirLocalDeDestino() const;
    	
    	void setinicializarFormaDePagamento();
    
	    void mostarFormaPagamento() const;
	    
	    void setescolherFormaDePagamento(int);
    	
    	void setvalorMinimoCobradoPorViagem() const;
    	
    	void mostarTipo() const;
    	
    	void tipo (int);
    	
    	void mostrarInformacaoTipo ()  const;
    	
    	void mostarSexoMotorista() const;
    	
    	void setescolherSexoMotorista(int);
    	
    	void mostrarInformacaoMotorista() const;
    	
    	
    	static int getnumeroDeViagens();
    	
	private:
		
		string localDeDestino;
    	string localDePartida;
    	
    	static int quantViagens;
    	
    	const static int valorMinimoDeViagem = 5.00;
    	
    	const static int quantFormaPagamento = 3;
    	string pag[quantFormaPagamento];
    	
    	Motorista inforMotorista;
    	TipoCarro selecionarTipo;
    	
    	
};

#endif
