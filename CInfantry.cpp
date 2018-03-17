#include "CInfantry.h"

CInfantry::CInfantry(Warriortype _warriortype)
{
	switch(_warriortype){
	case userwar:
	{
		Health = InfantryUserHealth;
		Damage = InfantryDamage;
		Armor = InfantryArmor;
		//AttackRange = InfantryAttackRange;
		break;
	}

	case computerwar:
	{
		Health = InfantryComputerHealth;
		Damage = InfantryDamage;
		Armor = InfantryArmor;
		//AttackRange = InfantryAttackRange;
		break;
	}

	}
}