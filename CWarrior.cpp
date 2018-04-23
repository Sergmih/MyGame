#include <iostream>
#include <vector>
#include "CWarrior.h"
#include "CMap.h"

void CWarrior::attack(const CLocation &_cord)
{
  /**
  * \brief Функция Атаки цели воином
  */
}
void CWarrior::move(CLocation _cord)
{
  /**
  * \brief Функция передвижение
  * \details Воин передвигается на точку с заданными координатами. При этом
  * \details зачищается предыдущее местонахождение воина
  */
  CMap& MP = CMap::getInstance();
  MP.Game_Map[_cord.X][_cord.Y] = std::make_pair(Symbonmap, MP.Game_Map[Cord.X][Cord.Y].second);
  MP.Game_Map[Cord.X][Cord.Y] = std::make_pair(emptypoint, nullptr);
  Cord.X = _cord.X;
  Cord.Y = _cord.Y;
}
