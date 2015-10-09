//Name:Raquel Figueroa
//Date:8 October 2015
//Description:figueroa_teamString.cpp

#include <iostream>//cin, cout
#include <cassert>//assert
#include <string>//strings
#include <cctype>//toupper

using namespace std;

string initials(string strA);//capitalizes and returns initials

int countAlpha(string strA);//returns total letters in string

int countWords(string strA);//returns total number words in string

bool isPalindrome(string strA);//returns true of string is palindrome

int main()
{
    assert(initials("maria sera turing") == "MST");//passed!
    assert(initials("raquel inez isadora figueroa") == "RIIF");//passed!
    
    assert(countAlpha("Css IS the bEst") == 12);//passed!
    assert(countAlpha("Phone #: 424-7978") == 5);//passed! 
    
    assert(countWords("Please enter your name:") == 4);//passed!
    assert(countWords("Receives a string comprising a sentence") == 6);//passed!
    
    assert(isPalindrome("racecar") == 1);//passed!
    assert(isPalindrome("Hannah") == 1);//passed!
    
    return 0;
}
string initials(string strA)
{
    string result;
    string initials;
    for (int i = 0; i < strA.length(); i++)
    {
        if(i == 0)
        {
            initials = toupper(strA[i]);
            result += initials;
        }
        else if (strA[i] == ' ')
        {
            initials = toupper(strA[i+1]);
            result += initials;
        } 
    }
    return result;  
}//end initials function: returns capitalized initials

int countAlpha(string strA)
{
    int alphaCount(0);
    for (int i = 0; i < strA.length(); i++)
    {
        if ((int(strA[i]) >= 65 && int(strA[i]) <= 90)
             || (int(strA[i]) >= 97 && int(strA[i] <= 122)))
            
            alphaCount++;
            
    }
    return alphaCount;
}//end countAlpha function: returns total number letters in string

int countWords(string strA)
{
    int countSpaces(0), countWords(0);
    
    for (int i = 0; i < strA.length(); i++)
    {
        if (strA[i] == ' ')
            countSpaces++;
    }
    countWords = countSpaces + 1;

}//end countWords function:returns total number words in string

bool isPalindrome(string strA)
{
    string reverseString;
    for (int i = 0; i < strA.length(); i++)
        {
            strA[i] = tolower(strA[i]);
        }
        
    for (int i = strA.length()-1; i >= 0; i--)
    {
        reverseString += strA[i];
    }
    
    if (strA == reverseString)
        return true;
    else
        return false;
}//end isPalindrome function: returns true if string is palindrome
