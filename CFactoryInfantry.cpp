#include "CFactoryInfantry.h"

CInfantry* CFactoryInfantry::create(char _warriortype, CLocation cord)
{
	/**
  * \brief Создание Воина
  * \details Создается воин на указанных координатах 
  */
	CInfantry *Infantry = new CInfantry(_warriortype, cord);
}
