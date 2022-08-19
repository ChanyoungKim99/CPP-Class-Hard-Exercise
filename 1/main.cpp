#include "String.h"
#include <iostream>

int main()
{
	String s1("Hello");
	String s2("World");
	String s3;

	s3 = s1 + s2;		// 대입 연산자나 복사 생성자!

	s3.Print();

	String s4("Oh, ");

	s4 += s3;
	s4.Print();

}