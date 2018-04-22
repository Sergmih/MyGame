#include <iostream>
#include <vector>
#include "CMap.h"
#include "CFactoryInfantry.h"
#include "CInfantry.h"
#include "CFactoryWorkers.h"
#include "CWorkers.h"
#include "CWarrior.h"
#include "EnemyHeart.h"
#include "Units.h"

int main()
{
  std::vector<CWarrior*> Army;
  std::cout << "Hello, it is a console game\n";
  CMap& A = CMap::getInstance();
  //A.Show_Map();
  CLocation kords(2, 1);
  CLocation kords2(3, 1);
  //std::cout<<A.Get_Object(kords);
  CInfantry *UserInf = CFactoryInfantry::create('C', kords);
  Army.push_back(UserInf);
  //std::cout << UserInf->getCord().X;
  A.Show_Map();
  Army[0]->move(kords2);
  //std::cout << UserInf->getCord().X;
  CWarrior *U;
  *U = *UserInf;
  A.Show_Map();
  return 0;
}
