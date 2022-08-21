#include "String.h"
#include <iostream>
#include <cstring>

String::String()
{
	mString = new char[EMPTY];
}

String::String(int size)
{
	mString = new char[size];
}

String::String(const char* string)
{
	int length{ 1 };
	const char* temp = string;

	while (*temp != '\0')
	{
		temp++;
		length++;
	}

	mString = new char[EMPTY];

	for (int i = 0; i < length; i++)
	{
		mString[i] = string[i];
	}
}

String::String(const String& from)
{
	// ����� �����Ͱ� �����Ƿ� deep copy �ʿ�

	mString = new char[EMPTY];
	strcpy_s(mString, strlen(from.mString) + 1, from.mString);
}

String::~String()
{
	delete[] mString;
}

String String::operator+ (const String& right)
{
	int length1 = int(strlen(mString)) + 1;
	int length2 = int(strlen(right.mString)) + 1;

	String pt;
	strcpy_s(pt.mString, length1, mString);

	for (int i = 0; i < length2; i++)
	{
		pt.mString[i + length1 - 1] = right.mString[i];
	}

	return pt;
}

String String::operator= (const String& right)
{
	strcpy_s(mString, strlen(right.mString) + 1, right.mString);

	return *this;
}

String String::operator+= (const String& right)
{
	int length1 = int(strlen(mString)) + 1;
	int length2 = int(strlen(right.mString)) + 1;

	for (int i = 0; i < length2; i++)
	{
		mString[i + length1 - 1] = right.mString[i];
	}

	return *this;
}

char& String::operator[] (int index)
{
	return mString[index];
}

void String::Print()
{
	std::cout << mString << std::endl;
}