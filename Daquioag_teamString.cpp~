// Name: Regie Daquioag
// Date: October 8, 2015
// Project: Team string Assignment

#include <iostream>
#include <cassert>
using namespace std;

string initials(string strA); //A
bool isPalindrome(string strA); //D

int main()
{
    //A
    cout << initials("Regie Cabanting Daquioag") << endl;
    cout << initials("Maria Sera Turing") << endl;
    cout << initials("David James Green") << endl;
    
    //D
    assert(isPalindrome("hi") == false);
    assert(isPalindrome("x") == true);
    assert(isPalindrome("R") == true);
    
    
    
    return 0;
}


//A
string initials(string strA)
{
    string answer;
    int length = strA.length();
    
    for (int ix = 0; ix < length; ix++)
    {
        if (strA[ix] >= 'A' && strA[ix] <= 'Z')
        {
            answer += strA[ix];
        }
    }
    
    return answer;
}


//D
bool isPalindrome(string strA)
{
    int length = strA.length();
    
        if (length == 1)
        {
            return true;
        }
        else 
        {
            return false;
        }   
}

