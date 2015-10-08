// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// // Name your C++ file: lastName_teamString.cpp
//
//

// Name: Nicholas Rosas
// Date: 10-8-15
// Project Description: String Functions

#include <iostream> // input and output
#include <string> // to use strings and string methods
#include <cassert> // to use assert() for testing
#include <cctype> // for toupper()

using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main()
{
    assert( initials("Maria Seera Turing") == "MST" );
    assert( initials("John Arnold Conner") == "JAC" );
    assert( initials("john paul jones") == "JPJ" );
    assert( countAlpha("CSS is fun") == 8 );
    assert( countAlpha("Coding is cool") == 12 );
    assert( countAlpha("0101010100001101") == 0 );
    assert( countWords("Functions are awesome") == 3 );
    assert( countWords("Strings are cool and fun") == 5 );
    assert( countWords("This string is for a test") == 6 );
    assert( isPalindrome("racecar") == true );
    assert( isPalindrome("mom") == true );
    assert( isPalindrome("computer") == false );
    
    
    cout << "Ran to here\n";

    return 0;
}

string initials(string strA)
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST
{
    string result = "";
    int i = 0;
    
    result += toupper(strA.at(0));
    
    i = strA.find(" ", i);
    result += toupper(strA.at(i + 1));
    i = strA.find(" ", i + 1);
    result += toupper(strA.at(i + 1));
    
    
    return result;
}




int countAlpha(string strA)
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 
{
    int counter = 0;
    
    for(int ix = 0; ix < strA.length(); ix++)
    {
        if( ( (strA[ix] >= 'A') && (strA[ix] <= 'Z') ) || ( (strA[ix] >= 'a') && (strA[ix] <= 'z') ) )
        {
            counter++;
        }
    }
    
    return counter;

}

int countWords(string strA)
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.
{
    int wordCount = 0;
    

   for(int start = 0; start != -1; start++)
   {
        start = strA.find(" ", start);
        if(start == -1)
        {
            start--;
        }
        
        wordCount++;
   }
   strA.erase(strA.length() - 1, 1);
   
   return wordCount;
}

bool isPalindrome(string strA)
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome
{
    string backWords = "";
    
    for(int ix = strA.length() - 1; ix >= 0; ix--)
    {
        backWords += strA[ix];
    }
    
    if( strA == backWords)
    {
        return true;
    }
    return false;
}

