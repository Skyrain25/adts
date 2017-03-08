#include "StackV.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int Stack::size()
{
	return data.size();
}

void Stack::push(int val)
{
	data.push_back(val);
}

void Stack::pop()
{
	data.pop_back();
	
}

int Stack::top()
{
	int i=data.size()-1;
	return data[i];
	
}
	
void Stack::clear()
{
	while(data.size() > 0)
	{
	  data.pop_back();
    } 
}

