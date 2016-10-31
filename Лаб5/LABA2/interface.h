#pragma once

#include "classes.h"
#include <iostream>

using namespace std;

//јбстрактный класс-контейнер
class gift
{
public:
	gift *Next;
	gift *Prev;
	static gift *Head;
	static int count;
	void add();
	virtual void SetWeight(int) = 0;
	virtual int GetWeight() const = 0;
	virtual void get() const = 0;
	virtual void set() = 0;
};

//класс-контроллер
class control : public gift
{
public:
	const static void show();
	static void del();
	static int GetMin();
};