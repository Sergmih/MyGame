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
#include "CMap.h"
#include "CArmy.h"

TEST(test_FInfantryhealth, test1) {
	CMap& map = CMap::getInstance();
	CLocation cord1(1, 2);
	CInfantry *UserInf = CFactoryInfantry::create('U', cord1);
	EXPECT_EQ(UserInf->getHealth(), 100);
	CLocation cord2(0, 2);
	CInfantry *ComputerInf = CFactoryInfantry::create('C', cord2);
	EXPECT_EQ(ComputerInf->getHealth(), 120);
	map.Del_point(cord1);
	map.Del_point(cord2);
	delete UserInf;
	delete ComputerInf;
}
TEST(test_FInfantrydamage, test1) {
	CMap& map = CMap::getInstance();
	CLocation cord1(1, 1);
	CInfantry *UserInf = CFactoryInfantry::create('U', cord1);
	EXPECT_EQ(UserInf->getDamage(), 40);
	CLocation cord2(0, 1);
	CInfantry *ComputerInf = CFactoryInfantry::create('C', cord2);
	EXPECT_EQ(ComputerInf->getDamage(), 40);
	map.Del_point(cord1);
	map.Del_point(cord2);
	delete UserInf;
	delete ComputerInf;
}
TEST(test_FInfantryarmor, test1) {
	CMap& map = CMap::getInstance();
	CLocation cord1(1, 1);
	CInfantry *UserInf = CFactoryInfantry::create('U', cord1);
	EXPECT_EQ(UserInf->getArmor(), 5);
	CLocation cord2(0, 1);
	CInfantry *ComputerInf = CFactoryInfantry::create('C', cord2);
	EXPECT_EQ(ComputerInf->getArmor(), 5);
	map.Del_point(cord1);
	map.Del_point(cord2);
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
TEST(test_Army, test1) {
	CLocation cord1(1, 1);
	CInfantry *UserInf = CFactoryInfantry::create('U', cord1);
	CARMY MyArmy;
	MyArmy.Army_Add(UserInf);
	MyArmy.Army_Move('R');
	EXPECT_EQ(UserInf->getCord().Y, 2);
	delete UserInf;
}



#endif
