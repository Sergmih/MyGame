//#include <iostream>
#include "Units.h"

CLocation::CLocation() : X(0), Y(0) {};

CLocation::CLocation(int _x, int _y) : X(_x), Y(_y) {};

void Units::info()
{
	//std::cout << "H = " << Health << "; D = " << Damage << "; A = " << Armor << "; pos : " << Cord.X << " " << Cord.Y;
	return;
}
//геттеры
int Units::getHealth()
{
	return Health;
}
int Units::getArmor()
{
	return Armor;
}
int Units::getDamage()
{
	return Damage;
}
//int Units::getAttackRange()
//{
//	return AttackRange;
//}
CLocation Units::getCord()
{
	return Cord;
}
//сеттеры
void Units::setHealth(int _health)
{
	Health = _health;
}
void Units::setArmor(int _armor)
{
	Armor = _armor;
}
void Units::setDamage(int _damage)
{
	Damage = _damage;
}
//void Units::setAttackRange(int _attackrange)
//{
//	AttackRange = _attackrange;
//}
void Units::setCord(CLocation _cord)
{
	Cord = _cord;
}