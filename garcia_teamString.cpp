//Author:Emily Garcia
//Created: Oct 08 2015
//Description:
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);
string lowerAll(string stringA);

int main()
{
    //assert (initials("Emily Garcia") == "EG");
    //assert (initials("Nicole Bernadette Isidro Hipolito") == "NBIH");
    
    //assert (countAlpha("Hello world") == 10);
    //assert (countAlpha("hel*lo 5PEOPle") == 11);
    
    //assert (countWords("hello people of earth") == 4);
    //assert (countWords("hello everyone") == 2);
    
    assert (isPalindrome("Never odd or even?") == true);
    assert (isPalindrome("mother") == false);
    

    return 0;
}
/*string initials(string strA)
{
    string addSpace, segment, fullName, init;
    int whitespace;
    addSpace = " ";
    fullName = strA + addSpace;
    whitespace = strA.find(" ");
    segment= strA.substr(0, whitespace);
    while (fullName.length() > 0)
    {
        for (int i = 0; i < 1; i++)
        {
            init = init + toupper(segment[0]);
        }
        fullName = fullName.erase(0, whitespace + 1);
        whitespace = fullName.find(" ");
        segment = fullName.substr(0, whitespace);
    }
    return init;
}
int countAlpha(string strA)
{
    int bucket;
    bucket = 0;
    for (int i = 0; i < strA.length(); i++)
    {
        if (((strA[i] >= 65) && (strA[i] <= 90)) || ((strA[i] >= 97 ) && (strA[i] <= 122 )))
        {
            bucket ++;
        }
        else
        {
            bucket += 0;
        }
    }
    return bucket
}
int countWords(string strA)
{
    string addSpace, segment, fullPhrase;
    int whitespace, bucket;
    bucket = 0;
    addSpace = " ";
    fullPhrase = strA + addSpace;
    whitespace = strA.find(" ");
    segment= strA.substr(0, whitespace);
    while (fullPhrase.length() > 0)
    {
        bucket += 1;

        fullPhrase = fullPhrase.erase(0, whitespace + 1);
        whitespace = fullPhrase.find(" ");
        segment = fullPhrase.substr(0, whitespace);
    }
    return bucket;
}*/
bool isPalindrome(string strA)
{
    string bucket, comparison;

    for (int i = 0; i < strA.length(); i++)
    {
        if (((strA[i] >= 65) && (strA[i] <= 90)) || ((strA[i] >= 97 ) && (strA[i] <= 122 )))
        {
            bucket += tolower(strA[i]);
        }
    }
    for (int i = strA.length() - 1; i >= 0; i--)
    {
        if (((strA[i] >= 65) && (strA[i] <= 90)) || ((strA[i] >= 97 ) && (strA[i] <= 122 )))
        {
            comparison += tolower(strA[i]);
        }
    }
    if (bucket == comparison)
    {
        return true;
    }
    else
    {
         return false;
    }
}
