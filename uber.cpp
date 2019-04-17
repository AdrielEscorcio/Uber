#include "uber.h"	

int uber::quantViagens = 0;

uber::uber(const string &localDePartida, const string &localDeDestino)
{
    setinicializarFormaDePagamento();
    setinserirLocalDePartida(localDePartida);
    setinserirLocalDeDestino(localDeDestino);
    mostarFormaPagamento();
    
    quantViagens++;
    
}
//string pag[] = {"Dinheiro", "Cartao Credito", "Debito"};

void uber::setinicializarFormaDePagamento()
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

void uber::setinserirLocalDePartida(const string &Partida) const
{
	cout <<"\n\nINFORMACOES DA VIAGEM";
	cout <<"\nLocal De Partida Escolhido: " << Partida;;
}

void uber::setinserirLocalDeDestino(const string &Destino) const
{
	cout << "\nLocal de Destino Escolhido: " << Destino;
}

void uber::setvalorMinimoCobradoPorViagem() const
{
	cout << "\nValor Minimo cobrado por viagem: R$ " << valorMinimoDeViagem;
}

void uber::mostarFormaPagamento() const
{
	cout << "\n Entre com a forma de Pagamento\n";
	for(int i=0; i < 3; i++)
		cout<< "["<<i+1<<"]"<<pag[i] << "\n";
	
}

void uber::setescolherFormaDePagamento(int formaDePagamento)
{
    for (int i = 0; i < quantFormaPagamento; i++ )
    {
    	if (i == formaDePagamento-1)
    	{
    		cout <<"Forma de Pagamento:"<<pag[i];
    	}
	}
}

int uber::getnumeroDeViagens()
{
	return quantViagens;
}
