#include <iostream>
#include "CWarrior.h"
#include "CMap.h"

void CWarrior::attack(const CLocation &_cord)
{
	//атаковать объект с координатами _cord
}
void CWarrior::move(CLocation _cord)
{
  CMap& MP = CMap::getInstance();
  MP.Game_Map[Cord.X][Cord.Y] = emptypoint;
  Cord.X = _cord.X;
  Cord.Y = _cord.Y;
  MP.Game_Map[_cord.X][_cord.Y] = Symbonmap;
}
