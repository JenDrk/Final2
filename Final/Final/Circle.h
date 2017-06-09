#pragma once
#include "Shapes.h"
using namespace std;
class Circle: public Shapes
{
private:
	const double PI = 3.14159;
protected: 
	double radius;
public:
	Circle(int x, int y, double Nradius, std::string name);
	~Circle();

	void print(ostream & out) 
	{
		Draw();
	}
	friend ostream & operator << (ostream &out, Circle c)
	{
		c.print(out);
		return out;
	}

	double GetArea() { return PI * radius * radius; }
	void Draw();
};

