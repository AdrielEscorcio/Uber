#include "Motorista.h"

Motorista::Motorista()
{
	this->nome = "Motorista Padrao";
    this->numeroPlaca = "ABC1234";
    
}

Motorista::Motorista(const string &nome, const string &placa)
{
	this->nome = nome;
	this->numeroPlaca = placa;
	
	tam = 10 ;
	ptr = new int[ tam ]; 
	for ( int i = 0; i < tam; i++ )
	  	ptr[ i ] = 0;  

}

Motorista::Motorista(const Motorista &mot)
{
	this->nome = mot.nome;
	this->numeroPlaca = mot.numeroPlaca;
	
	ptr= new int[tam]; 
	for( int i = 0; i < tam; i++ ) 
		ptr[i] = mot.ptr[i];
}

Motorista::~Motorista()
{
	delete [] ptr;	
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

ostream &operator<<( ostream &out, const Motorista &moto )
{
	out << "Mostra, recebe e seleciona o Motorista\n\n" << "\nNome:"<<moto.nome << "\nPlaca:"<<moto.numeroPlaca<<"\n";
	 return out;
}

const Motorista& Motorista::operator=( const Motorista &mot)
{
	if(&mot != this){
	
	
		if (tam != mot.tam){
			delete [] ptr ;
			tam = mot.tam;
			ptr = new int[tam];
		}
				
		for (int i=0; i < tam; i++)
			ptr[i] = mot.ptr[i];
	}	
	return *this;
}

bool Motorista::operator==( const Motorista &mot) const 
{
	if( tam != mot.tam) 
		return false;   
	
	for( int i = 0; i < tam; i++ )
		if( ptr[i] != mot.ptr[ i ] ) 
			return false; 
	
	
	return true;		
}

bool Motorista::operator!=( const Motorista &mot) const 
{    
	 return! ( *this== mot);
}
int &Motorista::operator[]( int)
{
	
}
const int &Motorista::operator[](int) const
{
	
}
bool operator<(const Motorista &, const Motorista &);
