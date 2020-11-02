/*A palindrome is a string that is spelled the same way forward and backward. Examples of palindromes
include “radar” and “able was i ere i saw elba.” Write a recursive function testPalindrome that returns true
if a string is a palindrome, and false otherwise. Note that like an array, the square brackets ([]) operator
can be used to iterate through the characters in a string.*/
#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s) {
	if (s.size() <= 1)
		return true;
	else
		if (s.at(0) == s.at(s.size() - 1))
			return isPalindrome(s.substr(1, s.size() - 2));
	return false;
}
int main()
{
	string testStrings[] = {
		"a", "ab", "aaa",  "abc", "abba", "radar", "able was i saw elba", "this is not"
	};
	for(string s : testStrings)
		cout << boolalpha << "\"" << s << "\" is a palindrome: " <<  isPalindrome(s) << endl;

	return 0;
}
