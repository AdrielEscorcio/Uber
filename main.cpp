#include "Uber.h"

int main(int argc, char** argv) {
	string p,d;
	int pag, apagar, sex, tipo;
	
	cout << "Entre Local De Partida:";
	cin >> p;
	cout << "Entre Local De Destino:";
	cin >> d;
	
	Uber ub1, ub2(p,d), ub3(ub2);
	

	
	ub2.setinserirLocalDePartida();
	ub2.setinserirLocalDeDestino();
	ub2.mostarFormaPagamento();
	cin >> pag;
	ub2.setescolherFormaDePagamento(pag);
	ub2.setvalorMinimoCobradoPorViagem();
	ub2.mostarTipo();
	cin >> tipo;
	ub2.tipo(tipo);
	ub2.mostrarInformacaoTipo();
	ub2.mostarSexoMotorista();
	cin >> sex;
	ub2.setescolherSexoMotorista(sex);
	ub2.mostrarInformacaoMotorista();
	cout << "\nDigite 1 pra finalizar.";
	cin >> apagar;
	system("cls");
	
	ub1.setinserirLocalDePartida();
	ub1.setinserirLocalDeDestino();
	cout << "\nDigite 1 pra finalizar.";
	cin >> apagar;
	system("cls");
	
	ub3.setinserirLocalDePartida();
	ub3.setinserirLocalDeDestino();
	ub3.mostarFormaPagamento();
	cin >> pag;
	ub3.setescolherFormaDePagamento(pag);
	ub3.setvalorMinimoCobradoPorViagem();
	ub3.mostrarInformacaoMotorista();
	cout << "\nDigite 1 pra finalizar.";
	cin >> apagar;
	system("cls");	
	
	ub3.getnumeroDeViagens();
	return 0;
}
