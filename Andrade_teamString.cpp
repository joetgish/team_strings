//Israel Andrade
//Date: 10/08/2015

//string initials(string strA)
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST

//int countAlpha(string strA)
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 

//int countWords(string strA)
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.

//bool isPalindrome(string strA)
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome

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
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("mary rose villas") == "MRV");
    assert(initials("Israel Andrade Mancha negra") == "IAMN");
    
    assert(countAlpha("Maria Sera Turing") == 15);
    assert(countAlpha("Hello World") == 10);
    assert(countAlpha("Lenovo!") == 6);
    
    assert(countWords("Touchdown") == 1);
    assert(countWords("STEELERS Will go to the playoffs") == 6);
    assert(countWords("Word") == 1);
    
    assert((isPalindrome("racecar") == true));
    assert((isPalindrome("redrootputuptoorder")) == true);
    assert((isPalindrome("rotator")) == true);
    
    
    
    return 0;   
}

string initials(string strA)
{
    int index = strA.find(" ");
    string newWord = strA.substr(0, index);
    string initials;
    
    while(strA.length() > 0)
    {
        initials += toupper(newWord[0]);
        strA = strA.erase(0, index);
        if(strA[0] == ' ')
        {
            strA = strA.erase(0, 1);
        }
        index = strA.find(" ");
        newWord = strA.substr(0, index);
    }
    return initials;
}

int countAlpha(string strA)
{
    int counter = 0;
    
    for(int i = 0; i < strA.length(); i++)
    {
        
        if((strA[i] >= 65 && strA[i] <= 90) || (strA[i] >= 97 && strA[i] <= 122))
        {
            counter ++;
        }
    }
    return counter;
}

int countWords(string strA)
{

    if(strA.length() == 1 && strA[0] != ' ')
    {
        return 1;
    }
    int index = strA.find(" ");
    string newWord = strA.substr(0, index);
    int countChars = 0;
    int countWords = 0;
    
    while(strA.length() > 0)
    {
        strA = strA.erase(0, index);
        
        for(int i = 0; i < newWord.length(); i++)
        {
           if((strA[i] >= 65 && strA[i] <= 90) || (strA[i] >= 97 && strA[i] <= 122))
            {
                countChars++;
            }
        }
        
        if(strA[0] == ' ')
        {
            strA = strA.erase(0, 1);
        }
        
        index = strA.find(" ");
        newWord = strA.substr(0, index);
        
        if(countChars > 0)
        {
            countWords++;
        }
    }
    
    return countWords;
}

bool isPalindrome(string strA)
{
    string newVariable;
    int counter = 0;
    
    for(int i = strA.length() -1; i >= 0; i--)
    {
        newVariable += strA[i];
    }

    if(strA == newVariable)
    {
        return true;
    }
    else
    {
        return false;
    }
}
