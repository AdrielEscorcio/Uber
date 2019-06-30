#ifndef MOBILIDADE_H
#define MOBILIDADE_H

#include <iostream>
#include <string>
#include <ctime>
using std::string;
using std::cout;
using std::cin;
using std::ostream;

class Mobilidade
{
	friend ostream &operator<<( ostream &, const Mobilidade &);
	public:
		Mobilidade();
		Mobilidade(const string &,const string &);
		Mobilidade(const Mobilidade &);
		virtual ~Mobilidade();
		
		const Mobilidade &operator=( const Mobilidade &);
		bool operator==( const Mobilidade & ) const;
		bool operator!=( const Mobilidade &) const;
		
	private:
		string localDeDestino;
    	string localDePartida;
};

#endif
