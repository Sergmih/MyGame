#include <iostream>
#include <string>
#include <vector>
#include "CFactoryWorkers.h"
#include "EnemyHeart.h"

/*
class CLocation
{
public:
	CLocation();
	CLocation(int _x, int _y);
	~CLocation() = default;

	int X;
	int Y;
};
//Unit
class Units
{
public:
	Units() = default;
	Units(unsigned int hp, unsigned int arm, unsigned int dmg, CLocation cord) :
		Health(hp), Armor(arm), Damage(dmg), Cord(cord)
	{}
	virtual ~Units() = default;

	virtual void attack(const CLocation _cord) = 0;

	int getHealth();
	int getArmor();
	int getDamage();
	//int getAttackRange();
	CLocation getCord();

	virtual void setHealth(int _health);
	virtual void setArmor(int _armor);
	virtual void setDamage(int _damage);
	//virtual void setAttackRange(int _attackrange);
	virtual void setCord(CLocation _cord);
	virtual void info();

protected:
	int Health;
	int Armor;
	int Damage;
	//int AttackRange;
	CLocation Cord;

};
*/
/*
CLocation::CLocation() : X(0), Y(0) {};

CLocation::CLocation(int _x, int _y) : X(_x), Y(_y) {};

void Units::info()
{
	std::cout << "H = " << Health << "; D = " << Damage << "; A = " << Armor << "; pos : " << Cord.X << " " << Cord.Y;
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
}*/
/*
//Cwarrior
class CWarrior : public Units
{
public:
	CWarrior() = default;
	~CWarrior() = default;

	void move(CLocation _cord);
	virtual void attack(CLocation _cord);


};

void CWarrior::attack(CLocation _cord)
{
	//Алгоритм нанесения урона противнику
}
void CWarrior::move(CLocation _cord)
{
	//Передвинуться на место _cord
}*/
//Фабрика воинов
/*
enum Warriortype
{
	userwar,
	computerwar
};

class CInfantry : public CWarrior
{
public:
	CInfantry() = default;
	CInfantry(Warriortype _warriortype);
	~CInfantry() = default;

};

const int InfantryUserHealth = 100;
const int InfantryComputerHealth = 105;
const int InfantryDamage = 34;
const int InfantryArmor = 5;
//const int InfantryAttackRange = 1;

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
*/
//factory
/*
class CFactoryInfantry
{
public:
	CFactoryInfantry() = default;
	~CFactoryInfantry() = default;

	static CInfantry* create(Warriortype _warriortype);

private:

};
CInfantry* CFactoryInfantry::create(Warriortype _warriortype)
{
	switch(_warriortype){
	case userwar:
	{
		CInfantry *Infantry = new CInfantry(userwar);
		return Infantry;
	}

	case computerwar:
	{
		CInfantry *Infantry = new CInfantry(computerwar);
		return Infantry;
	}
	}
}
*/
/*
//EnemyHeart (Singleton реализация Мэйерса)
class EnemyHeart
{
private:
	EnemyHeart() 
	{
		HeartHP = 250;
		HeartDmg = 50;
		HeartArmor = 10;
	}
	EnemyHeart(const EnemyHeart&);
	EnemyHeart& operator=(EnemyHeart&);


public:
	static EnemyHeart& getInstance()
	{
		static EnemyHeart  instance;
		return instance;
	}

	unsigned int HeartHP;    // Прочность
	unsigned int HeartDmg;   // Кол-во урона каждую секунду
	unsigned int HeartArmor; // Броня
};
*/
/*
//Рабочие
class CWorkers : public CWarrior
{
public:
	CWorkers();
	~CWorkers() = default;

};

const int WorkerHealth = 30;
const int WorkerDamage = 10;
const int WorkerArmor = 2;

CWorkers::CWorkers()
{
	Health = WorkerHealth;
	Damage = WorkerDamage;
	Armor = WorkerArmor;
}
*/
/*
// Фабрика для рабочих
class CFactoryWorkers
{
public:
	CFactoryWorkers() = default;
	~CFactoryWorkers() = default;

	static CWorkers* create();

private:

};
CWorkers* CFactoryWorkers::create()
{
	CWorkers *Worker = new CWorkers();
	return Worker;
}
*/
int main()
{
	std::string str;
	CFactoryWorkers ABC;
	ABC.create()->info();
	std::cout << std::endl;
	EnemyHeart& A = EnemyHeart::getInstance();


	system ("pause");

	return 0;
}