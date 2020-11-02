*A right triangle can have sides that are all integers. A set of three integer values for the sides of a right
triangle is called a Pythagorean triple. These three sides must satisfy the relationship that the sum of
the squares of two of the sides is equal to the square of the hypotenuse. Find all Pythagorean triples for
side1, side2 and hypotenuse all no larger than 500. Use a triple-nested for loop that tries all possibilities.
This is an example of brute force computing. You’ll learn in more advanced computer science courses
that there are many interesting problems for which there’s no known algorithmic approach other than
sheer brute force. */
#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;
int main(int argc, char** argv)
{
    int side1,side2,hypotenuse;
	cout << "pythagorean triples" << endl;
	for(int side1 = 1; side1 < 500; side1 ++)
	{
		for(int side2 = 1; side2 < 500; side2 ++)
		{
			for(int hypotenuse = 1; hypotenuse < 500; hypotenuse ++)
			{
				//take a range between 1 to 500 as a result
				if(pow(side1,2) + pow(side2,2) == pow(hypotenuse,2) && pow(hypotenuse,2) <= 500)
				{
					cout << side1 << " + " << side2  << " = "  << hypotenuse << endl;

				}
			}
		}
	}
	return 0;
}
