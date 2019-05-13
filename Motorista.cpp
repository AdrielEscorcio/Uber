#include "Motorista.h"

Motorista::Motorista()
{
	this->nome = "Motorista Padrao";
    this->numeroPlaca = "ABC1234";
    
}

Motorista::Motorista(const string &nome, const string &placa)
{
	
}

Motorista::Motorista(const Motorista &mot)
{
	this->nome = mot.nome;
	this->numeroPlaca = mot.numeroPlaca;
}

Motorista::~Motorista()
{
	
}

const string Motorista::sexoMot[sexoMotorista] = {"Homem","Mulher"};

void Motorista::mostrarSexoMotorista() const
{
	cout << "       Entre com o Sexo do Motorista que voce deseja\n\n";
	for(int i=0; i < sexoMotorista; i++)
		cout<< "["<<i+1<<"]"<<sexoMot[i] << "\n";
	
}

void Motorista::setescolherSexoMotorista(int *escolher)
{

    	if (1 == *escolher)
    	{
    		this->nome = "MotoristaHomem";
    		this->numeroPlaca = "ABC1234";
    	}
    	if (2 == *escolher)
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

void Motorista::info() const
{
	cout << "Mostra, recebe e seleciona o Motorista\n\n";
}
