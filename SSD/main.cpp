// main.cpp : CST116SRS06Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "IansStdDev.h"

int main()
{
	const int myIntArray[] = { 42, 110, 74, 189, 192, 10, 5, 8, 89, 110, 99, 153, 77, 21, 183, 25, 78, 60, 89 };
	const size_t myArraySize{ sizeof(myIntArray) / sizeof(myIntArray[0]) };
	const int darensArray[] = { 0 }; // tbd
	const size_t darensArraySize{ sizeof(darensArray) / sizeof(darensArray[0]) };

	std::cout << "My Data and My Function             = " << iansStdDev(myArraySize, myIntArray) << std::endl;
	std::cout << "My Data and Patrick's Function      = " << std::endl;
	std::cout << "Daren's Data and My Function        = " << iansStdDev(darensArraySize, darensArray) << std::endl;
	std::cout << "Daren's Data and Patrick's Function = " << std::endl;

	return 0;
}

