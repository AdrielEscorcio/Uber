#include "uber.h"
uber::uber()
{
    setescolherFormaDePagamento();
}
uber::uber(string formaDePagamentos)
{
    setescolherFormaDePagamento (formaDePagamentos);
    
}

uber::~uber()
{
    
}

void uber::setescolherFormaDePagamento()
{
    cout << "Nenhuma opcao escolhida\n";
}


void uber::setescolherFormaDePagamento( const string &formaDePagamentos)
{
    
    if (formaDePagamentos == "D")
    {
        cout <<"Pagamento em Dinheiro\n";
    } else if (formaDePagamentos == "C") {
        cout <<"Pagamento em Cartao\n";
    }
}

