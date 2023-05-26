#pragma once
#include <iostream>
#include<sstream>
#include "Observer.h"
using namespace std;

class Observer;

class Subject
{
private:
	int valor1;
	//----------------------
	Observer* vec[20];
	int can;
	int tam;
public:
	Subject(int = 0);
	virtual ~Subject();
	void agregar(Observer*);
	void setValor1(int);
	int getValor1();
	void notify();
	string toString();
};

