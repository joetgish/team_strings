// Name: Noe Lomeli
// Date: October 8, 2015
// Project: Team Strings
#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
using namespace std;


//
// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// // Name your C++ file: lastName_teamString.cpp
//
//

string initials(string strA);
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST

int countAlpha(string strA);
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 

int countWords(string strA);
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.

//bool isPalindrome(string strA)
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome
int main()
{
    
    //assert(initials("maria sera turing") == "MST");
    //assert(initials("andrea Marcela gomez") == "AMG");
    //assert(initials("Ben Andrew Lopez") == "BAL");
    
    //assert(countAlpha("Ben Andrew 234325#$@5! ") == 9);
    //assert(countAlpha("ABCabc123!@#") == 6);
    //assert(countAlpha("234%^&*123!@#") == 0);
    
    assert(countWords("one two three four") == 4);
    assert(countWords("one two") == 2);
    assert(countWords("one") == 1);
    cout << "It works!"<< endl;

    return 0;
}//main
string initials(string strA)
{
    int i = 0;
    string initials = strA.substr(0,1);
    initials = toupper(initials[0]);
    for(int ix(1); ix < strA.length(); ix++)
    {            
        if (strA[ix] == ' ')
        {                      
            initials += toupper(strA[ix+1]);                        
        }//if       
    }//for
    return initials;
}//string initials
int countAlpha(string strA)
{
    int sum = 0;
    for(int ix(0); ix < strA.length(); ix++)
    {
        if((strA[ix] >= 65) && (strA[ix] <= 90) || (strA[ix] >= 97) &&(strA[ix] <= 122))
        {
            sum ++;
        }//if

    }//for
    return sum;
}//countAlpha
int countWords(string strA)
{
    int count = 0;
    for (int ix(0); ix < strA.length(); ix++)
    {
        if (strA[ix] == ' ')
        {
            count ++;
        }//if
    
    }//for
    return count + 1;
}//countWords
