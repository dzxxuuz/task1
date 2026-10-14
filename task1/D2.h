#pragma once
#include "B1.h"
class D2 :
    public B1
{
	int d2;
public:
	D2(int x, int y):B1(y) 
	{
		d2 = x;
	}
	void show_D2()const {
		cout << "D2: " << d2 << endl;
		B1::show_B1();
	}
};

