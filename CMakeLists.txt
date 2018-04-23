cmake_minimum_required(VERSION 3.0)
project(mygame)

set(CMAKE_CXX_STANDARD 11)

if(WITH_TEST)
  find_package(GTest REQUIRED)
  include_directories(${GTEST_INCLUDE_DIRS})
  add_executable(mygame test.cpp CMap.h Units.h CFactoryInfantry.h CFactoryInfantry.cpp CFactoryWorkers.h CFactoryWorkers.cpp
    CInfantry.cpp CInfantry.h CWarrior.cpp CWarrior.h CWorkers.cpp CWorkers.h EnemyHeart.h Units.cpp test.h CMap.cpp CArmy.h CArmy.cpp)
    target_link_libraries(mygame ${GTEST_LIBRARIES} pthread)
elseif(DEBUG)
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -std=c++11-Wall")
  add_executable(mygame main.cpp CFactoryInfantry.cpp CFactoryInfantry.h CFactoryWorkers.cpp CFactoryWorkers.h
    CInfantry.cpp CInfantry.h CWarrior.cpp CWarrior.h CWorkers.cpp CWorkers.h EnemyHeart.h Units.cpp Units.h test.h CMap.h CMap.cpp CArmy.h CArmy.cpp)
else()
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -std=c++11-Wall")
  add_executable(mygame main.cpp CFactoryInfantry.cpp CFactoryInfantry.h CFactoryWorkers.cpp CFactoryWorkers.h
    CInfantry.cpp CInfantry.h CWarrior.cpp CWarrior.h CWorkers.cpp CWorkers.h EnemyHeart.h Units.cpp Units.h test.h CMap.h CMap.cpp CArmy.h CArmy.cpp)
endif()
