#include "Uber.h"

int Uber::quantViagens = 0;


Uber::Uber()
{
	this->localDePartida = "Desconhecido";
	this->localDeDestino = "Desconhecido";
}

Uber::Uber(const string &Partida, const string &Destino)
{
	
	if (quantViagens == 0)
	{
		quantPartidas = 0;
		++quantPartidas;
		nomeLocalPartida = new string[quantPartidas];
		cadastarPartida(Partida);
		
	} else {
		
		adicionarPartida(Partida);
	}
	
	this->localDePartida = Partida; 
	this->localDeDestino = Destino;
	
	
	
	quantViagens++;
	
}

Uber::Uber(const Uber &ub)
{
	this->localDePartida = ub.localDePartida;
	this->localDeDestino = ub.localDeDestino;
	this->nomeLocalPartida = ub.nomeLocalPartida;
}

Uber::~Uber()
{
	delete [] nomeLocalPartida;
	
}

const string Uber::pag[quantFormaPagamento] = {"Dinheiro","Credito","Debito"};

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
	while(i<quantPartidas)
	{
		cout << i+1 <<" Viagem\n";
		cout <<"Partida: " <<nomeLocalPartida[i]<<"\n";
		i++;
	}
}

void Uber::setinserirLocalDePartida() const
{
	
	cout <<"\nLocal De Partida Escolhido: " << this->localDePartida;
}

void Uber::setinserirLocalDeDestino() const
{
	cout << "\nLocal de Destino Escolhido: " << this->localDeDestino;
}

void Uber::mostarFormaPagamento() const
{
	cout << "       Entre com a forma de Pagamento\n\n";
	for(int i=0; i < 3; i++)
		cout<< "["<<i+1<<"]"<<pag[i] << "\n";
	
}

void Uber::setescolherFormaDePagamento(int formaDePagamento)
{
    for (int i = 0; i < quantFormaPagamento; i++ )
    {
    	if (i == formaDePagamento-1)
    	{
    		cout <<"\n\nForma de Pagamento:"<<pag[i];
    	}
	}
}

void Uber::valorMinimoCobradoPorViagem() const
{
	cout << "\nValor Minimo cobrado por viagem: R$ " << valorMinimoDeViagem;
}

void Uber::mostarTipo() const
{
	selecionarTipo.mostrarTipo();
}
void Uber::tipo (int escolhe)
{
	selecionarTipo.tipo(&escolhe);
}

void Uber::mostrarInformacaoTipo ()  const
{
    cout << "\n\n       TIPO SELECIONADO";
    cout<< "\n---------------------------------------";
	selecionarTipo.mostrarInformacaoTipo();
}

void Uber::mostrarSexoMotorista() const
{
	inforMotorista.mostrarSexoMotorista();
}


void Uber::setescolherSexoMotorista(int escolhe)
{
    inforMotorista.setescolherSexoMotorista(&escolhe);
    
    
}

void Uber::mostrarInformacaoMotorista ()  const
{
    cout << "\n\n       INFORMACOES DO MOTORISTA";
    cout<< "\n----------------------------------------";
    inforMotorista.mostrarIformacaoMotorista();
}

int Uber::getnumeroDeViagens()
{
	cout << "\n\nQuantidade de Viagens Realizadas:" << quantViagens<<"\n";
}

void Uber::info() const
{
	cout << "\n\nInformacoes da Classe Principal\n";
	cout << "-----------------------------------\n";
	cout << "Recebe o Local de Partida e o Destino\n";
	cout << "Mostra e Recebe a Forma de Pagamento\n\n";
	
	cout <<"\nLocal De Partida Escolhido: " << this->localDePartida;
	cout << "\nLocal de Destino Escolhido: " << this->localDeDestino;

	cout << "Informacoes da Classe Motorista\n";
	cout << "-----------------------------------\n";
	inforMotorista.info();
	cout << "Informacoes da Classe TipoCarro\n";
	cout << "-----------------------------------\n";
	selecionarTipo.info();
	
}
