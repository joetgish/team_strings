//Name : Angel Gonzalez
//Date : 10/8/15
//Description:
// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// Name your C++ file: lastName_teamString.cpp
//

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main()
{

    assert (initials("Maria Sera Turing") == "MST");
    
    assert (countAlpha("Pew die pie") == 9);
    
    assert (countWords("Jo JO HoHo Hehe.") == 4);
    
    assert (isPalindrome("racecar") == true);
    
    return 0;

}

string initials(string strA) //assumes the first, middle and last name have caps in the beginning
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST
{
    string initials;
    int strLength;
    
    strLength = strA.length();
    
    for (int i = 0; i < strLength - 1; i++)
    {
        
        if (strA[i] >= 65 && strA[i] <= 90)
        {
            initials += strA[i];
        }
        
    }
    
    return initials;
}

int countAlpha(string strA)
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 
{
    int numOfLetters = 0;
    int strLength;
    
    strLength = strA.length();
    
    for (int i = 0; i < strLength; i++)
    {
        
        if ( ( strA[i] >= 65 && strA[i] <= 90 ) || ( strA[i] >= 97 && strA[i] <= 122 ) )
        {
            numOfLetters++;
            //cout << numOfLetters << endl; testing the function
        }
        
    }
    
    return numOfLetters;
}




int countWords(string strA)
// receives a string comprising a sentence, counts and returns the number of words in the sentence.
// words are separated by spaces.
{

    
    int numOfWords = 1; //period doesn't count the last word with this method
    int strLength;
    
    strLength = strA.length();
    
    for (int i = 0; i < strLength; i++)
    {
        
        if ( strA[i] == 32 )
        {
            numOfWords++;
            //cout << numOfWords << endl; testing the function
        }
        
    }
    
    return numOfWords;


}

bool isPalindrome(string strA)
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome
{
    string tempStr = strA;
    int strLength;
    int StrIndex2 = strLength - 1; //will start at the maximum index and decrease in index while the other word increases its index
    int i = 0; //first string's index
    strLength = strA.length();
    
    if ((strLength - 1) % 2 == 1) //odd length'd words
    {
           while (i != StrIndex2)
           {
                if (strA[i] == tempStr[StrIndex2])
                {
                    i++;
                    StrIndex2--;
                }
                else
                {
                    return false;
                }
           }
     }
        
     else if ((strLength - 1) % 2 == 0) //even length words
     {
            while (i > strLength/2)
            {
                if (strA[i] == tempStr[StrIndex2])
                {
                    i++;
                    StrIndex2--;
                }
                else
                {
                    return false;
                }
            }
     }//end else if
        
    


}
