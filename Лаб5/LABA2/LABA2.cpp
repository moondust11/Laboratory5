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
	candys *Candy1 = new candys("�������", "�������", "������", 30);
	Candy1->SetWeight(5);
	Candy1->add();
	flowers *Flower1 = new flowers("�����", "�������", 50, false);
	Flower1->SetWeight(6);
	Flower1->add();
	watch *Watch1 = new watch("����", "Rolex", 40);
	Watch1->SetWeight(3);
	Watch1->add();
	cake *Cake1 = new cake("�������", "����", "��������", 25);
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
	cout << "����������� ��� � ������: " << control::GetMin() << endl;
    return 0;
}

