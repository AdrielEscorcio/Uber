#ifndef TIPOCARRO_H
#define TIPOCARRO_H

#include <iostream>
#include <string>

using std::cout;
using std::string;

class TipoCarro
{
	public:
		TipoCarro();
		~TipoCarro();
		
		void escolherCarro(int);
	private:
		int car;
};

#endif
