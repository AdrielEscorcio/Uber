#ifndef MOTORISTA_H
#define MOTORISTA_H

#include <iostream>
#include <string>


using std::string;
using std::cout;
using std::cin;
using std::ostream;

class Motorista 
{
	friend ostream &operator<<( ostream &, const Motorista & );
	public:
		Motorista();
		Motorista(const string &,const string &);
		Motorista(const Motorista &);
		~Motorista();
		
		const Motorista &operator=( const Motorista &);
		
		bool operator==( const Motorista & ) const;
		
		bool operator!=( const Motorista &) const; 
		
		int &operator[]( int);
		
		const int &operator[](int) const; 
		
		bool operator<(const Motorista &) const;
		
		void mostrarSexoMotorista() const;
		
		void setescolherSexoMotorista(int*);
		
		void mostrarIformacaoMotorista() const;
		
	
	private:
		
		string nome;
    	string numeroPlaca;
    
    	const static int sexoMotorista = 2;
    	const static string sexoMot[sexoMotorista];
};

#endif
