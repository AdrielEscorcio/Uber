#ifndef MENSAGENS_H
#define MENSAGENS_H

#include <iostream>
#include <string>
#include <ctime>

using std::string;
using std::cout;
using std::cin;
using std::ostream;

class Mensagens
{
	public:
		Mensagens();
		Mensagens(const Mensagens &);
		virtual ~Mensagens();
		
		virtual void abertura()=0;
		virtual void fechamento()=0;
		
	private :
		
		
};

#endif
