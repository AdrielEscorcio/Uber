#include "Motorista.h"

Motorista::Motorista()
{
	this->nome = "Motorista Padrao";
    this->numeroPlaca = "ABC1234";
    setinicializarSexoMotorista();
}

Motorista::Motorista(const string &sex)
{
	setinicializarSexoMotorista();
}

Motorista::Motorista(const Motorista &mot)
{
	this->nome = mot.nome;
	this->numeroPlaca = mot.numeroPlaca;
}

Motorista::~Motorista()
{
	
}

void Motorista::setinicializarSexoMotorista()
{
    for (int i = 0; i < sexoMotorista; i++ )
    {
    	
    	if (i == 0)
    	{
    		sexoMot[i] = "Homem";
		}
		if (i == 1)
		{
			sexoMot[i] = "Mulher";
		}
	}
}

void Motorista::mostarSexoMotorista() const
{
	cout << "\n\nEntre com o Sexo do Motorista que voce deseja\n";
	for(int i=0; i < sexoMotorista; i++)
		cout<< "["<<i+1<<"]"<<sexoMot[i] << "\n";
	
}

void Motorista::setescolherSexoMotorista(int escolher)
{

    	if (1 == escolher)
    	{
    		this->nome = "MotoristaHomem";
    		this->numeroPlaca = "ABC1234";
    	}
    	if (2 == escolher)
    	{
    		this->nome = "MotoristaMulher";
    		this->numeroPlaca = "ABC1234";
    	}
    	
}

void Motorista::mostrarIformacaoMotorista() const
{
    cout << "\nNome:"<<this->nome;
    cout << "\nPlaca:"<<this->numeroPlaca<<"\n";
    
}
