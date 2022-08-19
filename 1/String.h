#pragma once
#include <iostream>
#include <cstring>

class String
{
private:
	char* mString{};
	const int EMPTY{ 100 };

public:
	String()
	{
		mString = new char[EMPTY];
	}

	String(int size)
	{
		mString = new char[size];
	}

	String(const char* string)
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

	
	String(const String& from);


	~String()
	{
		delete[] mString;
	}

	String operator+ (const String& right)
	{
		int length1 = int(strlen(mString)) + 1;
		int length2 = int(strlen(right.mString)) + 1;

		strcpy_s(mString, length1, mString);

		for (int i = 0; i < length2; i++)
		{
			mString[i + length1 - 1] = right.mString[i];
		}

		return *this;
	}

	String operator= (const String& right)
	{
		strcpy_s(mString, strlen(right.mString) + 1, right.mString);

		return *this;
	}

	String operator+= (const String& right)
	{
		int length1 = int(strlen(mString)) + 1;
		int length2 = int(strlen(right.mString)) + 1;

		String pt;

		strcpy_s(pt.mString, length1, mString);

		for (int i = 0; i < length2; i++)
		{
			pt.mString[i + length1 - 1] = right.mString[i];
		}

		String pt2;
		strcpy_s(pt2.mString, length1 + length2 - 1, pt.mString);

		*this = pt2;
		return pt2;
	}

	void Print();
};

