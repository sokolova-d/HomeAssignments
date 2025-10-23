/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number two. Task b.
*/

#include <iostream>
#include <string>
#include "calc.h"

int main() {
    std::cout << "Enter an arithmetic expression:\n";
    std::string in; // read the string
    std::getline(std::cin, in);
	
	double result = Calculate(in);
	std::cout << "Result: " << result <<std::endl; // output the result

    return 0;
}
