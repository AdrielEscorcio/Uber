#ifndef UBER_H
#define UBER_H
#include <string>
using std::string;

class uber
{
public:
    uber(string formaDePagamento);
    {
        setCoursePagamento (formaDePagamento);
    }
    
    void setCoursePagamento ( string formaDePagamento)
    {
        coursePagamento = formaDePagamento;
    }
private:
    string formaDePagamento;
    
};

#endif // UBER_H
