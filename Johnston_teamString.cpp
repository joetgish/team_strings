//Name: Coleman Johnston
//Date: 8 Oct. 2015
#include<iostream>//cin,cout
#include<string>//string functions
#include<cassert>//testing
#include<cstdlib>//toupper() 
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
  /*assert(initials("Maria Sera Turing") == "MST");
    assert(initials("coleman Maverick johnston") == "CMJ");
    assert(initials("  zoe  ana hobbnobber") == "ZAH");
    assert(initials("  Zoe   Ana ") == "ZA");*/
    
    assert(countAlpha("abs bReAkIng") == 11);
    assert(countAlpha("125 and if ?!3") == 5);
    assert(countAlpha("ZAza do3s th15 w0rk?") == 12);
    
    return 0;
     
}

string initials(string strA)
{
    string returnInitials;
    int nxtWhiteSpace = 0;//Variable to hold the position of the next whitespace(starts at zero to start process) 
   
    while(strA.length() > nxtWhiteSpace)//run while there are still spaces
    {
        if((strA[nxtWhiteSpace] >= 'A' && strA[nxtWhiteSpace] <= 'Z') || (strA[nxtWhiteSpace] >= 'a' && strA[nxtWhiteSpace] <='z'))
        {//check to make sure strA at a position is a letter. If so put a the letter into the new string
            returnInitials += strA[nxtWhiteSpace]; 
        }
        
        nxtWhiteSpace = strA.find(" ");//find next white space
        
        if(nxtWhiteSpace < strA.length())//if there is still a white space erase the white space
            {
                strA.erase(nxtWhiteSpace,1); 
            }//then nxtWhiteSpace becomes the first letter in the next word
    }
    
    for(int i = 0;i < returnInitials.length(); i++)
    {//change letters in returnInitials to uppercase
        returnInitials[i] = toupper(returnInitials[i]);
    }
    
    return returnInitials;
}

int countAlpha(string strA)
{
    int count = 0;//counts the number of characters  
    
    for(int i = 0; i < strA.length(); i++)
    {//if strA at a value is a letter add one to count
        if (toupper(strA[i]) >= 'A' && toupper(strA[i]) <= 'Z')
        {
            count++;
        }
    }
    return count;   
}
