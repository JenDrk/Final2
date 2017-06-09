#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "Shapes.h"
#include "Picture.h"
using namespace std;

int main()
{
	system("cls");
	Picture test;
	test.Add(new Circle(3, 5, 2.0, "circle1"));
	test.Add(new Square(2.0, 3, 5, "square1"));
	test.drawAll();
	cout << test.getTotalArea(3)<< endl;
	system("pause");
	return 0;
}