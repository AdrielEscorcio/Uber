#ifndef UBER_H
#define UBER_H
#include <iostream>
#include <string>

using std::string;
using std::cout;

class uber
{
    
public:
    uber(string formaDePagamento);
    ~uber();
    
   void setescolherFormaDePagamento (string);
   
private:
    string formaDePagamento;
    
};

#endif // UBER_H
