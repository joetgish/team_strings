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

int main()
{
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("mary rose villas") == "MRV");
    assert(initials("Israel Andrade Mancha negra") == "IAMN");
    
    assert(countAlpha("Maria Sera Turing") == 15);
    assert(countAlpha("Hello World") == 10);
    assert(countAlpha("Lenovo!") == 6);
    
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
