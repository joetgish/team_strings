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

int main()
{
    //assert (initials("emily garcia") == "eg");
    //assert (initials("Nicole Bernadette Isidro Hipolito") == "NBIH");
    
    assert (countAlpha("Hello world") == 10);
    assert (countAlpha("hel*lo 5PEOPle") == 11);
        

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
            init = init + segment[0];
        }
        fullName = fullName.erase(0, whitespace + 1);
        whitespace = fullName.find(" ");
        segment = fullName.substr(0, whitespace);
    }
    return init;
}*/
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
    return bucket;
}
/*int countWords(string strA)
{

}
bool isPalindrome(string strA)
{

}*/
