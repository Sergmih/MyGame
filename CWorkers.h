#ifndef CWORKERS_H
#define CWORKERS_H

#include "CWarrior.h"

const int WorkerHealth = 30;
const int WorkerDamage = 10;
const int WorkerArmor = 2;

class CWorkers : public CWarrior
{
public:
	CWorkers();
	~CWorkers() = default;

};

#endif
