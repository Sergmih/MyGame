#include "CFactoryInfantry.h"

CInfantry* CFactoryInfantry::create(char _warriortype, CLocation cord)
{
	CInfantry *Infantry = new CInfantry(_warriortype, cord);
}
