// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// // Name your C++ file: lastName_teamString.cpp
//
//

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

// Jesus Perez
// Date: 10/8/2015
// description: program will test various functions
// also the program will be pushed into a repository using git commands

#include<iostream>
#include<string>
#include<cassert>

using namespace std;
string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main()
{
    string strA = "name is jesus";
    assert(initials(strA) == "nij");
    
    string strB;
    strB ="wordsHGh";
    assert(countAlpha(strB) == 8);
    
    string strC;
    strC ="words hello";
    assert(countWords(strC) == 10);
    
    string word = "wow";
    assert(isPalindrome(word) == 1);

    
    
    
    cout <<" IT PASSES" << endl;
    
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
int countAlpha(string strB)
{
    int counter = 0;
    for( int i = 0; i < strB.length(); i++)
    {
        if((strB[i] >= 65) && (strB[i] <= 90))
        {
            counter++;
        }
        if((strB[i] >= 97 ) && (strB[i] <= 120))
        {
            counter++;
        }
    }
    return counter;
}
int countWords(string strA)
{   
    int counter =0;
    for(int i = 0; i<strA.length();i++)
    {
    
    if(!((strA[i]-48 >=0) && (strA[i]-48<= 9)))
        if((strA[i] >=65) && (strA[i] <=90) || (strA[i] >=97) && (strA[i] <=120))
        {
            counter++;
        }
    }
    return counter;
       
}
bool isPalindrome(string strA)
{
    string store, store2;
    bool result = 1;
    for(int i =0; i <strA.length(); i++)
    {
        store = store + strA[i];
       // cout << store << endl;
    }
    for(int i= strA.length()-1;0 <= i;i--)
    {
        store2 = store2 + strA[i];
       // cout << store2 << endl;
    }
    //cout << store << endl;
    //cout << store2 << endl;
    if(store2 == store )
    {
        return true;
    }
    else
    {
        return false;
    }
}


