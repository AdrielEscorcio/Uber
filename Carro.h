#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <string>



using std::string;
using std::cout;
using std::cin;
using std::ostream;

class Carro
{
	friend ostream &operator<<( ostream &, const Carro & );
	public:
		Carro();
		Carro(const string &);
		Carro(const Carro &);
		~Carro();
		
		const Carro &operator=( const Carro &);
		
		bool operator==( const Carro & ) const;
		
		bool operator!=( const Carro &) const; 
		
		int &operator[]( int);
		
		const int &operator[](int) const; 
		
		bool operator<(const Carro &) const;
		
		void mostrarTipo() const;
		void tipo (int*);
		void mostrarInformacaoTipo() const;
		void info() const;
		
	private:
		string tipoUber;
		int tam;
		int *ptr;
		
		const static int quantTipo = 2;
    	const static string tipos[quantTipo];
};

#endif
