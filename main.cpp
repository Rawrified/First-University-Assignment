//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// ID number - 1318804
//  main.cpp
//	Creating text pop ups in relation to division by 3 or 2
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "utility.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// First function - Fooey or Bingo
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX 
void function1()
{
	ut::OutputLine("Function 1 - Deciphering if divisble by 3 or 2");
        ut::OutputLine("Enter numerical value for a");
        long a = ut::GetLong("a");
        ut::OutputLine("\n");

        long radix1 = a;

        // If divisible by 3 but not by 2, print Bingo!
	if (radix1 % 3 == 0 && radix1 % 2 != 0)
        {
                std::cout<< "Bingo!" << std::endl;
        }
        // If we've gotten here then we are divisible by 2 and possibly 3. But not just 3, so fooey! 
        else
        {
                std::cout<<"Fooey!"<<std::endl;
        }
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// Second function - f(x) = y^2x^2 + 13yx^3 - 2x^4
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
void function2()
{
	std::cout << "" << std::endl;
        std::cout << "" << std::endl;
	std::cout << "Function 2" << std::endl;

	std::cout<<("Computing f(x) = y^2x^2 + 13yx^3 - 2x^4")<<std::endl;

        ut::OutputLine("Enter numerical values for x and y");
        double x = ut::GetDouble("x");
        double y = ut::GetDouble("y");
        ut::OutputLine("\n");

        double radix2 = (y * y * x * x) + 13 * (y * x * x * x) - 2 * (x * x * x * x);

        std::cout << "f(x)" << " = " << radix2 << std::endl;
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// Third function - reverse string
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
void function3()
{
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Function 3 - reversing a string" << std::endl;

	std::string word;
	std::cout << "Enter a string you wish to be reversed"<<std::endl;
	std::cin.ignore();
	std::getline(std::cin,word);
	// Where rbegin reverses the beginning of the string and rend reverses the end
	word = string(word.rbegin(),word.rend());
	std::cout << "" << std::endl;
	std::cout << "The reverse of the string is " << word << std::endl;
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// Fourth function - Nth Characters
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
void function4()
{
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Function 4 - Finding the Nth, 2Nth, ..., characters" << std::endl;
	std::string input;
	std::cout << "Enter a string" << std::endl;
	std::getline(std::cin, input);

	std::cout << "" << std::endl;

	std::cout << "Enter a location parameter N" << std::endl;
	long N = ut::GetLong("N");
	int size = input.size();

	std::string newstring;
	std::string character;

	int k = 0;

	std::cout << "" << std::endl;

	if (N < size)
	{
		for (int i = N - 1; i <= size; i+=N)
		{
			character.assign(input,i,1);
			newstring.insert(k,character);
			++k;
		}

		input.assign(newstring);
	}

	std::cout << "The string is now - " << newstring << std::endl;
	std::cout << "" << std::endl;
}

int main (int argc, char *argv[])
{
	// Call the first function:
	function1();

	// Call the second function:
	function2();

	// Call the third function:
	function3();

	// Call the final function:
	function4();
	
	return ut::PauseAndReturn();
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	end
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

