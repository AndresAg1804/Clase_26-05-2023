#pragma once
#include "Observer.h"
#include <cmath>
//#include "Subject.h"
class PotObserver : public Observer {
public:
	PotObserver(Subject* mod, int val);
	void update();
	string toString();
};
