#ifndef POP_H
#define POP_H

#include "Mobilidade.h"
#include "Pagamento.h"

class Pop : public Mobilidade, Pagamento
{
	friend ostream &operator<<( ostream &, const Pop &);
	public:
		Pop();
		Pop(const string &, const string &, int);
		Pop(const Pop &);
		~Pop();
		
		const Pop &operator=( const Pop &);
		bool operator==( const Pop & ) const;
		bool operator!=( const Pop &) const;
		void mostrarTipos() const;
		void escolherTipo(int);
		
		
	private:
		string tipoPop;
		
		const static int quantTipo = 2;
    	const static string tipos[quantTipo];
		
		static int quantViagens;
		const static int valorMinimoDeViagem = 7.00;
};

#endif
