#include <iostream>
#include "CMap.h"

void CMap:: Show_Map()
{
  /**
  * \brief Функция отображения карты игры
  * \details Выводи в строку координаты от 0 до Map_Width. А в стобец записано
  * \details Map_Height буквенных координат
  */
  std::cout << std::endl;
  for(int i = 0; i < Map_Width+1; ++i){
    std::cout << i << " ";
    if(i < 9)std::cout << " ";
  }
  std::cout << std::endl;
  for(int i = 0; i < Map_Height; ++i){
    std::cout << char('a' + i) << "  ";
    for(int j = 0; j < Map_Width; ++j){
      std::cout << Game_Map[i][j].first << "  ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}


void CMap::Add_Object(char type, CLocation cord, CWarrior* _unit)
{
  /**
  * \brief Функция Добавляет объект на карту
  */
  Game_Map[cord.X][cord.Y] = std::make_pair(type, _unit);
}



char CMap:: Get_Object(CLocation cord)
{
  /**
  * \brief Функция Возвращает объект
  * \details Возвращает Объект находящийся на заданных координатах
  */
  return Game_Map[cord.X][cord.Y].first;
}


bool CMap::Is_Free(CLocation cord)
{
  /**
  * \brief Функция Проверяет пустая ли точка карты
  */
  return Game_Map[cord.X][cord.Y].second == nullptr;
}
void CMap::Del_point(CLocation cord)
{
  /**
  * \brief Функция удаляет объект на заданных координатах
  */
  Game_Map[cord.X][cord.Y] = std::make_pair(emptypoint, nullptr);
}
