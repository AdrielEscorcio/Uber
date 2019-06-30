#ifndef UBER_H
#define UBER_H

#include <iostream>
#include <string>
#include <ctime>


#include "Pagamento.h"
#include "Motorista.h"
#include "Carro.h"
#include "Mobilidade.h"
using std::string;
using std::cout;
using std::cin;
using std::ostream;

class Uber : public Mobilidade, Pagamento
{
	friend ostream &operator<<( ostream &, const Uber &);
	public:
		Uber();
		Uber(const string &, const string &, int);
		Uber(const Uber &);
		~Uber();
			
		const Uber &operator=( const Uber &);
		
		bool operator==( const Uber & ) const;
		
		bool operator!=( const Uber &) const;
		
		string &operator[]( int);
		
		const string &operator[](int) const;  
		
		bool operator<(const Uber &) const;

    	
    	//void setinicializarFormaDePagamento();
    
	   //virtual void mostarFormaPagamento() const;
	    
	   //virtual void setescolherFormaDePagamento(int);
    	
    	void mostarTipo() const;
    	
    	void tipo (int );
    	
    	//void mostrarInformacaoTipo ()  const;
    	
    	void mostrarSexoMotorista() const;
    	
    	void setescolherSexoMotorista(int );
    	
    	//void mostrarInformacaoMotorista() const;
    	
    	
    	static int getnumeroDeViagens();
    	
    	void listarLocaisDePartida() const;
    	
    	void cadastarPartida(const string &);
    	
    	void adicionarPartida (const string &);
    	
    	
    
    	
	private:
    	
    	//string *nomeLocalDestino;
    	string *nomeLocalPartida;
    	int quantPartidas;
    	//int quantDestino;
    	
    	static int quantViagens;
    	
    	const static int valorMinimoDeViagem = 5.00;
    	
    	
    	
    	Motorista inforMotorista;
    	Carro selecionarTipo;
    	
    	
};

#endif
