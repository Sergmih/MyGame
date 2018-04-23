#pragma once


class CLocation
{
	/**
  * \brief Структура для хранения координат
  */
public:
	CLocation();
	CLocation(int _x, int _y);
	~CLocation() = default;

	int X;
	int Y;
};

class Units
{
	/**
  * \brief Базовый класс всех юнитов
  * \details Реализация основных методов и функций, связанных с hp, damage,
  * \details armor и координатами
  */
public:
	Units() = default;
	Units(unsigned int hp, unsigned int arm, unsigned int dmg, CLocation cord){
		Health = hp;
		Armor = arm;
		Damage = dmg;
		Cord = cord;
	}
	virtual ~Units() = default;

	virtual void attack(const CLocation &_cord) = 0;

	int getHealth() const;
	int getArmor() const;
	int getDamage() const;
	//int getAttackRange();
	CLocation getCord() const;

	virtual void setHealth(int _health);
	virtual void setArmor(int _armor);
	virtual void setDamage(int _damage);
	//virtual void setAttackRange(int _attackrange);
	virtual void setCord(CLocation _cord);


protected:
	int Health;
	int Armor;
	int Damage;
	//int AttackRange;
	CLocation Cord;
	char Symbonmap;

};
