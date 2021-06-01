#include "DroppableBackpack.h"

DroppableBackpack::DroppableBackpack(double exp)
{
	_exp = exp;
}

double DroppableBackpack::GetReward()
{
	return _exp;
}
