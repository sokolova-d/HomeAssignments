/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number two. Task b.
*/

#include "calc.h"

#include <iostream>
#include <sstream>

double Calculate(const std::string input) {
    double* stack = new double[100];
    double* top = stack; // making pointer
	
	std::stringstream stream(input);
	std::string token;

    while (stream >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            // operand recording
            double b = *top;
            top--;
            double a = *top;
            double result == 0.0

            // processing operations with numbers
            if (token == "+") result = a+b;
            else if (token == "-") result = a-b;
            else if (token == "*") result = a*b;
            else if (token == "/") result = a/b;

            // write the result back in stack
            *top = result;
        }
        else {
            top++
            *top = std::stod(token);
        }
    }

    double result = *top;
    delete[] stack;
    return result;
}
