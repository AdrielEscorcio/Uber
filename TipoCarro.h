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
		TipoCarro(const TipoCarro &);
		~TipoCarro();
		
		void setinicializartipo();
		void mostrarTipo() const;
		void tipo (int);
		void mostrarInformacaoTipo() const;
		
	private:
		string tipoUber;
		
		const static int quantTipo = 2;
    	string tipos[quantTipo];
};

#endif
