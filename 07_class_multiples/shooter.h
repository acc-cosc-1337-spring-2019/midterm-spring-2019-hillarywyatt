//class Shooter interface
#ifndef SHOOTER_H
#define SHOOTER_H

#include "die.h"
#include "roll.h"
#include "roll_ol.h"

class Shooter
{
public:
	Roll shoot(Die& d1, Die& d2);

};

#endif //!SHOOTER_H