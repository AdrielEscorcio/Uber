#ifndef FEMITAXI_H
#define FEMITAXI_H

#include "Mobilidade.h"
#include "Pagamento.h"

class Femitaxi : public Mobilidade, Pagamento
{
	friend ostream &operator<<( ostream &, const Femitaxi &);
	public:
		Femitaxi();
		Femitaxi(const string &, int, const string &, const string &, int);
		Femitaxi(const Femitaxi &);
		~Femitaxi();
		
		const Femitaxi &operator=( const Femitaxi &);
		bool operator==( const Femitaxi & ) const;
		bool operator!=( const Femitaxi &) const;
	private:
		string sexo;
		int idade;
		static int quantViagens;
		const static int valorMinimoDeViagem = 6.00;
};

#endif
