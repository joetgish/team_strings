/*
Name: Chanel Aquino
Date Created: 8 October 2015
Description: teamStrings assignment on GitHub
*/

#include <iostream>
#include <string>
#include <cassert> 
using namespace std;

string initials(string strA);
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST

int main()
{
    string fullName = "Maria Sera Turing";
    assert(initials(fullName) == "MST");
    
    return 0;
    
}   // main()

//******************************
string initials(string strA)
{
    string result;  // create an empty string
    
    // traverse through each character in strA
    for(int ix = 0; ix < strA.length(); ix++)
    {
        // if the character at index [ix] is a capital letter
        if (strA[ix] >= 'A' && strA[ix] <= 'Z')
        {
            // append the capital letter to the string result
            result += strA[ix];
        }
    }
    
    return result;
}   // initials()
