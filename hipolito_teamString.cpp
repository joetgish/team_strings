//Name: Nicole Hipolito
//October 8, 2015
//Strings HW

#include<iostream>
#include<cassert>
#include<string>
using namespace std;

string initials(string strA);
int countAlpha(string strA);

int main()
{
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("Can Jou Notte") == "CJN");
    assert(initials("Yerr Ey Ho") == "YEH");
    
    assert(countAlpha("Hi, my name is Nicole") == 16);
    assert(countAlpha("Hey I think cats are amazing.") == 23);
    assert(countAlpha("Seriously, I don't even know what I'm doing") == 33);
    
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
{// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 
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
