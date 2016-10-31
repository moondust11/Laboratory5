#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "classes.h"
#include "interface.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	candys *Candy1 = new candys("Продукт", "Конфеты", "Пчёлка", 30);
	Candy1->SetWeight(5);
	Candy1->add();
	flowers *Flower1 = new flowers("Цветы", "Ромашка", 50, false);
	Flower1->SetWeight(6);
	Flower1->add();
	watch *Watch1 = new watch("Часы", "Rolex", 40);
	Watch1->SetWeight(3);
	Watch1->add();
	cake *Cake1 = new cake("Продукт", "Торт", "Наполеон", 25);
	Cake1->SetWeight(4);
	Cake1->add();
	flowers *Flower2 = new flowers("", "", 100);
	Flower2->SetWeight(8);
	Flower2->add();
	watch *Watch2 = new watch("", "IRLANDIAN", 250, false);
	Watch2->SetWeight(7);
	Watch2->add();
	control::show();
	cout << "-------------------------------------------------------------" << endl;
	control::del();
	control::show();
	control::del();
	control::show();
	control::del();
	control::show();
	cout << "-------------------------------------------------------------" << endl;
	cout << "Минимальный вес в списке: " << control::GetMin() << endl;
    return 0;
}

