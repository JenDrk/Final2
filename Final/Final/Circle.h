#pragma once
#include "Shapes.h"
class Circle: public Shapes
{
private:
	const double PI = 3.14159;
protected: 
	double radius;
public:
	Circle(int x, int y, double Nradius, std::string name);
	~Circle();

	double GetArea() { return PI * radius * radius; }
	void Draw();
};

