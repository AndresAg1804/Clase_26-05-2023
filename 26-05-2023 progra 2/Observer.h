#pragma once
#include<iostream>
#include<sstream>
#include"Subject.h"
using namespace std;

class Subject; // Declaracion previa

class Observer // <Abstract>
{
protected:
	int valor2;
	Subject* model;
	Subject* getSubject();
	int getValor2();
public:
	Observer(Subject*, int);
	virtual void update() = 0;
	virtual string toString() = 0;
};

