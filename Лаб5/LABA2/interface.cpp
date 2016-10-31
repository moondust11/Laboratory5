#include "stdafx.h"
#include "classes.h"
#include "interface.h"
#include <iostream>

using namespace std;

gift *gift::Head = NULL;
int gift::count = 0;

void gift::add()
{
	gift *p = Head, *temp;
	if (Head == NULL)
	{
		Head = this;
		Head->Prev = Head->Next = NULL;
	}
	else
	{
		if (Head->GetWeight() > this->GetWeight())
		{
			temp = Head;
			this->Next = Head;
			this->Next->Prev = this;
			this->Prev = NULL;
			Head = this;
			return;
		}
		for (; p != NULL; p = p->Next)
		{
			if (this->GetWeight() < p->GetWeight())
			{
				temp = p;
				p = p->Prev;
				this->Prev = temp->Prev;
				this->Next = temp;
				this->Next->Prev = this;
				p->Next = this;
				break;
			}
			else
			{
				if (p->Next == NULL)
				{
					this->Prev = p;
					this->Next = NULL;
					p->Next = this;
					break;
				}
				continue;
			}
		}
	}
	count++;
}

const void control::show()
{
	gift *p = Head;
	cout << "~~~класс CONTROL~~~" << endl;
	for (int i =0; p != NULL; p = p->Next, i++)
	{
		cout<<"Элемент №" << i + 1 << endl;
		p->get();
		cout << endl;
	}
}
void control::del()
{
	gift *p = Head, *temp;
	if (Head == NULL)
	{
		cout << "Удаление не выполнено, подарочная коробка пуста." << endl;
	}
	else
	{
		int k;
		cout << "DEL()" << endl;
		show();
		cout << "\nКакой элемент желаете удалить? - "; cin >> k;
		if (k > count)
		{
			cout << "А почему не 100-ый?" << endl;
			return;
		}
		for (int i = 1; i < k; p = p->Next, i++);
		if (k == 1)
		{
			temp = Head;
			Head = Head->Next;
			Head->Prev = NULL;
			delete temp;
			return;
		}
		if (k == 2)
		{
			temp = p;
			Head->Next = p->Next;
			p->Next->Prev = Head;
			delete temp;
			return;
		}
		temp = p;
		p->Prev->Next = p->Next;
		p->Next->Prev = p->Prev;
		delete temp;
		count--;
		cout << "Удаление элемента выполнено" << endl;
	}
}
int control::GetMin()
{
	return Head->GetWeight();
}