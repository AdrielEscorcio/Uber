#include "uber.h"


int main(int argc, char **argv)
{
	string p, d;
	int pagamento;
	
	
	cout << "Entre Local De Partida:";
	cin >> p;
	cout << "Entre Local De Destino:";
	cin >> d;
	
	
	Uber uber1(p,d);
	cin >> pagamento;
	uber1.setescolherFormaDePagamento(pagamento);
	uber1.setvalorMinimoCobradoPorViagem();
    uber1.ostrarIformacaoMotorista();
    
	Uber uber2("Canudos","Guama");
	cin >> pagamento;
	uber2.setescolherFormaDePagamento(pagamento);
	uber2.setvalorMinimoCobradoPorViagem();
	uber2.ostrarIformacaoMotorista();
    
    cout << "\n\nQuantidade de Viagens Realizadas:"<< uber2.getnumeroDeViagens();
    
	return 0;
}
