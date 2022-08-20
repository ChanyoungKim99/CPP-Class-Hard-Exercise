#pragma once
#include <iostream>
#include <cstring>

class String
{
private:
	char* mString{};
	const int EMPTY{ 100 };

public:
	String();
	String(int size);
	String(const char* string);
	String(const String& from);
	~String();

	String operator+ (const String& right);
	String operator= (const String& right);
	String operator+= (const String& right);
	char& operator[] (int index);

	friend std::ostream& operator << (std::ostream& os, const String& right)
	{
		os << right.mString;
		return os;
	};
	void Print();
};

