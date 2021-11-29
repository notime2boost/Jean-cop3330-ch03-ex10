
 //*  UCF COP3330 Fall 2021 Assignment 5 Solution
 //*  Copyright 2021 Christopher Jean

#include "C:\Users\cjean\Desktop\Cop3330\Cop3330 C++\std_lib_facilities.h"

int main()
{
	string operation;	
	double d1 = 0;
	double d2 = 0;
	double res = 0;

	cout << "Please enter an operation (+, -, *, /, add, minus, mul, div)\n"
        << "followed by two operands\n";

	while (cin >> operation >> d1 >> d2) {

		if (operation == "+" || operation == "add") res = d1 + d2;
		else if (operation == "-" || operation == "minus") res = d1 - d2;
		else if (operation == "*" || operation == "mul") res = d1 * d2;
		else if (operation == "/" || operation == "div") {

			if (d2 == 0)
				operation = "divzero";
			else
				res = d1 / d2;
		}

		else operation = "unknown";
		if (operation == "unknown")
			cout << "I don't know this operator!\n";
		else if (operation == "divzero")
			cout << "No division by zero!\n";
		else
			cout << d1 << ' ' << operation << ' ' << d2 << " = " << res << '\n';
		cout << "Try again\n";
	}

	return 0;
}