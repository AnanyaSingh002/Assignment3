/*A prime integer is any integer that is evenly divisible only by itself and 1. The Sieve of Eratosthenes is a
method of finding prime numbers. It operates as follows:
a. Create an array with all elements initialized to 1 (true). Array elements with prime sub- scripts
will remain 1. All other array elements will eventually be set to zero. You’ll ignore elements 0
and 1 in this exercise.
b. Starting with array subscript 2, every time an array element is found whose value is 1, loop
through the remainder of the array and set to zero every element whose subscript is a multiple
of the subscript for the element with value 1. For array subscript 2, all elements beyond 2 in the
array that are multiples of 2 will be set to zero (subscripts 4, 6, 8, 10, etc.); for array subscript 3,
all elements beyond 3 in the array that are multiples of 3 will be set to zero (subscripts 6, 9, 12,
15, etc.); and so on.*/
#include <iostream>
using namespace std;

void Array(int primeNumbers[][50]);
void findPrNr(int primeNumbers[][50]);
void printPrimes(int primeNumbers[][50]);

int main()
{
	int primeNumbers[2][50];

	Array(primeNumbers);
	findPrNr(primeNumbers);
	//printPrimes(primeNumbers);
	for (int j = 0; j < 50; j++)
		cout << " " << primeNumbers[0][j];

	return 0;
}


void Array(int primeNumbers[][50])
{
	for (int x = 0; x < 50; x++){
		primeNumbers[0][x] = 1;
		primeNumbers[1][x] = x;
	}
}

void findPrNr(int primeNumbers[][50])
{
	for (int x = 2; x < 49; x++){
	   cout << " x is " << x;
		if (primeNumbers[0][x] == 1){
		int z = primeNumbers[1][x];
		cout << " z = " << z;
	 	for (int y = primeNumbers[1][x]; y <= 50; y += z){
				cout << " y is " << y;
				primeNumbers[0][y + y] = 0;
			}
		}
	}
}

void printPrimes(int primeNumbers[][500])
{
	for (int x = 0; x < 500; x++){
		if (primeNumbers[0][x] == 1)
			cout << primeNumbers[1][x] << " is a prime number" << endl;
	}
}

