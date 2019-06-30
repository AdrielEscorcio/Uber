#include "Pool.h"

Pool::Pool()
{
	this->viajantes = 1;
}

Pool::Pool(const string &localDePartida, const string &localDeDestino, int pag, int viajantes) : Uber (localDePartida,localDeDestino, pag)
{
	this->viajantes = viajantes;
}

Pool::Pool(const Pool &p) : Uber (static_cast< Uber >( p ))
{
	
	this->viajantes = p.viajantes;
}

Pool::~Pool()
{
	
}


ostream &operator<<( ostream &out, const Pool &p)
{
	
	static_cast <Uber> (p);
	out << "Pessoas Compatilhando a viagem: " << p.viajantes;

}

const Pool& Pool::operator=( const Pool &p)
{
		
	if(&p != this){
	
		*static_cast< Uber * >( this ) = static_cast<Uber>( p );
		this->viajantes = p.viajantes;
		 
	}

	return *this;
}


bool Pool::operator==( const Pool &p) const 
{
	if( static_cast<Uber>(*this) != static_cast<Uber>(p) )
			return false;
	
	if(this->viajantes != p.viajantes)
			return false;
			
	return true;		
}

bool Pool::operator!=( const Pool &p) const 
{    	
	 return! ( *this== p);
}
