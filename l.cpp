*Write a recursive function stringReverse that takes a string and a starting subscript as arguments, prints
the string backward and returns nothing. The function should stop processing and return when the end
of the string is encountered. Note that like an array the square brackets ([]) operator can be used to
iterate through the characters in a string.*/
#include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    if(str.size() == 0)
    {
        return;
    }
    reverse(str.substr(1));
    cout << str[0];
}
int main()
{
    string a = "I am a good girl";
    cout<<a<<endl;
    reverse(a);
    return 0;
}
