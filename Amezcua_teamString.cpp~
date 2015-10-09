//Name: Lesley Amezcua
//Date: October 8, 2015
//Description: Implementing funcitons
// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// // Name your C++ file: lastName_teamString.cpp
#include <iostream> //user input
#include<cstring>//strings
#include<string>//strings
#include<cassert>//asserts
#include<cctype>// isspace and isalpha
using namespace std;

string initials(string strA);// receives a string comprising first, middle and last name and returns the initials of each name capitalized
int countAlpha(string strA);// receives a string comprising a sentence, counts and returns the number of alphabetical  
int countWords(string strA);// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
int main()
{
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("John P. Doe") == "JPD");
    assert(initials("Brandon Oscar Brians") == "BOB");
    
    assert(countAlpha("123abcd") == 4);
    assert(countAlpha("a23b") == 2);
    assert(countAlpha("Abc 123 HbI 2 j") == 7);
    
    assert(countWords("Hello Im Bob.") == 3 );
    assert(countWords("Computer science") == 2);
    assert(countWords("12 dogs") == 2);    
    
    return 0;

}
string initials(string strA)
{
    string copy = strA, initials, word;
 
    for (int i = 0; i < strA.length(); i++)
    {
        int space = copy.find(' ');
        word = copy.substr(0, space);
        copy = copy.erase(0, space + 1);
            
            for(int ii = 0; ii < word.length(); ii++)
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
    int num = 0;
    for(int i = 0; i < strA.length(); i++)
    {
        if(isalpha(strA[i]))
        {
            num++;
        }
    }
    return num;
}
int countWords(string strA)
{
    string copy = strA, word;
    int wordCount = 0, spaceCount = 0;
    for (int i = 0; i < strA.length(); i++)
    {
         if(isspace(strA[i]))
        {
             spaceCount++;
        }
    }    
    for (int ii = 0; ii < strA.length(); ii++)
    {
        int space = copy.find(' ');
        word = copy.substr(0, space);
        wordCount++;
        copy = copy.erase(0, space + 1);
        if(wordCount > spaceCount)
        {
            break;
        }
    }    
    return wordCount;
}
