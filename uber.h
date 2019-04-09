#ifndef UBER_H
#define UBER_H

#include <iostream>
#include <string>

using std::string;
using std::cout;

class uber
{
    
public:
    uber();
    uber(string formaDePagamento);
    ~uber();
    
    void setescolherFormaDePagamento();
    void setescolherFormaDePagamento (const string &);
   
private:
    string formaDePagamento;
    
};

#endif // UBER_H
