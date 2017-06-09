#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "Shapes.h"
#include "Picture.h"
#include <array>
using namespace std;

int main()
{
	Picture pics[2];
	system("cls");
	Picture test;
	Picture test2;
	test.Add(new Circle(3, 5, 2.0, "circle1"));
	test.Add(new Square(2.0, 3, 5, "square1"));

	test2.Add(new Square(2.0, 3, 5, "square2"));
	test2.Add(new Circle(3, 5, 2.0, "circle2"));
	pics[0] = test;
	pics[1] = test2;
	pics[0].drawAll();
	pics[1].drawAll();
	pics[0].getTotalArea(0);
	cout << endl;
	pics[1].getTotalArea(0);
	cout << endl;
	cout << "OVERLOAD:     " << endl;
	Circle c1(2, 3, 3.0, "test");
	cout << c1  << endl;
	system("pause");
	return 0;
}