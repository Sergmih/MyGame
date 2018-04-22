#ifndef CMAP_H
#define CMAP_H
#include<vector>
#include"Units.h"

const int Map_Height = 10;
const int Map_Width = 25;
const char emptypoint = 'o';
const int Spawnlimit = 2;


class CMap
{
private:
	 CMap()
	 {
		  for(int i = 0; i < Map_Height; ++i){
          for(int j = 0; j < Map_Width; ++j){
              Game_Map[i][j] = emptypoint;
          }
      }
	 }
	 CMap(const CMap&);
	 CMap& operator=(CMap&);


public:
    static CMap& getInstance()
    {
        static CMap  instance;
        return instance;
    }
    void Show_Map();
    char Get_Object(CLocation cord);
		bool Is_Free(CLocation cord);
		void Add_Object(char type, CLocation cord);
  	char Game_Map[Map_Height][Map_Width];


};
#endif
