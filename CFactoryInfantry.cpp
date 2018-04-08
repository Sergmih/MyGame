#include "CFactoryInfantry.h"

CInfantry* CFactoryInfantry::create(Warriortype _warriortype)
{
	CInfantry *Infantry = new CInfantry(_warriortype);
}
