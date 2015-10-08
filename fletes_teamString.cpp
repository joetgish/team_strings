//Miguel Fletes
//10/08/15
//git HW2

// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// // Name your C++ file: lastName_teamString.cpp
//
//
#include<iostream>
#include<string>

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
    //cout << initials("Miguel Alejandro Fletes") << endl;
    cout << countAlpha("H3ll0 h0w are you.") << endl;
    
    return 0;
}

string initials(string strA)
{
    string initial;
    string word;
    
    for(int i = 0; i <= strA.length(); i++)
    {   
        if(strA[i] != ' ')
        {
            word += strA[i];
            //initial += word[0];
        }
        if((strA[i] == ' ') || (i == strA.length()))
        {
            initial += word[0];
            word = "";     
        }
    }
    return initial;
}

int countAlpha(string strA)
{
    int letters = 0;
    string word;
    
    for(int i = 0; i <= strA.length(); i++)
    {   
        if(strA[i] != ' ')
        {
            word += strA[i];
            //cout << word;
        }
        if((strA[i] == ' ') || (i == strA.length()))
        {
            if(((word[i] >= 'a') && (word[i] <= 'z')) || ((word[i] >= 'A') && (word[i] <= 'Z')))
            {
                letters += 1;
                word = "";
            }
            word = "";
        }
    }
    return letters;
}

