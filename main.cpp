#include "uber.h"


int main(int argc, char **argv)
{
	string p, d;
	int pagamento, setipo;
	
	
	cout << "Entre Local De Partida:";
	cin >> p;
	cout << "Entre Local De Destino:";
	cin >> d;
	
	
	Uber uber1(p,d);
	cin >> pagamento;
	uber1.setescolherFormaDePagamento(pagamento);
	uber1.setvalorMinimoCobradoPorViagem();
	
	cout << "\n\nEscolhe o Tipo De Uber\n";
	cout << "[1] Uber x\n";
	cout << "[2] Uber Select\n";
	cin >> tipo;
	uber1.tipo(setipo);
	
    uber1.mostrarInformacaoMotorista();
    
/*	Uber uber2("Canudos","Guama");
	cin >> pagamento;
	uber2.setescolherFormaDePagamento(pagamento);
	uber2.setvalorMinimoCobradoPorViagem();
	uber2.mostrarInformacaoMotorista();*/
    
    cout << "\n\nQuantidade de Viagens Realizadas:"<< uber1.getnumeroDeViagens();
    
	return 0;
}
