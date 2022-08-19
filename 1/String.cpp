#include "String.h"
#include <iostream>
#include <cstring>

String::String(const String& from)
{
	// 멤버에 포인터가 있으므로 deep copy 필요

	mString = new char[EMPTY];
	strcpy_s(mString, strlen(from.mString) + 1, from.mString);
}

void String::Print()
{
	std::cout << mString << std::endl;
}