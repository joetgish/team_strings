//Maria Chombo 
//9 October 2015
//Description: The given functions must run, with asserts

#include <iostream>
#include <string>
#include <cassert>
using namespace std;
 
string initials(string strA);
bool isPalindrome(string strA);


int main()
{
    assert(initials("Maria Nohemi Chombo") == "MNC");
    assert(initials("Sandra Flores") == "SF");
    assert(initials("Thalia Villalobo") == "TV");
    cout << "Yay it Ran" << endl;
    assert(isPalindrome("ana") == true);





    return 0; 
}
string initials(string strA)
{
    string newString;
    char letter;
    
    for ( int i = 0; i < strA.length(); i++)
    {
        letter = strA.at(i);
        if ( letter >= 65 && letter <= 90)
        {
            newString += letter;
        }
    }
    return newString;        
}

bool isPalindrome(string strA)
{
    string newStrA;
    
    for (int ix = strA.length()-1; ix >= 0; ix--)
    {
        newStrA += strA;
        
        if (newStrA == strA)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}



