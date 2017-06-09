#include "Shapes.h"
#include "Square.h"
#include <iostream>
using namespace std;


Square::Square(double width, int x, int y, std::string name) : Shapes(x, y, name) , width(width)
{
}

Square::~Square()
{
}


void Square :: Draw()
{
	cout << "*****" << endl
		<< "*   *" << endl
		<< "*   *" << endl
		<< "*   *" << endl
		<< "*****" << endl;
}