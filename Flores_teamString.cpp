//Name: Sandra Flores
//Date: Oct. 08, 2015
//Description: team string coding assignment 

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main()
{
    assert(initials("Sandra Flores") == "SF");
    assert(initials("Nicole isidro hipolito") == "NIH");
    
    assert(countAlpha("Sandra") == 6);
    assert(countAlpha("g34") == 1);
    
    assert(countWords("My name is Sandra") == 4);
    assert(countWords("I like chicken") == 3);
    
    assert(isPalindrome("racecar") == 1);
    assert(isPalindrome("moon") == 0);
    
    return 0;
}

string initials(string strA)
{
    string strB;
    char newstring = strA.at(0);
   
    for(int i = 0; i < strA.length(); i++)
    {
        
        if(strA.at(i) == ' ')
        {
            strB += toupper(strA[i + 1]);
        }
    }
    return newstring + strB;   
}

int countAlpha(string strA)
{
    int count = 0;
    for(int i = 0; i < strA.length(); i++)
    {
        if(((strA[i] > 64)&&(strA[i] < 91)) || ((strA[i] > 96)&&(strA[i] < 123)))
        {
            count ++;
        } 
    }
    return count;
}

int countWords(string strA)
{
    int count = 1;
    for(int i = 0; i < strA.length(); i++)
    {
        if(strA[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

bool isPalindrome(string strA)
{
    string strB;
    for(int i = strA.length() -1 ;i >= 0; i--)
    {
        strB += strA[i];
    }
    if(strA == strB)
    {
        return true;
    }
    else
    {
        return false;
    }
}
