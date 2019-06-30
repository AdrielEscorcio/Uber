#ifndef POOL_H
#define POOL_H

#include "Uber.h"

class Pool : public Uber
{
	friend ostream &operator<<( ostream &, const Pool &);
	public:
		Pool();
		Pool(const string &, const string &, int, int);
		Pool(const Pool &);
		~Pool();
		
		const Pool &operator=( const Pool &);
		
		bool operator==( const Pool & ) const;
		
		bool operator!=( const Pool &) const;
		
	private:
		int viajantes;
		
};

#endif
