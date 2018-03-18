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

TEST(test_FInfantryhealth, test1) {
	CInfantry *UserInf = CFactoryInfantry::create(userwar);
	EXPECT_EQ(UserInf->getHealth(), 100);
	CInfantry *ComputerInf = CFactoryInfantry::create(computerwar);
	EXPECT_EQ(ComputerInf->getHealth(), 120);
	delete UserInf;
	delete ComputerInf;
}
TEST(test_FInfantrydamage, test1) {
	CInfantry *UserInf = CFactoryInfantry::create(userwar);
	EXPECT_EQ(UserInf->getDamage(), 40);
	CInfantry *ComputerInf = CFactoryInfantry::create(computerwar);
	EXPECT_EQ(UserInf->getDamage(), 40);
	delete UserInf;
	delete ComputerInf;
}
TEST(test_FInfantryarmor, test1) {
	CInfantry *UserInf = CFactoryInfantry::create(userwar);
	EXPECT_EQ(UserInf->getArmor(), 5);
	CInfantry *ComputerInf = CFactoryInfantry::create(computerwar);
	EXPECT_EQ(UserInf->getArmor(), 5);
	delete UserInf;
	delete ComputerInf;
}
TEST(test_FWorkers, test1) {
	CWorkers *Work = CFactoryWorkers::create();
	EXPECT_EQ(Work->getHealth(), 30);
	delete Work;
}
TEST(test_EnemyHeartDMG, test1) {
	EnemyHeart& A = EnemyHeart::getInstance();
	EXPECT_EQ(A.HeartDmg, 50);
}
TEST(test_EnemyHeartARM, test1) {
	EnemyHeart& A = EnemyHeart::getInstance();
	EXPECT_EQ(A.HeartArmor, 10);
}
TEST(test_EnemyHeartHP, test1) {
	EnemyHeart& A = EnemyHeart::getInstance();
	EXPECT_EQ(A.HeartHP, 250);
}
TEST(test_EnemyHeart2, test1) {// Проверка того, что элемент синглтона единственнен
	EnemyHeart& A = EnemyHeart::getInstance();
	A.HeartHP = 100;
	EnemyHeart& B = EnemyHeart::getInstance();
	EXPECT_EQ(B.HeartHP, 100);
}



#endif
