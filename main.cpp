#include "Uber.h"

int main(int argc, char** argv) {
	string p,d;
	int pag, sex, tipo, viagem = 0;
	
	int tempo = clock();
	
	Uber *uberPtr;
	uberPtr = new Uber;
	
	
	cout << "\n\n\n\n\n\n\n                  CARREGANDO...\n\n\n\n\n\n\n";
	while(clock() - tempo < 6000){ 
	}
	system("cls");
	
	cout << "\n\n\n\n\n\n\n                 BEM VINDO A UBER\n\n\n\n\n\n\n";

	cout << "\n\n         Digite 1 pra realizar sua viagem.\n";
	cin >> viagem;
	system("cls");
	
	
		cout << "       Ensira Dados Da Viagem\n\n";
		cout << "Entre Local De Partida:";
		cin >> p;
		cout << "Entre Local De Destino:";
		cin >> d;
			
	
		Uber ub1,ub2(p,d),ub3(ub2);
		system("cls");
	
		ub2.mostarFormaPagamento();
		cin >> pag;
		system("cls");
		
		
		ub2.mostarTipo();
		cin >> tipo;
		system("cls");
		
		
		ub2.mostrarSexoMotorista();
		cin >> sex;
		system("cls");
		
		cout << "\n\n\n\n\n\n\n                 Procurando Motorista...\n\n\n\n\n\n\n";
		while(clock() - tempo < 7000){ 
		}
		system("cls");
		
		
		cout <<"       INFORMACOES DA VIAGEM\n";
		cout<< "----------------------------------------";
		
	//	ub2.setinserirLocalDePartida();
	//	ub2.setinserirLocalDeDestino();
		cout << ub2;
		ub2.setescolherFormaDePagamento(pag);
		ub2.valorMinimoCobradoPorViagem();
		ub2.tipo(tipo);
		ub2.mostrarInformacaoTipo();
		ub2.setescolherSexoMotorista(sex);
		ub2.mostrarInformacaoMotorista();

		cout << "\nDigite 0 pra finalizar.";
		cout << "\nDigite 1 pra realizar outra viagem.\n\n";
		
		if (!(ub3 == ub2))
		{
			cout << "iguais.";
		} 
		if (ub1 != ub2)
		{
			cout << "Diferentes";
		}
		//cout << "\nDigite 2 pra vizualizar suas viagens.";
		
	//	ub2.listarLocaisDePartida();
	
		cout << ub1;
		
		ub3.getnumeroDeViagens();
		
		
		
		
		cin >> viagem;
		system("cls");
	
	
	
		
		system("cls");
		
	
		
		cout << "\n\n\n\n\n\n\n         OBRIGADO POR VIAJAR COM A UBER\n\n\n\n\n\n\n";
	delete [] uberPtr;
	return 0;
}
