#ifndef ENEMYHEART_H
#define ENEMYHEART_H

class EnemyHeart
{
	/**
  * \brief Синглтон, Сердце противника
  * \details Реализация синглтона, чтобы не было нескольких копий этого объекта
  * \details Иначе это приведет к ошибке.
  */
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
		static EnemyHeart instance;
		return instance;
	}

	unsigned int HeartHP;
	unsigned int HeartDmg;
	unsigned int HeartArmor;
};

#endif
