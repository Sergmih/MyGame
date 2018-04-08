#include <iostream>
#include "Units.h"

CLocation::CLocation() : X(0), Y(0) {};

CLocation::CLocation(int _x, int _y) : X(_x), Y(_y) {};

int Units::getHealth() const
{
	return Health;
}
int Units::getArmor() const
{
	return Armor;
}
int Units::getDamage() const
{
	return Damage;
}
//int Units::getAttackRange()
//{
//	return AttackRange;
//}
CLocation Units::getCord() const
{
	return Cord;
}
//�������
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
