/*#include <iostream>
#include "CFactoryInfantry.h"
#include "CInfantry.h"
#include "CFactoryWorkers.h"
#include "CWorkers.h"
#include "CWarrior.h"
#include "EnemyHeart.h"
#include "Units.h"

int main()
{
	CInfantry *UserInf = CFactoryInfantry::create(userwar);
	std::cout<<UserInf->getArmor();
	CInfantry *ComputerInf = CFactoryInfantry::create(computerwar);
	std::cout<<UserInf->getDamage();
	delete UserInf;
	delete ComputerInf;
	return 0;
}*/
#include "test.h"
int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
