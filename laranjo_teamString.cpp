// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// // Name your C++ file: lastName_teamString.cpp
//
//
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

bool isPalindrome(string strA);
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome

int main()
{
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("Kristine Fernandez Laranjo") == "KFL");
    assert(initials("St. Patrick's Day") == "SPD");
    assert(countAlpha("asdf 31nb 234bc xd") == 10);
    assert(countAlpha("12345b7") == 1);
    assert(countAlpha("0") == 0);
    assert(isPalindrome("nurses run") == true);
    assert(isPalindrome("racecar") == true);
    assert(isPalindrome("c") == true);
    
    return 0;
}

string initials(string strA)
{
    int whitespace;
    string newStr = strA;
    string word;
    string result;

    for (int i = 1; i <= 3; i++) // loops three times
    {
        whitespace = newStr.find(32); // finds whitespace
        word = newStr.substr(0, whitespace); // creates a new word
        newStr = newStr.erase(0, whitespace + 1); // erases that word from the previous string

        result += word.at(0); // adds the letter into result
    }
    
    return result ;   
}

int countAlpha(string strA)
{
    int counter = 0;
    
    for (int i = 0; i < strA.length(); i++) // loops through the string
    {
        if (((strA[i] >= 65) && (strA[i] <= 90)) || ((strA[i] >= 97) && (strA[i] <= 122))) // if at i is a letter
            counter++; // increment the count by one
    }
    
    return counter;
}

bool isPalindrome(string strA)
{
    string backwards;
    for (int i = 0; i < strA.length(); i++) // loops through the string
    {
        if (strA[i] == 32) // if it hits a whitespace
            strA = strA.erase(i, 1); // erases the space from the string
            
        backwards = strA[i] + backwards; // at i insert that char to backwards then add the prior value of backwards
    }
    
    if (backwards == strA)
        return true;
    else
        return false;
}
