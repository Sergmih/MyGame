#ifndef CWARRIOR_H
#define CWARRIOR_H

#include "Units.h"

class CWarrior : public Units
{
public:
	CWarrior() = default;
	~CWarrior() = default;

	void move(CLocation _cord);
	virtual void attack(const CLocation &_cord);


};
#endif
