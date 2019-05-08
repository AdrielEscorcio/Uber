#include "TipoCarro.h"

TipoCarro::TipoCarro()
{
	this->tipoUber = "Uber Padrão";
	setinicializartipo();
}
TipoCarro::TipoCarro(const TipoCarro &tip)
{
	this->tipoUber = tip.tipoUber;
}
TipoCarro::~TipoCarro()
{
	
}
void TipoCarro::setinicializartipo()
{
    for (int i = 0; i < quantTipo; i++ )
    {
    	
    	if (i == 0)
    	{
    		tipos[i] = "Uber x";
		}
		if (i == 1)
		{
			tipos[i] = "Uber Select";
		}
		
	}
}

void TipoCarro::mostrarTipo() const
{
	cout << "\n\nSelecione o Tipo de Uber\n";
	for(int i=0; i < quantTipo; i++)
		cout<< "["<<i+1<<"]"<<tipos[i] << "\n";
}

void TipoCarro::tipo (int escolhe)
{
	if (1 == escolhe)
	{
		this->tipoUber = "Uber x";
	}
	if (2 == escolhe)
	{
		this->tipoUber = "Uber Select";
	}
}

void TipoCarro::mostrarInformacaoTipo ()  const
{
    cout << "\nTipo:" << this->tipoUber;
}
