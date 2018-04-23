#include <iostream>
#include "CInfantry.h"
#include "CMap.h"

CInfantry::CInfantry(char _warriortype, CLocation cord)
{
	/**
  * \brief Создание Воина
  * \details Проверяется можно ли создать война на текущих координатах.
	* \details Если можно, то создается воин и на карте помечается как 'C' или 'U'
	* \details для воинов компьютера и Юзера соответственно
  */
	// Вскоре добавится ограничение создания воинов юзера не дальше какого-либо
	// растояния от левой границы. Так же для воинов компьютера с правой стороны
	CMap& MP = CMap::getInstance();
	if(MP.Is_Free(cord))
	{
		MP.Add_Object(_warriortype, cord, this);
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
