#include "String.h"
#include <iostream>
#include <cstring>

String::String(const String& from)
{
	// ����� �����Ͱ� �����Ƿ� deep copy �ʿ�

	mString = new char[EMPTY];
	strcpy_s(mString, strlen(from.mString) + 1, from.mString);
}

void String::Print()
{
	std::cout << mString << std::endl;
}