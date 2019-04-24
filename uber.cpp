#include "uber.h"

int Uber::quantViagens = 0;

Uber::Uber(const string *localDePartida, const string *localDeDestino)
{
    setinicializarFormaDePagamento();
    setinserirLocalDePartida(localDePartida);
    setinserirLocalDeDestino(localDeDestino);
    mostarFormaPagamento();
    
    quantViagens++;
    
    cout << "Pont: "<< this->quantFormaPagamento;
}
//string pag[] = {"Dinheiro", "Cartao Credito", "Debito"};

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

void Uber::setinserirLocalDePartida(const string *Partida) const
{
	cout <<"\n\nINFORMACOES DA VIAGEM";
	cout <<"\nLocal De Partida Escolhido: " << Partida;;
}

void Uber::setinserirLocalDeDestino(const string *Destino) const
{
	cout << "\nLocal de Destino Escolhido: " << Destino;
}

void Uber::setvalorMinimoCobradoPorViagem() const
{
	cout << "\nValor Minimo cobrado por viagem: R$ " << valorMinimoDeViagem;
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

int Uber::getnumeroDeViagens()
{
	return quantViagens;
}

void Uber::mostrarInformacaoMotorista () 
{
    cout << "\n\nInformacoes do Motorista";
    inforMotorista.mostrarIformacaoMotorista();
}

void Uber::tipo(int car)
{
	selecionarTipo.escolherCarro(car);
}
