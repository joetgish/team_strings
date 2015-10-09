//Name:Thalia Villalobos
//8 October 2015
//Fully implement the functions below, incorporating asserts as appropriate to test.

#include<string> //string
#include<cassert> //assert
#include<iostream> //cin, cout
#include<cctype> //toupper
using namespace std;

string initials(string strA);
//Returns the initials of each name, capitalized

int countAlpha(string strA);
//Returns the number of alphabetical

int countWords(string strA); 
//Returns the number of words in a the sentence.

bool isPalindrome(string strA);
//returns true if the string is a palindrome.

int main()
{
    assert(initials("Thalia Ivette Villalobos") == "TIV");       
    assert(initials("maria Sera turing") == "MST"); 
    assert(initials("juan jose sera") == "JJS"); 
    
    assert(countAlpha("2465") == 0);
    assert(countAlpha("Pink House") == 9);
    assert(countAlpha("Thalia Ivette Villalobos") == 22);
    
    assert(countWords("Pink House") == 2);
    assert(countWords("1215") == 0);
    assert(countWords("Today is Friday!") == 3);
  
    assert(isPalindrome("Anna") == true);
    assert(isPalindrome("level") == true);
    assert(isPalindrome("PinkHouse") == false);
    
    //cout << "It Works!! " << endl;
    return 0;
}

//+++++++++++++++++++++++++++++++++++++++++++++++
string initials(string strA)
{
    string newStrA;
    char valA, valB;
    
    valB = strA.at(0); //Take the first character 
    valB = toupper(valB);
    
    for(int ix=1; ix < strA.length(); ix++)
    {
        if (strA.at(ix) == ' ') //When the loop finds a space it goes to the next index and takes the character in that index.
        {
           valA = strA.at(ix+1);
           valA = toupper(valA);
           newStrA += valA;
        }
    }
    //cout << valB+newStrA << endl;
    return valB+newStrA;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int countAlpha(string strA)
{
    int counter = 0;
    
    for(int ix=0; ix < strA.length(); ix++)
    {
        if(((strA.at(ix) >= 'A') && (strA.at(ix) <= 'Z')) || ((strA.at(ix) >= 'a') && (strA.at(ix) <= 'z'))) //The if statement checks for lower and upper case letters.
        {
           counter++;
        }
    }
    
    //cout << counter << endl;
   
    return counter;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int countWords(string strA)
{
    int counter = 1;//Start of at one for the first word
    
    for(int ix=0; ix < strA.length(); ix++)
    {
        if (strA.at(ix) == ' ') //Check for space, if space add one to counter.
        {
            counter++;
        }
        else if ((strA.at(ix) >='0') && (strA.at(ix) <= '9')) //If the sentence has a number, set counter to 0.
        {
            counter = 0;
        }
    }
 
    //cout << counter << endl;
   
    return counter;    
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
bool isPalindrome(string strA)
{
    string newStrA, newStrB;
    char valA, valB;
   
   //Make the word backward and make then lower case
    for(int ix= strA.length()-1; ix >= 0; ix--)
    {   
        valA = strA.at(ix);
        valA = tolower(valA);
        newStrA += valA;
    }
    
   //Make the word lower case goint forward
    for(int ix=0; ix < strA.length(); ix++)
    {
        valB = strA.at(ix);
        valB = tolower(valB);
        newStrB += valB;
    }
    
    //cout << newStrA << endl;
    //cout << newStrB << endl;
   
   //Checks if the word going backwards and forwards are the same.
    if(newStrA == newStrB)
    {
       return true;
    }
    else
    {
       return false;
    }     
}



