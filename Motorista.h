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
		Motorista(const string &,const string &);
		Motorista(const Motorista &);
		~Motorista();
		
		void mostrarSexoMotorista() const;
		
		void setescolherSexoMotorista(int*);
		
		void mostrarIformacaoMotorista() const;
		
		void info() const;
	private:
		
		string nome;
    	string numeroPlaca;
    	
    	const static int sexoMotorista = 2;
    	const static string sexoMot[sexoMotorista];
};

#endif
