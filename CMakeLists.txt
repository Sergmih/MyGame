cmake_minimum_required(VERSION 3.0)
project(mygame)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)

add_executable(mygame main.cpp CFactoryInfantry.cpp CFactoryInfantry.h CFactoryWorkers.cpp CFactoryWorkers.h 
CInfantry.cpp CInfantry.h CWarrior.cpp CWarrior.h CWorkers.cpp CWorkers.h EnemyHeart.h Units.cpp Units.h test.h)

target_link_libraries(mygame gtest gtest_main)
