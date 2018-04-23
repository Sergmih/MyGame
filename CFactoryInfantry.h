#ifndef CFACTORYINFANTRY_H
#define CFACTORYINFANTRY_H

#include "CInfantry.h"
class CFactoryInfantry
{
	/**
  * \brief Фабричный метод для воинов
  * \details Реализация Фабричного метода, создание и удаление юнитов
  */
public:
	CFactoryInfantry() = default;
	~CFactoryInfantry() = default;

	static CInfantry* create(char _warriortype, CLocation cord);
	static CInfantry Del();

private:

};

#endif
