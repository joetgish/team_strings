/*
*******************************************************************************************************************************
Name: Samuel Sanchez
Date: 9October 2015
Description: Implements a series of string functions
*******************************************************************************************************************************
*/

#include <iostream> // cin, cout
#include <string> // strings
#include <cassert> // assert() 
#include <cctype> // isspace()
using namespace std;

string initials(string strA); // receives a string comprising first, middle and last name and returns the initials of each name, capitalized
int countAlpha(string strA); // receives a string comprising a sentence, counts and returns the number of alphabetical 
int countWords(string strA); // receives a string comprising a sentence, counts and returns the number of words in a the sentence.
bool isPalindrome(string strA); // receives a string and returns true if the string is a palindrome

int main()
{     
    string nameOne("Samuel J Sanchez"); // passes
    string nameTwo("Johnny B. Goode"); // passes
    string nameThree("Dwight D. Eisenhower"); // passes
    
    string sentenceOne("My name is Indigo Montoya...");
    string sentenceTwo("Red leader 1 this is-M1k3");
    string sentenceThree("SPACCCCCCCCEEEEEEEEEEEE");
    
    string palindromeOne("racecar"); // passes
    string palindromeTwo("tacocat"); // passes
    string palindromeThree("123"); // passes
    string palindromeFour("a");  // fails
    
    assert(initials(nameOne) == "SJS");
    cout << "Initials for " << nameOne << ": " << initials(nameOne) << endl;
    assert(initials(nameTwo) == "JBG");
    cout << "Initials for " << nameTwo << ": " << initials(nameTwo) << endl;
    assert(initials(nameThree) == "DJ");
    cout << "Initials for " << nameThree << ": " << initials(nameThree) << endl;
    assert(countAlpha("abc123") == 3);
    cout << "Number of letters: " << countAlpha("abc123") << endl;
    assert(countAlpha("12341A214---") == 1);
    cout << "Number of letters: " << countAlpha("12341A214---") << endl;
    assert(countWords(sentenceOne) == 5);
    cout << "Word Count: "<< countWords(sentenceOne)<< endl;
    assert(countWords(sentenceTwo) == 5 );
    cout << "Word Count: " <<countWords(sentenceTwo)<< endl;
    assert(countWords(sentenceThree) == 1 );
    cout << "Word Count: "<< countWords(sentenceThree)<< endl;
    assert(isPalindrome(palindromeOne) == true);
    cout << "The word \""<< palindromeOne << "\" is "<< isPalindrome(palindromeOne)<< endl;
    assert(isPalindrome(palindromeTwo) == true);
    cout << "The word \""<< palindromeTwo << "\" is " << isPalindrome(palindromeTwo)<< endl;
    assert(isPalindrome(palindromeThree) == false);
    cout << "The word \""<< palindromeThree << "\" is " << isPalindrome(palindromeThree)<< endl;
    assert(isPalindrome(palindromeFour) == true);
    cout << "The word \""<< palindromeFour << "\" is " << isPalindrome(palindromeFour)<< endl;

    return 0;
}

string initials(string strA)
{
    string strCopy = strA, initials, word;
 
    for (int i = 0; i < strA.length(); i++)
    {
        int whiteSpace = strCopy.find(' ');
        word = strCopy.substr(0, whiteSpace);
        strCopy = strCopy.erase(0, whiteSpace + 1);
            
            for(int j = 0; j < word.length(); j++)
            {
                word = toupper(word[0]);
            }
            initials += word;
        
        if (initials.length() > 2)
        {
            break;
        }
    }
    return initials;
}

int countAlpha(string strA)
{
    int numberOfLetters = 0;
    for(int i = 0; i < strA.length(); i++)
    {
        if(isalpha(strA[i]))
        {
            numberOfLetters++;
        }
    }
    return numberOfLetters;
}

int countWords(string strA)
{
    string strCopy = strA, word, controlString;
    int wordCount = 0, spaceCount = 0;
    for (int j = 0; j < strA.length(); j++)
    {
         if(isspace(strA[j]))
        {
             spaceCount++;
        }
    }    
    for (int i = 0; i < strA.length(); i++)
    {
        int whiteSpace = strCopy.find(' ');
        word = strCopy.substr(0, whiteSpace);
        wordCount++;
        strCopy = strCopy.erase(0, whiteSpace + 1);
        if(wordCount > spaceCount)
        {
            break;
        }
    }    
    return wordCount;
}

bool isPalindrome(string strA)
{
    string frontwards, backwards;
    for(int i = 0; i < strA.length(); i++)
    {
        frontwards  += strA[i];      
    }
    for(int i = strA.length() - 1; i > -1; i--)
    {
        backwards  += strA[i];      
    }
   
    if(backwards == frontwards)
        return true;
    else
        return false;
}
