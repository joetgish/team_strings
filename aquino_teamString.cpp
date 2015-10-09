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

int countAlpha(string strA);
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 

int countWords(string strA);
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.



int main()
{
    string fullName = "Maria Sera Turing";
    cout
        << "\nFull Name: " << fullName << endl
        << "Initials: " << initials(fullName) << endl;
    
    
    string sentence = "Hello! I attend Hartnell College as a CSin3 scholar. Do you like programming?";
    cout   
        << "\tSentence: " << sentence << endl
        << "\tLetter Count: " << countAlpha(sentence) << endl
        << "\tWord Count: " << countWords(sentence) << endl;
        
    
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

//******************************
int countAlpha(string strA)
{
    strA += ' ';    // append a whitespace after string strA
    int result = 0;  // create an empty string
    
    // traverse through each character in strA
    for(int ix = 0; ix < strA.length(); ix++)
    {
        // if the character at [ix] is an alphabetical character
        if ((strA[ix] >= 'A' && strA[ix] <= 'Z') || (strA[ix] >= 'a' && strA[ix] <= 'z'))
        {
           result++;    // increment result for every alphabetical character 
        }
    } 
    
    return result;
}   // countAlpha()

//******************************
int countWords(string strA)
{
    strA += ' ';    // append a whitespace after string strA
    int result = 0;  // create an empty string
    string word;
    
    // traverse through each character in strA
    int ix = 0;
    while(ix < strA.length())
    {
        
        word = strA.substr(ix, strA.find(' ', ix) );
        /*  divide strA into words (ie., substrings)
            that start at the current index [ix]
            and have a length equivalent to the index 
            where the upcoming whitespace is located   */
            
        ix = strA.find(' ', ix) + 1;    // re-assign [ix] to be the value after the whitespace
        result++;   // increment result after each substring is obtained
    }
    
    return result;
}   // countWords()
