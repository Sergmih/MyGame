cmake_minimum_required(VERSION 3.0)
project(mygame)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})



add_executable(runTests main.cpp CFactoryInfantry.cpp CFactoryInfantry.h CFactoryWorkers.cpp CFactoryWorkers.h CInfantry.cpp CInfantry.h CWarrior.cpp CWarrior.h CWorkers.cpp CWorkers.h EnemyHeart.h Units.cpp Units.h test.h)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

