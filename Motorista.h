#ifndef MOTORISTA_H
#define MOTORISTA_H

#include <iostream>
#include <string>


using std::string;
using std::cout;
using std::cin;

class Motorista 
{
	public:
		Motorista();
		Motorista(const string &);
		Motorista(const Motorista &);
		~Motorista();
		
		void setinicializarSexoMotorista();
		
		void mostarSexoMotorista() const;
		
		void setescolherSexoMotorista(int escolherSex);
		
		void mostrarIformacaoMotorista() const;
	private:
		
		string nome;
    	string numeroPlaca;
    	
    	const static int sexoMotorista = 2;
    			string sexoMot[sexoMotorista];
};

#endif
