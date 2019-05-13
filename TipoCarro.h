#ifndef TIPOCARRO_H
#define TIPOCARRO_H

#include <iostream>
#include <string>



using std::string;
using std::cout;
using std::cin;

class TipoCarro
{
	public:
		TipoCarro();
		TipoCarro(const string &);
		TipoCarro(const TipoCarro &);
		~TipoCarro();
		
		void mostrarTipo() const;
		void tipo (int*);
		void mostrarInformacaoTipo() const;
		void info() const;
		
	private:
		string tipoUber;
		
		const static int quantTipo = 2;
    	const static string tipos[quantTipo];
};

#endif
