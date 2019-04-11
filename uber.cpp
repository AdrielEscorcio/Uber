#include "uber.h"
string pagamento;
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
    pagamento =  "Nenhuma opcao escolhida\n";
}


void uber::setescolherFormaDePagamento( const string &formaDePagamentos)
{
    
    if (formaDePagamentos == "D")
    {
        pagamento = "Pagamento em Dinheiro\n";
    } else if (formaDePagamentos == "C") {
        pagamento = "Pagamento em Cartao\n";
    }
}

