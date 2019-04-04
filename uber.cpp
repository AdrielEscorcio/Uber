#include "uber.h"

uber::uber(string formaDePagamentos)
{
    setescolherFormaDePagamento (formaDePagamentos);
}

uber::~uber()
{
    
}

void uber::setescolherFormaDePagamento(string formaDePagamentos)
{
    
    if (formaDePagamentos == "D")
    {
        cout <<"Pagamento em Dinheiro\n";
    } else {
        cout <<"Pagamento em Cartao\n";
    }
}

