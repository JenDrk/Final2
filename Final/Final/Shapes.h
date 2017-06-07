#pragma once
#include <string>
class Shapes
{
private:
	std::string _name;
	int _x;
	int _y;
public:
	Shapes(int x, int y, std::string name);
	~Shapes();

	virtual double GetArea() = 0;
	virtual void Draw() = 0;
};

