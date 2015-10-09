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







