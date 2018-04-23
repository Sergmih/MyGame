#ifndef CMAP_H
#define CMAP_H
#include <vector>
//#include "Units.h"
#include "CWarrior.h"

using std::vector;
using std::pair;

/**
* \brief Объявление констант для карты
*/
const int Map_Height = 10;
const int Map_Width = 25;
const char emptypoint = 'o';
const int Spawnlimit = 2;


class CMap
{
private:
  CMap()
  {
    /**
    * \brief Создание карты
    * \details Применен паттерн Синглтон, чтобы не создавалась новая карта
    */
    Game_Map.resize(Map_Height);
    for(int i = 0; i < Map_Height; ++i){
      Game_Map[i].resize(Map_Width);
      for(int j = 0; j < Map_Width; ++j){
        Game_Map[i][j] = std::make_pair(emptypoint, nullptr);
      }
    }
  }
  CMap(const CMap&);
  CMap& operator=(CMap&);


public:
  static CMap& getInstance()
  {
    static CMap instance;
    return instance;
  }
  void Show_Map();
  char Get_Object(CLocation cord);
  bool Is_Free(CLocation cord);
  void Add_Object(char type, CLocation cord, CWarrior* _unit);
  void Del_point(CLocation cord);
  vector<vector<pair<char, CWarrior*>>> Game_Map;


};
#endif
