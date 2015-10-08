// Kori Gann
// October 8, 2015
// multiple functions

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string initials(string strA);

int countAlpha(string strA);

int countWords(string strA);

bool isPalindrome(string strA);

int main()
{


    assert(initials("Kordillia anntonette Gann") == "KAG");
    assert(initials("lori anntonette Gann") == "LAG");

    assert(countAlpha("dog 1 fog") == 6);
    assert(countAlpha("dog 1/// fog") == 6);
    
    assert(countWords("hello there") == 2);
    assert(countWords("hello there dog face") == 4);

    assert(isPalindrome("hoh") == true);
    assert(isPalindrome("dob") == false);

}

string initials(string strA)
{
    string initial;
    
    if (strA[0] > 90)
    {
        strA[0] = (int(strA[0]) - 32) ;
    }

        initial = initial + char(strA[0]);

        for (int i = 0; i < strA.length(); i++)//loop to go through each char in the string
        {
            if (int(strA[i -1]) == 32)
            {
                if (int(strA[i]) > 90)
                {
                    strA[i] = (int(strA[i]) - 32); 
                }
            initial = initial + char(strA[i]);
            }
        }
    return initial;
        
}



int countAlpha(string strA)
{
    int letters = 0;
    for (int i = 0; i < strA.length(); i++)//loop to go through each char in the string
    {
        if( (strA[i] >= 65 && strA[i] <= 90) || (strA[i] >= 97 && strA[i] <= 122) )
        {   
            letters = letters + 1;
        }
    }
    return letters;
}
    

int countWords(string strA)
{
    int count = 1;
    for (int i = 0; i < strA.length(); i++)//loop to go through each char in the string
    {
        if (int(strA[i -1]) == 32)
        {
            count = count + 1;
        }
    }
    return count;
}

bool isPalindrome(string strA)
{
    string backwards;
    
    for (int i = 0; i < strA.length(); i++)//loop to go through each char in the string
    {
        backwards = strA[i] + backwards;
    }
    if (backwards == strA)
    {
        return true;
    }
    else
    {
        return false;
    }
}




