/*********************************************************************
** Author: Giovanni Rosati
** Date: 2015-11-23
** Description: Main function for testing only

*********************************************************************/
//IntSetMain.cpp

#include "IntSet.hpp"
#include <iostream>
using namespace std;

int main()
{
	//create a default Object
	IntSet testIntSet;

	//test methods on new object created
	cout << "program is back in main." << endl;
	system("pause");
	bool empty = testIntSet.isEmpty();
	cout << "Returned from isEmpty function: " << empty << endl;
	/*cout << "Returned from size method: " << testIntSet.size() << endl;
	cout << "Returned from contains method test: " << testIntSet.contains(5) << endl;*/
	//	cout << "value in intSetArray[0]: " << testIntSet.intSetArray[0] << endl;
	system("pause");

	//add ints to the test object
	testIntSet.add(3);
	testIntSet.add(8);
	testIntSet.add(9);

	//test additions
	cout << "Value at position 0: " << testIntSet.intSetArray[0] << endl;

	system("pause");

	return 0;
}