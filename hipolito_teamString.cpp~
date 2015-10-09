//Name: Nicole Hipolito
//October 8, 2015
//Strings HW

#include<iostream>
#include<cassert>
#include<string>
using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main()
{
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("Can Jou Notte") == "CJN");
    assert(initials("Yerr Ey Ho") == "YEH");
    
    assert(countAlpha("Hi, my name is Nicole") == 16);
    assert(countAlpha("Hey I think cats are amazing.") == 23);
    assert(countAlpha("Seriously, I don't even know what I'm doing") == 33);
    
    assert(countWords("I just want to lay in bed and sleep all day") == 11);
    assert(countWords("It's cold right now, can I borrow your jacket?") == 9);
    assert(countWords("Friends talk behind your back while a bestfriend compliments you behind your back.") == 13);
    
    cout << isPalindrome("a") << endl;
    cout << isPalindrome("elle") << endl;    
    cout << isPalindrome("no.") << endl;
    
    return 0;
}   

string initials(string strA)
{
    string initial;
    char letter;
    for( int i = 0; i < strA.length(); i++)
    {
        letter = strA.at(i);
        if (letter >= 65 && letter <= 90)
        {
            initial += letter;
        }
    }
    return initial;
}

int countAlpha(string strA)
{
    int count = 0;
    char letter;
    for(int i = 0; i < strA.length(); i++)
    {
        letter = strA.at(i);
        if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
        {
            count ++;
        }
    }
    return count;
}

int countWords(string strA)
{
    int count = 0;
    char letter;
    for(int i = 0; i < strA.length(); i++)
    {
        letter = strA.at(i);
        if(letter == 32) //ascii value of whitespace
        {
            count ++;
        }
    }
    return count + 1;
}

bool isPalindrome(string strA)
{
    int count = 0; //this counts how many characters are alike.
    int i;
    char letter;
    
    for(i = 0; i < strA.length(); i++) //goes through every char
    {
        letter = strA.at(i);
        if(letter == 32) //find whitespace
        {
            strA.erase(i, 1); //delete whitespace
        }
    }
    
    if(strA.length() == 1) //if there's only one char, it's automatically a palindrome
    {
        return true;
    }
    
    else
    {

            if(strA.length() % 2 == 0) //if the length of the character is even, execute the following code
            {
                for(i = 0; i < (strA.length()/2); i++)//goes through every char by only goes halfway
                {
                    letter = strA.at(i);
                    char otherLetter = strA.at((strA.length()-1-i));
                    if(letter == otherLetter)
                    {
                           count ++;
                    }
                }
            }
            
            if(count == strA.length()/2)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
}

