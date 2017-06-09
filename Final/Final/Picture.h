#pragma once
#include <vector>
#include <iostream>
#include "Shapes.h"
using namespace std;
class Picture
{
private:
	std::vector<Shapes*>items;
public:
	Picture();
	~Picture();

	void Add(Shapes *shape)
	{
		items.push_back(shape);
	}

	double getTotalArea(int index)
	{
		try 
		{
			if (index > items.size()) 
			{
				throw index;
			}
			else if (index == items.size())
			{
				return 0.0;
			}
			return items[index]->GetArea() + getTotalArea(++index);
		}
		catch (int e) 
		{
			cout << e << " is out of bounds. Returning zero instead: " << endl;
			return 0.0;
		}
	}

	void drawAll()
	{
		for(int i =  0; i < items.size(); i++)
		{
			items[i]->Draw();
		}
	};
};

