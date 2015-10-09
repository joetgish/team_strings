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
    assert(initials(fullName) == "MST");
    
    string sentence = "Hello! My name is Chanel, and I enjoy programming. Do you?";
    assert(countAlpha(sentence) == 44);
    
    assert(countWords(sentence) == 11);
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

