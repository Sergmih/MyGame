#include <iostream>
#include "CInfantry.h"
#include "CMap.h"

CInfantry::CInfantry(char _warriortype, CLocation cord)
{
		CMap& MP = CMap::getInstance();
		//Spawnlimit это максимальное расстояние от левой границы поля, на которое
		//можно заспавнить юнита
		if(MP.Is_Free(cord) && cord.Y <= Spawnlimit)
		{
				MP.Add_Object(_warriortype, cord);
				Cord = cord;
				if(_warriortype == 'C')
					{
						Health = InfantryComputerHealth;
						Damage = InfantryDamage;
						Armor = InfantryArmor;
						//AttackRange = InfantryAttackRange;
					}
					else
					{
						Health = InfantryUserHealth;
						Damage = InfantryDamage;
						Armor = InfantryArmor;
						//AttackRange = InfantryAttackRange;
					}
					Symbonmap = _warriortype;
		}
		else{
				std::cout << "ОШИБКА!\nВы не можете создать Юнита в этой точке поля\n";
		}
}
