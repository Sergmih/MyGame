#ifndef TEST_H
#define TEST_H

#include <gtest/gtest.h>
#include "CFactoryInfantry.h"
#include "CInfantry.h"
#include "CFactoryWorkers.h"
#include "CWorkers.h"
#include "CWarrior.h"
#include "EnemyHeart.h"
#include "Units.h"

TEST(test_FInfantry, test1) {
	CInfantry *UserInf = CFactoryInfantry::create(userwar);
	EXPECT_EQ(UserInf->getHealth(), 100);
	CInfantry *ComputerInf = CFactoryInfantry::create(computerwar);
	EXPECT_EQ(UserInf->getHealth(), 120);
}

#endif
