/*********************************************************************
** Author: Giovanni Rosati
** Date: 2015-1123
** Description: IntSet class definition

*********************************************************************/
//IntSet.hpp

#ifndef INTSET_HPP
#define INTSET_HPP

using namespace std;

//declare the Item class
class IntSet
{
private:

	//pointer to the array
	int*intSetArray = new int[10];

	//size of the array
	int arraySize;

	//number of values in IntSet
	int intSetSize;

public:

	//default constructor
	IntSet();

	//constructor with a paramenter
	IntSet(int);

	//deconstructor
	~IntSet();

	//functions
	int size();
	bool isEmpty();
	bool contains(int);
	bool add(int);
	bool remove(int);
	bool addAll(const int *IntSet);
	bool removeDifferent(const int *IntSet);
	bool removeSame(const int *IntSet);
};
#endif