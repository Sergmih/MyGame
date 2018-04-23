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
#include "CArmy.h"

using std::vector;

int main()
{
  std::cout << "Hello, it is a console game\n";
  //ЭТО ВСЕ НУЖНО ДЛЯ ОТЛАДКИ, МОЖНО НЕ ЧИТАТЬ
  //--------------------------------------------
  //CMap& A = CMap::getInstance();
  //A.Show_Map();
  //std::cout<<A.Is_Free(cord1);
  //CLocation kords(2, 1);
  //CLocation kords2(3, 1);
  //std::cout<<A.Get_Object(kords);
  //CInfantry *UserInf = CFactoryInfantry::create('C', kords);
  //A.Del_point(kords);
  //CInfantry *UserInf2 = UserInf;
  //CInfantry *UserInf2 = CFactoryInfantry::create('C', kords2);
  //MyArmy.Army_Add(UserInf);
  //MyArmy.Army_Move('R');
  //Army.push_back(UserInf);
  //std::cout << UserInf->getCord().X;
  //A.Show_Map();
  //Army[0]->move(kords2);
  //std::cout << UserInf->getCord().X;
  //CWarrior *U;
  //*U = *UserInf;
  //A.Show_Map();
  //std::cout<<UserInf->getHealth();
  return 0;
}
