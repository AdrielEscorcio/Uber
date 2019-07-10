#include "Femitaxi.h"

int Femitaxi::quantViagens = 0;

Femitaxi::Femitaxi()
{
	this->sexo = "Desconhecido";
	this->idade = 0;
}

Femitaxi::Femitaxi(const string &sex, int idade, const string &localDePartida, const string &localDeDestino, int pag) 
: Mobilidade (localDeDestino, localDePartida), Pagamento (pag)
{
	this->sexo = sex;
	this->idade = idade;	

}
Femitaxi::Femitaxi(const Femitaxi &fem) : Mobilidade (static_cast< Mobilidade >( fem ) ), Pagamento  (static_cast<  Pagamento  >( fem ) )
{
	this->sexo = fem.sexo;
	this->idade = fem.idade;
	
	quantViagens++;	
}
Femitaxi::~Femitaxi()
{
}
void Femitaxi::abertura(){

	 cout <<"Bem vindo ao Femitaxi\n";
	
}

void Femitaxi::fechamento(){
		
	 cout << "Obrigado por viajar com o Femitaxi";
}

ostream &operator<<( ostream &out, const Femitaxi &fem)
{
	cout << "\n\nInformacoes da Viagem\n";
	cout << "-----------------------------------\n";
	out << static_cast <Mobilidade>(fem);
	out << static_cast <Pagamento>(fem);
	
	out << "\nValor Minimo cobrado por viagem R$ " << fem.valorMinimoDeViagem;
	out << "Sexo: " << fem.sexo;
	out << "Idade: " << fem.idade;
	
	return out;
}
const Femitaxi& Femitaxi::operator=( const Femitaxi &fem)
{
	if(&fem != this){
	
		*static_cast< Mobilidade * >( this ) = static_cast< Mobilidade >( fem );
		*static_cast< Pagamento * >( this ) = static_cast< Pagamento >( fem );	
		
	}
	return *this;
}

bool Femitaxi::operator==( const Femitaxi &fem) const 
{
	if( static_cast<Mobilidade>(*this) != static_cast<Mobilidade>(fem) )
			return false;
	
	if( static_cast<Pagamento>(*this) != static_cast<Pagamento>(fem) )
			return false;
	
	return true;		
}
bool Femitaxi::operator!=( const Femitaxi &fem) const 
{    
	
	 return! ( *this == fem);
}
