#ifndef CINFANTRY_H
#define CINFANTRY_H

#include "CWarrior.h"

/**
* \brief Объявление констант для воинов
*/
const int InfantryUserHealth = 100;
const int InfantryComputerHealth = 120;
const int InfantryDamage = 40;
const int InfantryArmor = 5;

class CInfantry : public CWarrior
{
public:
	CInfantry() = default;
	CInfantry(char _warriortype, CLocation cord);
	~CInfantry() = default;

};

#endif
