//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// ID number - 1318804
//  main.cpp
//	Creating text pop ups in relation to division by 3 or 2
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "utility.h"
#include <iostream>
#include <string>
#include <cmath>

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// First function - Fooey or Bingo
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
using namespace std;
int main (int argc, char *argv[])
{
    ut::OutputLine("Deciphering if divisble by 3 or 2");
    
    ut::OutputLine("Enter numerical value for a");
	long a = ut::GetLong("a");
	ut::OutputLine("\n");

	long radix1 = a;

// Using IF to see if number given is divisble by 2
	
	if(radix1 % 2==0)
	{
	 		 std::cout<< "Fooey!" << std::endl << std::endl;
    }
// Using IF to see if the number given is divisible by ONLY 3
    if (radix1 % 3==0 && radix1 %2==!0)
    {
	   		  std::cout<< "Bingo!" << std::endl << std::endl;
    }
// Using another IF for numbers not divisble by 2 or 3    
    if(radix1 % 2 ==!0 && radix1 % 3 ==!0)
    {
	 		  std::cout<<"Fooey!"<<std::endl << std::endl;
    }

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// Second function - f(x) = y^2x^2 + 13yx^3 - 2x^4
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
	std::cout<<("Computing f(x) = y^2x^2 + 13yx^3 - 2x^4")<<std::endl;

	ut::OutputLine("Enter numerical values for x and y");
	double x = ut::GetDouble("x");
	double y = ut::GetDouble("y");
	ut::OutputLine("\n");
	
	double radix2 = (y*y*x*x) + 13* (y*x*x*x) - 2* (x*x*x*x);
	
	std::cout << "f(x)" << " = " << radix2 << std::endl << std::endl;

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// Third function - reverse string
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    
    std::cout << "" << std::endl;
    
    std::string name;
    std::string word;
    std::cout << "Enter blah blah blah"<<std::endl;
    std::getline(std::cin,name);

    
    std::cout << "Enter any string of characters" << std::endl;
    std::getline(std::cin,word);
    
// Where rbegin reverses the beginning of the string and rend reverses the end    
    
    word = string(word.rbegin(),word.rend());
    std::cout << "" << std::endl;
    std::cout << "The reverse of the string is " << word << std::endl;
    
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// Fourth function - Nth Characters
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
    
	std::cout << "" << std::endl;

	std::string input;
	std::cout << "Enter a string" << std::endl;
	std::getline(std::cin, input);
	
	std::cout << "" << std::endl;
	
	std::cout << "Enter a location parameter N" << std::endl;
	long N = ut::GetLong("N");
	int size = input.size();
	std::string newstring;
	
	std::cout << "" << std::endl;
	
	if (N<size)
	{
	   		   newstring.assign(input,N,size);
	   		   input.assign(newstring);
    }
    else std::cout << "Number must be smaller than the string size \n Try again" << std::endl;
    
	std::cout << "The string is now - " << newstring << std::endl;
	
	std::cout << "" << std::endl;
		
    return ut::PauseAndReturn();
}

//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
//	end
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

