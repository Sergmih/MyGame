#ifndef ENEMYHEART_H
#define ENEMYHEART_H

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

	unsigned int HeartHP;    
	unsigned int HeartDmg;   
	unsigned int HeartArmor; 
};

#endif
