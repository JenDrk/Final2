#pragma once
#include "Shapes.h"
class Square : public Shapes
{
private:
protected:
	double width;
public:
	Square(double width, int x, int y, std::string name);
	~Square();

	double GetArea() { return width * width; }
	void Draw();
};

