#include "String.h"
#include <iostream>

int main()
{
	String s1("Hello");
	String s2("World");
	String s3;

	s3 = s1 + s2;		// ���� �����ڳ� ���� ������!

	s3.Print();

	String s4("Oh, ");

	s4 += s3;
	s4.Print();

	s4[1] = 'o';
	s4.Print();
	char c = s4[6];
	std::cout << c << std::endl;

	std::cout << s3;
}