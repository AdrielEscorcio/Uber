#include "Pop.h"

int Pop::quantViagens = 0;

Pop::Pop()
{
	this->tipoPop = "Desconhecido";
}

Pop::Pop(const string &localDePartida, const string &localDeDestino, int pag) : Mobilidade (localDeDestino, localDePartida), Pagamento (pag)
{
	
	quantViagens++;
}

Pop::Pop(const Pop &po) : Mobilidade (static_cast< Mobilidade >( po ) ), Pagamento  (static_cast<  Pagamento  >( po ) )
{
	
	quantViagens++;
}

Pop::~Pop()
{
	
}
const string Pop::tipos[quantTipo] = {"99 Pop","99 Taxi"};

void Pop::mostrarTipos() const
{
	cout << "       Selecione o Tipo de Pop\n\n";
	for(int i=0; i < quantTipo; i++)
		cout<< "["<<i+1<<"]"<<tipos[i] << "\n";
}

void Pop::escolherTipo (int escolhe)
{
	
	for (int i = 0; i < quantTipo; i++)
	{
		if (i == escolhe-1)
		{
			this->tipoPop = tipos[i];
		}
		
	}
}

void Pop::abertura(){
	
	 cout <<"Bem vindo ao Pop\n";
	
}

void Pop::fechamento(){
		
	 cout << "Obrigado por viajar com o Pop";
}

ostream &operator<<( ostream &out, const Pop &po)
{
	cout << "\n\nInformacoes da Viagem\n";
	cout << "-----------------------------------\n";
	out << static_cast <Mobilidade>(po);
	out << static_cast <Pagamento>(po);
	
	out << "\nValor Minimo cobrado por viagem R$ " << po.valorMinimoDeViagem; 
	out << "TIpo Pop: " << po.tipoPop;
	return out;
}
const Pop& Pop::operator=( const Pop &po)
{
	if(&po != this){
		
		*static_cast< Mobilidade * >( this ) = static_cast< Mobilidade >( po );
		*static_cast< Pagamento * >( this ) = static_cast< Pagamento >( po );	
		this->tipoPop = po.tipoPop;
	}
	return *this;
}
bool Pop::operator==( const Pop &po) const 
{
	if( static_cast<Mobilidade>(*this) != static_cast<Mobilidade>(po) )
			return false;
	
	if( static_cast<Pagamento>(*this) != static_cast<Pagamento>(po) )
			return false;
	
	if (this->tipoPop != po.tipoPop)
		return false;
		
	return true;		
}
bool Pop::operator!=( const Pop &po) const 
{    
	
	 return! ( *this== po);
}
