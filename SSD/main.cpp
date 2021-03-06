// main.cpp : CST116SRS06 Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "IansStdDev.h"
#include "patrickHFile.h"

int main()
{
	// my array
	const int myIntArray[] = { 42, 110, 74, 189, 192, 10, 5, 8, 89, 110, 99, 153, 77, 21, 183, 25, 78, 60, 89 };
	// size of my array
	const size_t myArraySize{ sizeof(myIntArray) / sizeof(myIntArray[0]) };
	// daren's array
	const int darensArray[] = { 48, 69, 8, 12, 32, 78, 11, 23, 96, 13, 7, 3, 5, 9, 19, 25, 5, 73, 6, 49, 64, 77, 16, 14, 1 }; // tbd
	// size of daren's array
	const size_t darensArraySize{ sizeof(darensArray) / sizeof(darensArray[0]) };

	// calcualte SSD using my data and my function
	const double myDataMyFunction{ iansStdDev(myArraySize, myIntArray) };
	// calculate SSD using my data and patricks function
	const double myDataPatricksFunction{ ssd(myArraySize, myIntArray) };
	// calculate SSD using darens data and my function
	const double darensDatatMyFunction{ iansStdDev(darensArraySize, darensArray) };
	// calculate SSD using darens data and patricks function
	const double darensDataPatricksFunction{ ssd(darensArraySize, darensArray) };

	// max delta between results of the two functions
	const double epsilon{ 0.000001 };

	// check to see if the SSD from both functions match (or are close enough)
	const bool myDataMatches{ std::abs(myDataMyFunction - myDataPatricksFunction) < epsilon };
	const bool darensDataMatches{ std::abs(darensDatatMyFunction - darensDataPatricksFunction) < epsilon };

	// spit out the results
	std::cout << myDataMyFunction << "\n";
	std::cout << myDataPatricksFunction << "\n";
	if (myDataMatches)
	{
		std::cout << "PASSED!\n";
	}
	else
	{
		std::cout << "FAILED!\n";
	}
	std::cout << std::endl;
	std::cout << darensDatatMyFunction << "\n";
	std::cout << darensDataPatricksFunction << "\n";
	if (myDataMatches)
	{
		std::cout << "PASSED!\n";
	}
	else
	{
		std::cout << "FAILED\n";
	}
	std::cout << std::endl;

	return 0;
}

