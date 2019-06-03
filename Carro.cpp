#include "Carro.h"

Carro::Carro()
{
	this->tipoUber = "Uber Padrão";
	
}
Carro::Carro(const string &tipo)
{
	this->tipoUber = tipo;
	  
	 

	
}
Carro::Carro(const Carro &tip)
{
	this->tipoUber = tip.tipoUber;
	
	
}
Carro::~Carro()
{
	
}

const string Carro::tipos[quantTipo] = {"Uber x","Uber Select"};

void Carro::mostrarTipo() const
{
	cout << "       Selecione o Tipo de Uber\n\n";
	for(int i=0; i < quantTipo; i++)
		cout<< "["<<i+1<<"]"<<tipos[i] << "\n";
}

void Carro::tipo (int *escolhe)
{
	
	for (int i = 0; i < quantTipo; i++)
	{
		if (i == *escolhe-1)
		{
			this->tipoUber = tipos[i];
		}
		
	}
}

void Carro::mostrarInformacaoTipo ()  const
{
    cout << "\nTipo:" << this->tipoUber;
}

void Carro::info() const
{
	cout << "Mostra e recebe e selciona o Tipo de Uber\n\n";
	cout << "\nTipo:" << this->tipoUber;
}

ostream &operator<<( ostream &out, const Carro &car )
{
	out << "Tipo de uber: " << car.tipoUber;
	
	return out;
}
const Carro& Carro::operator=( const Carro &car)
{
	if(&mot != this)
	{
		this->tipoUber = car.tipoUber;	
	}
	return *this;
}

bool Carro::operator==( const Carro &car) const 
{
	if(this->tipoUber != car.tipoUber)
		return false;	

	
	return true;		
}

bool Carro::operator!=( const Carro &car) const 
{    
	 return! ( *this== car);
}

int &Carro::operator[]( int)
{
	
}
const int &Carro::operator[](int) const
{
	
}

bool operator<(const Carro &, const Carro &);
