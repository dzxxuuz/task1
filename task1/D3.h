#pragma once
#include "D1.h"
class D3 :
	private D1
{
	int d3;
public:
	D3(int x, int y, int z):D1(y, z) {
		d3 = x;
	}
	void show_D3()const {
		cout << "D3: " << d3 << endl;
		D1::show_D1();
	}
};

