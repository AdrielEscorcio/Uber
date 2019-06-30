#include "Mobilidade.h"

Mobilidade::Mobilidade()
{
	this->localDeDestino = "Desconhecido";
	this->localDePartida = "Desconhecido";
}
Mobilidade::Mobilidade(const string &localDePartida, const string &localDeDestino)
{
	this->localDeDestino = localDeDestino;
	this->localDePartida = localDePartida;
}
Mobilidade::Mobilidade(const Mobilidade &mob)
{
	this->localDeDestino = mob.localDeDestino;
	this->localDePartida = mob.localDePartida;
}

Mobilidade::~Mobilidade()
{
}

ostream &operator<<( ostream &out, const Mobilidade &mob)
{
	out << "\nInformacao Do Local de Partida e Destino da Viagem\n";
	out << "Partida:" << mob.localDePartida;
	out << "\nDestino:" << mob.localDeDestino;
	
	return out;
}

const Mobilidade& Mobilidade::operator=( const Mobilidade &mob)
{
	
	if(&mob != this){
	
		this->localDeDestino = mob.localDeDestino;
		this->localDePartida = mob.localDePartida;
		
	}
	return *this;
}

bool Mobilidade::operator==( const Mobilidade &mob) const 
{
	if (this->localDeDestino != mob.localDeDestino)
		return false;
	
	if (this->localDePartida != mob.localDePartida)
		return false;
		
	return true;		
}
bool Mobilidade::operator!=( const Mobilidade &mob) const 
{    
	
	 return! ( *this== mob);
}
