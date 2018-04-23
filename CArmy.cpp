#include <vector>
#include "CArmy.h"

using std::vector;

void CARMY::Army_Add(CWarrior* _unit)
{
  /**
  * \brief Добавление воина в Армию
  */
  Army.push_back(_unit);
}
void CARMY::Army_Remove(CWarrior* _unit)
{
  /**
  * \brief Удаление воина из Армии
  * \details Удаление нужно чтобы давать воину индивидуальные команды.
  * \details Это поможет лучше планировать сражения
  */
}
void CARMY::Army_Attack()
{
  /**
  * \brief Нападение Армии
  * \details Каждый воин атакует цель, которая находится справа от него, если
  * \details там нет противника, то проверяет остальные стороны
  */
}
void CARMY::Army_Move(char direction)
{
  /**
  * \brief Движение Армии
  * \details Каждый воин Армии движется в указанном направлении
  */
  int _x = 0;
  int _y = 0;
  if(direction == 'U' || direction == 'u'){
    _x = -1;
    _y = 0;
  }
  else if(direction == 'D' || direction == 'd'){
    _x = 1;
    _y = 0;
  }
  else if(direction == 'R' || direction == 'r'){
    _x = 0;
    _y = 1;
  }
  else{
    _x = -1;
    _y = 0;
  }
  for(int i = 0; i < Army.size(); ++i){
    CLocation current_cord = Army[i]->getCord();
    CLocation new_cord(current_cord.X + _x, current_cord.Y + _y);
    Army[i]->move(new_cord);
  }
}
