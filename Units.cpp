#include <iostream>
#include "Units.h"

CLocation::CLocation() : X(0), Y(0) {};

CLocation::CLocation(int _x, int _y) : X(_x), Y(_y) {};

int Units::getHealth() const
{
	/**
  * \brief Функция получения здоровья противника
  */
	return Health;
}
int Units::getArmor() const
{
	/**
  * \brief Функция получения Брони противника
  */
	return Armor;
}
int Units::getDamage() const
{
	/**
  * \brief Функция получения урона противника
  */
	return Damage;
}
//int Units::getAttackRange()
//{
//	return AttackRange;
//}
CLocation Units::getCord() const
{
	/**
  * \brief Функция получения координат противника
  */
	return Cord;
}
void Units::setHealth(int _health)
{
	/**
  * \brief Функция установки здоровья противника
  */
	Health = _health;
}
void Units::setArmor(int _armor)
{
	/**
  * \brief Функция установки брони противника
  */
	Armor = _armor;
}
void Units::setDamage(int _damage)
{
	/**
  * \brief Функция установки урона противника
  */
	Damage = _damage;
}
//void Units::setAttackRange(int _attackrange)
//{
//	AttackRange = _attackrange;
//}
void Units::setCord(CLocation _cord)
{
	/**
  * \brief Функция установки координат противника
  */
	Cord = _cord;
}
