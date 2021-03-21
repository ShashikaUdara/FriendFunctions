#include "SimpleClass.h"

void testFriendFunc(SimpleClass simpleC)
{
	// lets access all the functions and variables here
	cout<<"\nThis is the Friend function..."<<endl;
	simpleC.FuncPublic();
	simpleC.funcProtected(); // This Protected function can't be access through main function.
	simpleC.funcPrivate(); // This Private function can't be access through main function.

	cout<<simpleC.str1<<endl;
	cout<<simpleC.str2<<endl; // This protected variable cannot be accessed in through them main function
	cout<<simpleC.str3<<endl; // This private variable cannot be accessed in through them main function
}