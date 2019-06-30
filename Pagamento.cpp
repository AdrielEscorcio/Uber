#include "Pagamento.h"

Pagamento::Pagamento()
{
	this->pagar = "Desconhecido";
}
Pagamento::Pagamento(int paga)
{
	setescolherFormaDePagamento(paga);
}

Pagamento::Pagamento(const Pagamento &pag)
{
		this->pagar = pag.pagar;	
}
Pagamento::~Pagamento()
{
}

const string Pagamento::pag[quantFormaPagamento] = {"Dinheiro","Credito","Debito"};

/*void Pagamento::mostarFormaPagamento() const
{
	cout << "       Entre com a forma de Pagamento\n\n";
	for(int i=0; i < 3; i++)
		cout<< "["<<i+1<<"]"<<pag[i] << "\n";
	
}*/

void Pagamento::setescolherFormaDePagamento(int formaDePagamento)
{
    for (int i = 0; i < quantFormaPagamento; i++ )
    {
    	if (i == formaDePagamento-1)
    	{
    		pagar = pag[i];
    	}
	}
}

ostream &operator<<( ostream &out, const Pagamento &pag)
{
	out<< "\nForma de pagamento: "<< pag.pagar;
	
	return out;

}

const Pagamento& Pagamento::operator=( const Pagamento &pag)
{
	
	if(&pag != this){
	
		this->pagar = pag.pagar;
		
	}
	return *this;
}

bool Pagamento::operator==( const Pagamento &pag) const 
{
	if (this->pagar != pag.pagar)
		return false;
	
	return true;		
}
bool Pagamento::operator!=( const Pagamento &pag) const 
{    
	
	 return! ( *this== pag);
}
