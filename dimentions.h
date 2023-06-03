#pragma once
#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
class dimentions {
private:
	int length;            //длина
	int width;             //ширина
	int depth;             //глубина
public:
	dimentions(int );
	dimentions(void);
	dimentions(int l, int w, int d);
	dimentions(const dimentions& temp);
	void PrintDimentions();
	friend dimentions operator++(dimentions&temp);
	friend dimentions operator++(dimentions&temp, int);
	friend dimentions operator--(dimentions&temp, int);
	dimentions operator--();
};
