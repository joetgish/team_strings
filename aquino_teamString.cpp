/*
Name: Chanel Aquino
Date Created: 8 October 2015
Description: teamStrings assignment on GitHub
*/

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

string removeSpaces(string sequence);



int main()
{
    string fullName = "Maria Sera Turing";
    cout
        << "\nFull Name: " << fullName << endl
        << "Initials: " << initials(fullName) << endl;  // test initials()
    
    
    string sentence = "Hello! I attend Hartnell College as a CSin3 scholar. Do you like programming?";
    cout   
        << "\tSentence: " << sentence << endl
        << "\tLetter Count: " << countAlpha(sentence) << endl   // test countAlpha()
        << "\tWord Count: " << countWords(sentence) << endl;    // test countWords()
    
    string randomLetters = "1a2l3s4k5d6j7f8h9g0", sameWord = "rot a renegade wed a generator";
    cout 
        << "Non-palindrome: " << randomLetters << endl
        << "Should be false: " << boolalpha << isPalindrome(randomLetters) << endl  // test isPalindrome == false
        << "Palindrome: " << sameWord << endl
        << "Should be true: " << boolalpha << isPalindrome(sameWord) << endl;       // test isPalindrome == true
         
    
    return 0;
    
}   // main()

//******************************
string initials(string strA)
{
    string result;  // create an empty string
    
    // traverse through each character in strA
    for(int ix = 0; ix < strA.length(); ix++)
    {
        // if the character at index [ix] is a capital letter
        if (strA[ix] >= 'A' && strA[ix] <= 'Z')
        {
            // append the capital letter to the string result
            result += strA[ix];
        }
    }
    
    return result;
}   // initials()

//******************************
int countAlpha(string strA)
{
    strA += ' ';    // append a whitespace after string strA
    int result = 0;  // create an empty string
    
    // traverse through each character in strA
    for(int ix = 0; ix < strA.length(); ix++)
    {
        // if the character at [ix] is an alphabetical character
        if ((strA[ix] >= 'A' && strA[ix] <= 'Z') || (strA[ix] >= 'a' && strA[ix] <= 'z'))
        {
           result++;    // increment result for every alphabetical character 
        }
    } 
    
    return result;
} // countAlpha()

//******************************
int countWords(string strA)
{
    strA += ' ';    // append a whitespace after string strA
    int result = 0;  // create an empty string
    string word;
    
    // traverse through each character in strA
    int ix = 0;
    while(ix < strA.length())
    {
        
        word = strA.substr(ix, strA.find(' ', ix) );
        /*  divide strA into words (ie., substrings)
            that start at the current index [ix]
            and have a length equivalent to the index 
            where the upcoming whitespace is located   */
            
        ix = strA.find(' ', ix) + 1;    // re-assign [ix] to be the value after the whitespace
        result++;   // increment result after each substring is obtained
    }
    
    return result;
} // countWords()

//******************************
bool isPalindrome(string strA)
{
    strA = removeSpaces(strA);  // remove whitespaces in strA
    
    int start = 0, end = strA.length() - 1;
    
    //  execute while the letter at the start and end of strA are the same
    while( (strA[start] == strA[end]) && (start != end) )
    {
        start++;
        end--;
        /*  increment [start] and decrement [end] 
            so that the loops searches through each
            letter of strA, going inwards of the word   */
        
        return true;
    }
    
    return false;
    /*  if the start and end letters don't match, 
        it is not a palindrome  */
    

} // isPalindrome()

//******************************
string removeSpaces(string sequence)
{
    sequence += ' ';    // add a whitespace at the end of sequence
    
    //  traverse through each character in sequence
    for(int ix = 0; ix < sequence.length(); ix++)
    {
        int space = sequence.find(' ', ix); 
        /*  find the index of the first occurence 
            of a whitespace, starting at index [ix] */
            
        sequence.erase(space, 1);   // erase the substring of size 1, starting at position [space]
        
        ix = space; // re-assign index [ix] to the value of the index where the whitespace was found
    }
    return sequence;

} // removeSpaces()
