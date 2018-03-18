#include "CFactoryInfantry.h"

CInfantry* CFactoryInfantry::create(Warriortype _warriortype)
{
	switch(_warriortype){
	case userwar:
	{
		CInfantry *Infantry = new CInfantry(userwar);
		return Infantry;
	}

	case computerwar:
	{
		CInfantry *Infantry = new CInfantry(computerwar);
		return Infantry;
	}
	}
}

