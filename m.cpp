/*Write a recursive function recursiveMinimum that takes an integer array, a starting subscript and an
ending subscript as arguments, and returns the smallest element of the array. The function should stop
processing and return when the starting subscript equals the ending subscript. */
#include <iostream>
using namespace std;
int minimum(int A[], int n)
{
    if (n == 1)
        return A[0];
    return min(A[n-1], minimum(A, n-1));
}
int main()
{
    int A[]={2,3,4,53};
    int n = sizeof(A)/sizeof(A[0]);
    cout <<  minimum(A, n);
    return 0;
}
