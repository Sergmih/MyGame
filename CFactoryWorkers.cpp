#include "CFactoryWorkers.h"

CWorkers* CFactoryWorkers::create()
{
	CWorkers *Worker = new CWorkers();
	return Worker;
}
