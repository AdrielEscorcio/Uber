#ifndef UBER_H
#define UBER_H

#include <iostream>
#include <string>
#include <ctime>



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
    	
    	void valorMinimoCobradoPorViagem() const;
    	
    	void mostarTipo() const;
    	
    	void tipo (int );
    	
    	void mostrarInformacaoTipo ()  const;
    	
    	void mostrarSexoMotorista() const;
    	
    	void setescolherSexoMotorista(int );
    	
    	void mostrarInformacaoMotorista() const;
    	
    	
    	static int getnumeroDeViagens();
    	
    	void listarLocaisDePartida() const;
    	
    	void cadastarPartida(const string &);
    	
    	void adicionarPartida (const string &);
    	
    	void info() const;
    
    	
	private:
		
		string localDeDestino;
    	string localDePartida;
    	
    	//string *nomeLocalDestino;
    	string *nomeLocalPartida;
    	int quantPartidas;
    	//int quantDestino;
    	
    	static int quantViagens;
    	
    	const static int valorMinimoDeViagem = 5.00;
    	
    	const static int quantFormaPagamento = 3;
    	const static string pag[quantFormaPagamento];
    	
    	Motorista inforMotorista;
    	TipoCarro selecionarTipo;
    	
    	
};

#endif
