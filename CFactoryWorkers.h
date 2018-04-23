#ifndef CFACTORYWORKERS_H
#define CFACTORYWORKERS_H

#include "CWorkers.h"
class CFactoryWorkers
{
	/**
  * \brief Фабричный метод для Рабочих
  */
public:
	CFactoryWorkers() = default;
	~CFactoryWorkers() = default;

	static CWorkers* create();

private:

};

#endif
