#include "uber.h"

int uber::quantViagens = 0;

uber::uber(int formaDePagamento, const string &localDePartida, const string &localDeDestino)
{
    setescolherFormaDePagamento (formaDePagamento);
    setinserirLocalDePartida(localDePartida);
    setinserirLocalDeDestino(localDeDestino);
    
    quantViagens++;
    
}

void uber::setescolherFormaDePagamento(int verificandoFormaDePagamento)
{
    cout << "\n\nINFORMCAOES DA VIAGEM " << quantViagens+1;
    if (verificandoFormaDePagamento == 1)
    {
        cout <<"\n\nPagamento em Dinheiro\n";
    } else if (verificandoFormaDePagamento == 2) {
        cout <<"\n\nPagamento em Cartao Credito\n";
    	} else if (verificandoFormaDePagamento == 3)
		{
    		cout <<"\n\nPagamento em Cartao Debito\n";
			} else {
				cout <<"\n\n Opcao de pagamento invalida\n";
			}
}

void uber::setinserirLocalDePartida(const string &Partida) const
{
	cout <<"Local De Partida Escolhido: " << Partida;;
}

void uber::setinserirLocalDeDestino(const string &Destino) const
{
	cout << "\nLocal de Destino Escolhido: " << Destino;
}

void uber::setvalorMinimoCobradoPorViagem() const
{
	cout << "\n\nValor Minimo cobrado por viagem: R$ " << valorMinimoDeViagem;
}

int uber::getnumeroDeViagens()
{
	return quantViagens;
}
