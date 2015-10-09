//Name:Diego Medina
//Date:10-8-15
//Description:HW 8 Oct.

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
    
    assert(initials("Maria Sera Turning") == "MST");
    assert(initials("Diego Anthony Medina") == "DAM");
    assert(initials("Jauna La Cubana") == "JLC");  
    
    assert(countAlpha("abc123") == 3);
    assert(countAlpha("a b c d e f g") == 7);
    assert(countAlpha("     123") == 0);     
    
    assert(countWords("a one two") == 3);   
    assert(countWords("one two three four five") == 5);   
    assert(countWords("one") == 1);   
    
    assert(isPalindrome("Racecar") == true);
    assert(isPalindrome("boob") == true);
    assert(isPalindrome("racecars") == false);
    
    
    cout << endl << "Perfect." << endl;      

    return 0;
}

//************************************************************
string initials(string strA)
{
    string finalStr;
    int start;
    
    //first initial
    finalStr += strA[0];
    
    start = strA.find(' ');
    
    //2nd initial
    finalStr += strA[start + 1];
    
    start = strA.find(' ', start + 1);
    
    //3rd initial
    finalStr += strA[start + 1];
    
    
    return finalStr;
    

}

//************************************************************
int countAlpha(string strA)
{
    int count = 0;
    int length = strA.length();
    
    //lower case all letters to make range of comparison smaller
    for(int ix = 0; ix < length; ix++)
    {
        strA[ix] = tolower( strA[ix] );
    }
    
    for(int ix = 0; ix < length; ix++)
    {
        if ( (strA[ix] > 96) && (strA[ix] < 123) )
        {
            count++;
        }
    }
    
    return count;
    
}

//*************************************************************
int countWords(string strA)
{
    int count = 1;
    int words = 0;
    bool loop = true;
    
 
    if (strA.length() <= 0)
    {
        return count;
    }
    

    for(int ix = 0; ix < strA.length(); ix++)
    {
        if( strA[ix] == ' ')
        {
            count++;
        }
    }

    return count;
}

//**************************************************************
bool isPalindrome(string strA)
{
    string newStr;
    int length = strA.length();
    
    //lower case all letters to be able to compare any upper/lower case letters
    for(int ix = 0; ix < length; ix++)
    {
        strA[ix] = tolower( strA[ix] );
    }
    
    //reversing string to compare with original
    for(int ix = length - 1; ix >= 0; ix--)
    {
        newStr += strA[ix];
    } 

    if(strA == newStr)
    {
        return true;
    }
    else
    {
        return false;
    }


}



