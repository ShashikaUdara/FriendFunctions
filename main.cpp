#include <iostream>
#include "SimpleClass.h"

using namespace std;

int main()
{
	// This is a simple demonstration of member fuctions in C++.
	// The special thing in friend function is the ability to access all the protected and private variables 
	// of the class which declared as the friend. Hence this approch expose hidden data of the implementation 
	// it reduce the encapsulation.

	SimpleClass sc;

	cout<<"\nThis is the main function..."<<endl;
	sc.FuncPublic();
	// sc.funcProtected(); // This Protected function can't be access through main function.
	// sc.funcPrivate(); // This Private function can't be access through main function.

	cout<<sc.str1<<endl;
	// cout<<sc.str2<<endl; // This protected variable cannot be accessed in through them main function
	// cout<<sc.str3<<endl; // This private variable cannot be accessed in through them main function

	// calling the friend function
	testFriendFunc(sc);

	return 0;
}