#ifndef CFACTORYINFANTRY_H
#define CFACTORYINFANTRY_H

#include "CInfantry.h"
class CFactoryInfantry
{
public:
	CFactoryInfantry() = default;
	~CFactoryInfantry() = default;

	static CInfantry* create(Warriortype _warriortype);

private:

};

#endif
