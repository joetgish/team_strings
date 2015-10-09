// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// // Name your C++ file: lastName_teamString.cpp
//
//

string initials(string strA)
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST

int countAlpha(string strA)
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 

int countWords(string strA)
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.

bool isPalindrome(string strA)
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome

// Jesus Perez
// Date: 10/8/2015
// description: program will test various functions
// also the program will be pushed into a repository using git commands

#include<iostream>
#include<string>
#include<cassert>

using namespace std;
int main()
{
    string strA = "name is jesus";
    assert(initials(strA) == "nij");
    
    
    
    
    
    return 0;
    
    
}
string initials(string strA)
{
    string strC ="";
    string word;
    int move = 0;
    for(int i=0; i < strA.length(); i++)
    {   
        //cout << i << endl;
       
        if((strA[i] == strA[0]) && (strA[0]!=' '))
        {
            word = strA.substr(0,1);
            strC =  strC + word;   
        }
   
         if(strA[i] ==' ')
        {
            strC = strC + strA[i+1];
        } 
    }
    
    return strC;
}


