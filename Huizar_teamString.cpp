// Name: Carlos Huizar Valenzuela
// Date: 08 Oct 2015
// GitHub Assignments
//
#include <iostream>
#include <cassert>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main()
{
    string fullName;
    
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("Carlos Huizar Valenzuela") == "CHV");
    assert(initials("Maura White") == "MW");

    assert(countAlpha("Hello Nerds") == 10);
    assert(countAlpha("I like turtles") == 12);
    assert(countAlpha("Something to say") == 14);

    assert(countWords("Turtles are cool.") == 3);
    assert(countWords("What are those?") == 3);
    assert(countWords("I want to play league.") == 5);
    
    assert(isPalindrome("tacocat") == true);
    assert(isPalindrome("racecar") == true);
    assert(isPalindrome("turtle") == false);


}

string initials(string strA)
{
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST
    
    string inits;
    string spaceBlock;
    spaceBlock = " ";
    strA.insert(0, spaceBlock);
    for(int pos = 0; pos < strA.length(); pos++)
    {
       
        if(( strA[pos -1] == ' ') && 
        (((strA[pos] >= 'a') && (strA[pos] <='z')) || 
        ((strA[pos] >= 'A') && (strA[pos] <='Z'))))
        {
           
            inits += toupper(strA[pos]);
        
        } 
        
    }
    return inits;

}
int countAlpha(string strA)
{
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters.

    int letterCount = 0;


    for(int pos = 0; pos < strA.length(); pos++)
    {
           
            if(((strA[pos] >= 'a') && (strA[pos] <='z')) || 
            ((strA[pos] >= 'A') && (strA[pos] <='Z')))
            {
                letterCount++;   
            }    

    }
    return letterCount;

}
int countWords(string strA)
{
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.
    
    int wordCount = 0;
    string spaceBlock;
    spaceBlock = " ";
    strA.insert(0, spaceBlock);
    for(int pos = 0; pos < strA.length(); pos++)
    {
       
        if( strA[pos] == ' ') 
        {
            wordCount++;
        }
    }
    return wordCount;
}

bool isPalindrome(string strA)
{
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome
    for(int pos = 0; pos < strA.length(); pos++)
    {
       
        if( strA[pos] == strA[strA.length() -pos - 1]) 
        {
            return true;
        }
        else 
        {
            return false;
        }
        
        
    }
    
   
}
