#pragma once
#include "Observer.h"
//#include "Subject.h"
class MultiObserver : public Observer {
public:
	MultiObserver(Subject* mod, int val);
	void update();
	string toString();
};

