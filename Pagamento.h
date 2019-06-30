#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <iostream>
#include <string>
#include <ctime>
using std::string;
using std::cout;
using std::cin;
using std::ostream;

class Pagamento
{
	friend ostream &operator<<( ostream &, const Pagamento &);
	public:
		Pagamento();
		Pagamento(int);
		Pagamento(const Pagamento &);
		virtual ~Pagamento();
		
		const Pagamento &operator=( const Pagamento &);
		bool operator==( const Pagamento & ) const;
		bool operator!=( const Pagamento &) const;
	 	//virtual void mostarFormaPagamento() const;
		void setescolherFormaDePagamento(int);
		
	private:
		string pagar;
		
		const static int quantFormaPagamento = 3;
    	const static string pag[quantFormaPagamento];
};

#endif
