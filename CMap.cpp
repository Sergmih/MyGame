#include <iostream>
#include "CMap.h"
#include "CInfantry.h"


//Выводит карту на экран
void CMap:: Show_Map()
{
   std::cout << std::endl;
   for(int i = 0; i < Map_Width+1; ++i){
      std::cout << i << " ";
      if(i < 9)std::cout << " ";
   }
   std::cout << std::endl;
   for(int i = 0; i < Map_Height; ++i){
       std::cout << char('a' + i) << "  ";
       for(int j = 0; j < Map_Width; ++j){
           std::cout << Game_Map[i][j] << "  ";
      }
      std::cout << std::endl;
  }
  std::cout << std::endl;
}


void CMap::Add_Object(char type, CLocation cord)
{
    Game_Map[cord.X][cord.Y] = type;
}


// Возвращает Объекст на координатах cord
char CMap:: Get_Object(CLocation cord)
{
    return Game_Map[cord.X][cord.Y];
}


bool CMap::Is_Free(CLocation cord)
{
		return Game_Map[cord.X][cord.Y] == emptypoint;
}
