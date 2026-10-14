#pragma once
#include "D2.h"
class D4 :
    public D2
{
	int d4;
public:
	D4(int x, int y, int z):D2(y, z) {
		d4 = x;
	}
	void show_D4()const {
		cout << "D4: " << d4 << endl;
		D2::show_D2();
	}
};


