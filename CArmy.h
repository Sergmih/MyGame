#ifndef CARMY_H
#define CARMY_H

#include <vector>
#include "CWarrior.h"

// Компоновщик

class ARMY_Interface
{
  /**
  * \brief Паттерн Компоновщик, собирающий юнитов в Армию
  * \details Интерфейс Армии, собирающей воинов в Армиюю После создания
  * \details Армии можно двигаться и атаковать одновременно всеми юнитами.
  */
public:
  virtual void Army_Move(char direction) = 0;
  virtual void Army_Attack() = 0;
};

class CARMY : public ARMY_Interface
{
  /**
  * \brief Компонент паттерна. Реализация функция для Армии
  * \details Класс реализует Функции передвижения, атаки, добавления и удаления
  * \details воинов в Армию. Хранит воинов в векторе указателей на CWarrior
  */
public:
  virtual void Army_Add(CWarrior* _unit);
  virtual void Army_Remove(CWarrior* _unit);
  virtual void Army_Attack();
  virtual void Army_Move(char direction);
private:
  std::vector<CWarrior*> Army;
};


#endif
