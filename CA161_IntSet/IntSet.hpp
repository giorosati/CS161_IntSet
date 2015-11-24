/*********************************************************************
** Author: Giovanni Rosati
** Date: 2015-1123
** Description: IntSet class definition

*********************************************************************/
//IntSet.hpp

#ifndef INTSET_HPP
#define INTSET_HPP

//#include <string>

using namespace std;

//declare the Item class
class IntSet
{
private:
	//dynamically allocated array of items
	int intSetArray[];

	//pointer to the array


	//size of the array
	int arraySize;

	//number of values in IntSet
	int intSetSize;

public:
	//default constructor
	IntSet();

	//deconstructor
	~IntSet();

	//functions
};
#endif