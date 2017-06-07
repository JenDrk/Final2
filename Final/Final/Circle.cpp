#pragma once
#include <iostream>
#include "Circle.h"
#include "Shapes.h"
using namespace std;


Circle::Circle(int x, int y, double Nradius, string name) : Shapes(x, y, name) , radius(Nradius)
{
}

Circle::~Circle()
{
}

void Circle::Draw()
{
	cout << "         " << endl
		<< "  *    *  " << endl
		<< " *      * " << endl
		<< " *      * " << endl
		<< "  *    *  " << endl
		<< "          " << endl;
}


