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
#include<cassert>

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
    //cout << countAlpha("H3ll0 h0w are you.") << endl;
    //cout << countWords("My name is Miguel Fletes.") << endl;
    //cout << isPalindrome("racecar") << endl;
    
    assert(initials("Miguel Alejandro Fletes") == "MAF");
    assert(initials("Mariselda Peralez") == "MP");
    assert(initials("Sarah Villegas") == "SV");
    
    assert(countAlpha("H3ll0 h0w are you.") == 11);
    assert(countAlpha("words are words.") == 13);
    assert(countAlpha("English class is fun.") == 17);
    
    assert(countWords("My name is Miguel Fletes.") == 5);
    assert(countWords("My all time favorite color is green.") == 7);
    assert(countWords("what kind of car is your favorite.") == 7);
    
    assert(isPalindrome("racecar") == true);
    assert(isPalindrome("bob") == true);
    assert(isPalindrome("hello") == false);
    
    return 0;
}

string initials(string strA)
{
    string initial;
    string word;
    
    for(int i = 0; i <= strA.length(); i++)//goes through string letter by letter
    {   
        if(strA[i] != ' ')
        {//if index is not a space
            word += strA[i];// save index into string word
            //initial += word[0];
        }
        if((strA[i] == ' ') || (i == strA.length()))//if index is a space or the lenght of string
        {
            initial += word[0];//add the letter at index 0 to string initiall
            word = "";//resset word to an empty string
        }
    }
    return initial;
}

int countAlpha(string strA)
{
    int letters = 0;
    
    for(int i = 0; i <= strA.length(); i++)//goes through string letter by letter
    { //if the index of strA at i is a letter
        if(((strA[i] >= 'a') && (strA[i] <= 'z')) || ((strA[i] >= 'A') && (strA[i] <= 'Z')))
            {
                letters += 1;// add 1 to letters
            }
    }
    return letters;
}

int countWords(string strA)
{
     int words = 0;
    
    for(int i = 0; i <= strA.length(); i++)//goes through string letter by letter
    { 
        if((strA[i] == ' ') || (i == strA.length()))//if index is a space or the lenght of string
        {
            words += 1;// add 1 to int words  
        }
    }
    return words;

}
bool isPalindrome(string strA)
{
    bool result;
    string pal;//palindrome
    for(int i = strA.length() - 1; i >= 0; i--)//goes through string letter by letter BUT from the last letter to the first
    { 
        pal += strA[i];//add the letter at index i to string pal
    }
    //cout << pal;
    if(pal == strA)//if the string pal is equal to the original string strA
    {
        result = true;//the word is a palindrome
    }
    else
    {
        result = false;//the word is not a palindrome
    }
    return result;
}
