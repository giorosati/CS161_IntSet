/*********************************************************************
** Author: Giovanni Rosati
** Date: 2015-11-23
** Description: Function definitions for IntSet class

*********************************************************************/
//IntSet.cpp

#include "IntSet.hpp"
#include <iostream>

using namespace std;

// default constructor
IntSet::IntSet()
{
	int* intSetArray = new int[10];
	int* arrayPointer = intSetArray;
	int arraySize = 10;
	int intSetSize = 0;
};

// constructor with paramaters
IntSet::IntSet(int size)
{
	int* intSetArray = new int[size];
	int* arrayPointer = intSetArray;
	int arraySize = size;
	int intSetSize = 0;
}

IntSet::~IntSet()
{
	delete[] intSetArray;
	*intSetArray = NULL;

	cout << "Deconstructor has run." << endl;
	system("pause");
}

int IntSet::size()
{
	return intSetSize;
}

bool IntSet::isEmpty()
{
	if (intSetSize)
		return true;
	else
		return false;
}

bool IntSet::contains(int testValue)
{
	bool result = false; //initialize result to false

	//test for an empty intSetSize
	if (intSetSize != 0)
	{
		//then test if testValue is already present
		for (int i = 0; i < intSetSize; i++)
		{
			if (intSetArray[i] = testValue)
				bool result = true;
		}
	}
	return result;
}

bool IntSet::add(int valueIn)
{
	//test for an empty intSetSize
	if (intSetSize != 0)
	{
		if (!contains(valueIn))  //test if valueIn is in the array
		{
			if (arraySize == (intSetSize - 1))  //test if the array is full
			{
				//add valueIn when the array is full
				//create a new array twice as large
				//find size of current array
				//create the new array
				//copy the old array values into the new array
				//redirect the data member pointer to the new array
				//delete the old array
			}
			else
			{
				//add valueIn when the array is NOT full
				//place valueIn to the next position in the array
				//increment intSetSize
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}

bool IntSet::remove(int valueIn)
{
	//test for empty intSetSize
	if (intSetSize != 0)
	{
		if (contains(valueIn))
		{
			//find position of valueIn in the array

			//shift each item in the array after the found valuel into the next
			//lower position, overwriting the position determined
		}
		return true;
	}
	else
	{
		return false;
	}
}

bool IntSet::addAll(const int* setIn)
{

}

bool IntSet::removeDifferent(const int* setIn)
{

}

bool IntSet::removeSame(const int* setIn)
{

}