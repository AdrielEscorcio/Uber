#include "Uber.h"
#include "Pop.h"
#include "Femitaxi.h"

int main(int argc, char** argv) {
	string p,d;
	int pag, sex,sexo, idade, tipo, viagem = 0;
	
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
	
		//cout << "     Qual o seu Sexo\n\n";
		//cout << "[1] Feminino\n";
		//cout << "[2] Masculino\n";
		//cin >> sexo;
	//	cout << "Qual a sua idade:";
		//cin >> idade;
		//if (sexo == 1 || idade < 14) {
		
			
	
		cout << "       De onde voce deseja sair\n\n";
		cout << "Entre Local De Partida:";
		cin >> p;
		
		cout << "\n       Para onde voce deseja ir\n\n";
		cout << "Entre Local De Destino:";
		cin >> d;
			
	
		 
		system("cls");
	
		 
		cout << "       Entre com a forma de Pagamento\n\n";
		cout << ("[1] Dinheiro\n");
		cout << ("[2] Credito\n");
		cout << ("[3] Debito\n");
		cin >> pag;
		system("cls");
		
		Uber ub2(p,d, pag);
		
		
		//ub2.mostarTipo();
		//cin >> tipo;
		system("cls");
		
		
		//ub2.mostrarSexoMotorista();
		//cin >> sex;
		system("cls");
		
		cout << "\n\n\n\n\n\n\n                 Procurando Motorista...\n\n\n\n\n\n\n";
		while(clock() - tempo < 7000){ 
		}
		system("cls");	
		
	//	ub2.setinserirLocalDePartida();
	//	ub2.setinserirLocalDeDestino();
		
	//	ub2.setescolherFormaDePagamento(pag);
		//ub2.valorMinimoCobradoPorViagem();
		//ub2.tipo(tipo);
	//	ub2.mostrarInformacaoTipo();
		//ub2.setescolherSexoMotorista(sex);
	//	ub2.mostrarInformacaoMotorista();
		cout << ub2;
		cout << "\nDigite 0 pra finalizar.";
		cout << "\nDigite 1 pra realizar outra viagem.\n\n";
		
		//if (!(ub3 == ub2))
		//{
		//	cout << "iguais.";
		//} 
		//if (ub1 != ub2)
		//{
		//	cout << "Diferentes";
		//}
		//cout << "\nDigite 2 pra vizualizar suas viagens.";
		
	//	ub2.listarLocaisDePartida();
	
		//cout << ub1;
		
		//ub3.getnumeroDeViagens();
		
		
		
		
		cin >> viagem;
		system("cls");
		//} else {
		//	system("cls");
		//	cout << "ELE E VOLTADO PARA MULHERES E CRIANCAS\n\n";
		//	cout << "VOCE NAO SE ENQUADRA NO PEFIL\n\n";
		//	cout << "VOCE NAO PODE USAR ESSE APLICATIVO\n\n";
		//	cout << "MUITO OBRIGADO";
			
			
		//}
	
	
		//cin >> viagem;
		//system("cls");
		
	
		
		cout << "\n\n\n\n\n\n\n         OBRIGADO POR VIAJAR COM A UBER\n\n\n\n\n\n\n";
	delete [] uberPtr;
	return 0;
}
