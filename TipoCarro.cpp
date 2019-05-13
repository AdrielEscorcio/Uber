#include "TipoCarro.h"

TipoCarro::TipoCarro()
{
	this->tipoUber = "Uber Padrão";
	
}
TipoCarro::TipoCarro(const string &tipo)
{
	
	
}
TipoCarro::TipoCarro(const TipoCarro &tip)
{
	this->tipoUber = tip.tipoUber;
}
TipoCarro::~TipoCarro()
{
	
}

const string TipoCarro::tipos[quantTipo] = {"Uber x","Uber Select"};

void TipoCarro::mostrarTipo() const
{
	cout << "       Selecione o Tipo de Uber\n\n";
	for(int i=0; i < quantTipo; i++)
		cout<< "["<<i+1<<"]"<<tipos[i] << "\n";
}

void TipoCarro::tipo (int *escolhe)
{
	
	for (int i = 0; i < quantTipo; i++)
	{
		if (i == *escolhe-1)
		{
			this->tipoUber = tipos[i];
		}
		
	}
}

void TipoCarro::mostrarInformacaoTipo ()  const
{
    cout << "\nTipo:" << this->tipoUber;
}

void TipoCarro::info() const
{
	cout << "Mostra e recebe e selciona o Tipo de Uber\n\n";
}
