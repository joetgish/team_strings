//Louis Paul Romero
//October 8, 2015
//Team Strings

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main ()
{
    string fromUser, otherFromUser, anotherFromUser, word;
      
    cout << "Please enter your first, middle, and last name" << endl;
    getline(cin, fromUser);
    cout << initials(fromUser) << endl;
    
    cout << "Please enter anything you wish" << endl;
    getline(cin, otherFromUser);
    cout << countAlpha(otherFromUser) << endl;
    
    cout << "Please enter a sentence" << endl;
    getline(cin, anotherFromUser);
    cout << countWords(anotherFromUser) << endl;
    
    cout << "Enter a word to check if it is a palindrome " << endl;
    getline(cin, word);
    cout << isPalindrome(word) << endl;
    

    
    
     
    
        return 0;
}

string initials(string strA)
{
    string firstLetter, middleLetter, lastLetter;
    int whitespace;
    whitespace = strA.find(' ') + 1;
    firstLetter = strA.substr(0,1);
    strA.erase(0, whitespace);
    middleLetter = strA.substr(0,1);
    strA.erase(0, whitespace-1);
    lastLetter = strA.substr(0,1);
    return firstLetter + middleLetter + lastLetter; 
}

int countAlpha(string strA)
{
   int counter = 0;
   for(int ix = 0; ix < strA.length(); ix++)
   {
        if(isalpha(strA[ix]) == 1024)
        {
            counter++;
        }
   }
   return counter;
}

int countWords(string strA)
{
    int whitespace, counter = 0;
    whitespace = strA.find(' ');
    
    while(strA.length() != 0)
    {   
        strA.erase(0, whitespace + 2);   
        counter++;
    }
   

    return counter;
    
}

bool isPalindrome(string strA)
{
   int jx = 1;
   int counter = 0;
   int lengthOfString;
   lengthOfString = strA.length();
    
     if (lengthOfString % 2 == 0)
   {
        int kx= 1;
        for(int ax = 0; ax < (strA.length()/2);ax++)
        {
        
                if(strA[ax] == strA[lengthOfString - kx])
                {
                    counter++;
                }   
       
                kx++;
        }
    
        if(lengthOfString/2 == counter)
        {
            return true;
        }

        else        
        {
            return false;
        }
   }
    
    
    
    
    
    if( lengthOfString % 3 == 1)
    {
        for(int ix = 0; ix <= (strA.length()/2);ix++)
        {
        
            if(strA[ix] == strA[lengthOfString - jx])
            {
                counter++;
            }   
       
         jx++;
        }
    
        if((lengthOfString + 1)/2 == counter)
        {
              return true;
        }

        else if ((lengthOfString + 1)/2 != counter)
        {
            return false;
        }
    }
    
}


