#include "Uber.h"

int Uber::quantViagens = 0;

Uber::Uber()
{
	this->localDePartida = "Desconhecido";
	this->localDeDestino = "Desconhecido";
}

Uber::Uber(const string &localDePartida, const string &localDeDestino)
{
	this->localDePartida = localDePartida; 
	this->localDeDestino = localDeDestino;
	setinicializarFormaDePagamento();
	
	quantViagens++;
}

Uber::Uber(const Uber &ub)
{
	this->localDePartida = ub.localDePartida;
	this->localDeDestino = ub.localDeDestino;
	setinicializarFormaDePagamento();
	
	quantViagens++;
}

Uber::~Uber()
{
	
}
void Uber::setinicializarFormaDePagamento()
{
    for (int i = 0; i < quantFormaPagamento; i++ )
    {
    	
    	if (i == 0)
    	{
    		pag[i] = "Dinheiro";
		}
		if (i == 1)
		{
			pag[i] = "Cartao Credito";
		}
		if(i == 2)
		{
			pag[i] = "Cartao Debito";
		}
	}
}

void Uber::setinserirLocalDePartida() const
{
	cout <<"\n\nINFORMACOES DA VIAGEM";
	cout <<"\nLocal De Partida Escolhido: " << this->localDePartida;
}

void Uber::setinserirLocalDeDestino() const
{
	cout << "\nLocal de Destino Escolhido: " << this->localDeDestino;
}

void Uber::mostarFormaPagamento() const
{
	cout << "\n\nEntre com a forma de Pagamento\n";
	for(int i=0; i < 3; i++)
		cout<< "["<<i+1<<"]"<<pag[i] << "\n";
	
}

void Uber::setescolherFormaDePagamento(int formaDePagamento)
{
    for (int i = 0; i < quantFormaPagamento; i++ )
    {
    	if (i == formaDePagamento-1)
    	{
    		cout <<"Forma de Pagamento:"<<pag[i];
    	}
	}
}

void Uber::setvalorMinimoCobradoPorViagem() const
{
	cout << "\nValor Minimo cobrado por viagem: R$ " << valorMinimoDeViagem;
}

void Uber::mostarTipo() const
{
	selecionarTipo.mostrarTipo();
}
void Uber::tipo (int escolhe)
{
	selecionarTipo.tipo(escolhe);
}

void Uber::mostrarInformacaoTipo ()  const
{
    cout << "\n\nTipo Selecionado";
	selecionarTipo.mostrarInformacaoTipo();
}

void Uber::mostarSexoMotorista() const
{
	inforMotorista.mostarSexoMotorista();
}


void Uber::setescolherSexoMotorista(int escolhe)
{
    inforMotorista.setescolherSexoMotorista(escolhe);
}

void Uber::mostrarInformacaoMotorista ()  const
{
    cout << "\n\nInformacoes do Motorista";
    inforMotorista.mostrarIformacaoMotorista();
}

int Uber::getnumeroDeViagens()
{
	cout << "\n\nQuantidade de Viagens Realizadas:" << quantViagens;
}
