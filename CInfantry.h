#ifndef CINFANTRY_H
#define CINFANTRY_H

#include "CWarrior.h"

enum Warriortype
{
	userwar,
	computerwar
};

const int InfantryUserHealth = 100;
const int InfantryComputerHealth = 120;
const int InfantryDamage = 40;
const int InfantryArmor = 5;

class CInfantry : public CWarrior
{
public:
	CInfantry() = default;
	CInfantry(Warriortype _warriortype);
	~CInfantry() = default;

};

#endif
