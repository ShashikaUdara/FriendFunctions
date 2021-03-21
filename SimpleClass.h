#ifndef SIMPLECALSS_H
#define SIMPLECALSS_H

#include <iostream>

using namespace std;

class SimpleClass
{
public:
	SimpleClass() {}
	~SimpleClass() {}
	void FuncPublic();

	// here goes the friend function
	friend void testFriendFunc(SimpleClass simpleC);

	string str1 = "This is a public variable...";

protected:
	void funcProtected();

	string str2 = "This is a protected variable...";

private:
	void funcPrivate();

	string str3 = "This is a private variable...";
};

#endif