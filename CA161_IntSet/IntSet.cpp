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
	int arraySize = 10;
	int intSetSize = 0;

	intSetArray[0] = 5;  //for testing.
	cout << "Default constructor has run. Here's the results from within the constructor:" << endl;
	cout << "intSetArray points to address: " << &intSetArray[0] << endl;
	cout << "value stored at position 0 of intSetArray: " << intSetArray[0] << endl;
	cout << "arraySize: " << arraySize << endl;
	cout << "intSetSize: " << intSetSize << endl;
	cout << "value in intSetArray[0]: " << intSetArray[0] << endl;
	cout << "Leaving the default constructor now." << endl;
	system("pause");  //for testing
};

// constructor with paramaters
IntSet::IntSet(int size)
{
	int* intSetArray;
	intSetArray = new int[size];
	//int* arrayPointer = intSetArray;
	int arraySize = size;
	int intSetSize = 0;
}

IntSet::~IntSet()
{
	//delete[] intSetArray;
	//*intSetArray = NULL;

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
	{
		return true;
	}
	else
	{
		return false;
	}
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
	bool success = false;

	if (intSetSize != 0) //test for an empty intSetSize
	{
		cout << "Array is not empty..." << endl;
		if (arraySize == (intSetSize - 1))  //test if the array is full
		{
			//add valueIn when the array is full
			//create a new array twice as large
			IntSet newIntSet = IntSet(2 * arraySize);

			//copy the old array values into the new array
			for (int i = 0; i < intSetSize; i++)
			{
				newIntSet.intSetArray[i] = intSetArray[i];
			}
			//add the new value to the new array
			newIntSet.intSetSize = intSetSize + 1; //set intSetSize on the new array
			newIntSet.intSetArray[newIntSet.intSetSize] = valueIn;

			//delete the old array
			/*delete[] intSetArray;
			intSetArray = *newIntSet.intSetArray;*/

			//redirect the data member pointer to the new array
			//*intSetArray = newIntSet.intSetArray;
			success = true;
		}
		else
		{
			//add valueIn when the array has open space
			intSetArray[intSetSize] = valueIn;
			intSetSize++;  //increment intSetSize
			success = true;
		}
	}
	else
	{
		cout << "Array is empty! - Now trying to add value to array." << endl;
		system("pause");
		//add valueIn when the array is empty
		//place valueIn to the next position in the array
		intSetArray[0] = valueIn;
		intSetSize++;  //increment intSetSize
		return true;
	}
	return success;
}

bool IntSet::remove(int valueIn)
{
	//test for empty intSetSize
	if (intSetSize == 0)
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
	return true;
}

bool IntSet::removeDifferent(const int* setIn)
{
	return true;
}

bool IntSet::removeSame(const int* setIn)
{
	return true;
}

//test methods on new object created
//cout << "program is back in main." << endl;
//cout << "Returned from isEmpty function: " << testIntSet.isEmpty() << endl;
//cout << "Returned from size method: " << testIntSet.size() << endl;
//cout << "Returned from contains method test: " << testIntSet.contains(5) << endl;
//cout << "value in intSetArray[0]: " << testIntSet.intSetArray[0] << endl;
//system("pause");