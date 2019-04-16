#include "uber.h"
using std::cin;

int main(int argc, char **argv)
{
	string p, d;
	int pagamento;
	cout << "Entre Local De Partida:";
	cin >> p;
	cout << "Entre Local De Destino:";
	cin >> d;
	cout << "\n Entre com a forma de Pagamento\n";
	cout <<"[1] DINHEIRO\n";
	cout <<"[2] CARTAO CREDITO\n";
	cout <<"[3] CARTAO DEBITO\n";
	cin >> pagamento;
	
	uber uber1(pagamento,p,d);
	
	uber uber2(3,"Canudos","Guama");
	    
    uber1.setvalorMinimoCobradoPorViagem();
    
    
    cout << "\nQuantidade de Viagens:"<< uber2.getnumeroDeViagens();
    
	return 0;
}
