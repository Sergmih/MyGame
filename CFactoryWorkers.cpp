#include "CFactoryWorkers.h"

CWorkers* CFactoryWorkers::create()
{
	/**
  * \brief Создание Рабочего
  */
	CWorkers *Worker = new CWorkers();
	return Worker;
}
