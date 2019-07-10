#include "Uber.h"
int Uber::quantViagens = 0;

Uber::Uber()
{
	
}

Uber::Uber(const string &localDePartida, const string &localDeDestino, int pag) : Mobilidade (localDeDestino, localDePartida), Pagamento (pag)
{
	if (quantViagens == 0)
	{
		quantPartidas = 0;
		++quantPartidas;
		nomeLocalPartida = new string[quantPartidas];
		cadastarPartida(localDePartida);
		
	} else {
		
		adicionarPartida(localDePartida);
	}
	
	quantViagens++;	
}

Uber::Uber(const Uber &ub) : Mobilidade (static_cast< Mobilidade >(ub) ), Pagamento  (static_cast < Pagamento >( ub ) )
{
	this->nomeLocalPartida = ub.nomeLocalPartida;
	
	nomeLocalPartida  = new string[ quantPartidas]; 
	for( int i = 0; i < quantPartidas; i++ ) 
	   nomeLocalPartida[ i ] = ub[i];
	   
	quantViagens++;
}

Uber::~Uber()
{
	delete [] nomeLocalPartida;
	
}


void Uber::cadastarPartida(const string &partida)
{

	nomeLocalPartida[0] = partida;
	
}

void Uber::adicionarPartida (const string &partida)
{
	string *aux = new string[quantPartidas];
	
	for(int i = 0; i < quantPartidas; i++)
		aux[i] = nomeLocalPartida[i];
		
	delete [] nomeLocalPartida;
	
	nomeLocalPartida = new string[++quantPartidas];
	
	for(int i = 0; i < quantPartidas-1; i++)
		nomeLocalPartida[i] = aux[i];
		
	nomeLocalPartida[quantPartidas-1] = partida;
		
	delete [] aux;
 	
	 
}

void Uber::listarLocaisDePartida() const
{
	//for (int i = 0; i <= quantPartidas; i++ )
	int i=0;
	cout <<"  Suas Viagens\n";
	while(i<=quantPartidas-1)
	{
		cout << i+1 <<" Viagem\n";
		cout <<"Partida: " <<nomeLocalPartida[i]<<"\n";
		i++;
	}
}

/*void  Uber::mostarFormaPagamento() const 
{
	Pagamento::mostarFormaPagamento();
}*/


void Uber::mostarTipo() const
{
	selecionarTipo.mostrarTipo();
}
void Uber::tipo (int escolhe)
{
	selecionarTipo.tipo(&escolhe);
}


void Uber::mostrarSexoMotorista() const
{
	inforMotorista.mostrarSexoMotorista();
}


void Uber::setescolherSexoMotorista(int escolhe)
{
    inforMotorista.setescolherSexoMotorista(&escolhe);
    
    
}

int Uber::getnumeroDeViagens()
{
	cout << "\n\nQuantidade de Viagens Realizadas:" << quantViagens<<"\n";
}
void Uber::abertura(){


	 cout <<"Bem vindo ao Uber\n";
	
}

void Uber::fechamento(){
		
	 cout << "Obrigado por viajar com o Uber";
}

ostream &operator<<( ostream &out, const Uber &ub)
{
	out <<"       INFORMACOES DA VIAGEM\n";
	out << "-----------------------------------\n";
	
	out << static_cast <Mobilidade>(ub);
	out << static_cast <Pagamento>(ub);
	out << "\nValor Minimo cobrado por viagem R$ " << ub.valorMinimoDeViagem; 
	out << "\n\nInformacoes da Classe Motorista\n";
	out << "-----------------------------------\n";
	
//	out << static_cast <Motorista>(ub);
	out << "\n\nInformacoes da Classe TipoCarro\n";
	out << "-----------------------------------\n";
	//ub.selecionarTipo.info();
	return out;
}

const Uber& Uber::operator=( const Uber &ub)
{
	if(&ub != this){
	
		*static_cast< Mobilidade * >( this ) = static_cast< Mobilidade >( ub );
		*static_cast< Pagamento * >( this ) = static_cast< Pagamento >( ub );	
		 
		if (quantPartidas != ub.quantPartidas){
			delete [] nomeLocalPartida;
			quantPartidas = ub.quantPartidas;
			nomeLocalPartida = new string[quantPartidas];
		}
				
		for (int i=0; i < quantPartidas; i++)
			nomeLocalPartida[i] = ub.nomeLocalPartida[i];
	}
	
	
	return *this;
}

bool Uber::operator==( const Uber &ub) const 
{
	if( static_cast<Mobilidade>(*this) != static_cast<Mobilidade>(ub) )
			return false;
	
	if( static_cast<Pagamento>(*this) != static_cast<Pagamento>(ub) )
			return false;
	
		
	if( quantPartidas != ub.quantPartidas) 
		return false;   
	
	for( int i = 0; i <quantPartidas; i++ )
		if( nomeLocalPartida[ i ] != ub.nomeLocalPartida[ i ] ) 
			return false; 
	
	
	return true;		
}

bool Uber::operator!=( const Uber &ub) const 
{    	
	 
	 return! ( *this== ub);
}

string &Uber::operator[]( int pos)
{
	if (pos < 0 || pos >= quantPartidas)
	{
		cout << "Posição invalida";
		
	} else {
		return this->nomeLocalPartida[pos];
	}
	
}

const string &Uber::operator[](int pos) const
{
	if (pos < 0 || pos >= quantPartidas)
	{
		cout << "Posição invalida";
		
	} else {
		return this->nomeLocalPartida[pos];
	}
}

//bool &Uber::operator<( const Uber &ub1)
//{

//	if(this->valorMinimoDeViagem < ub1.valorMinimoDeViagem)
//		return true;
	
//	return false; 
//}
