//Name: Nicole Hipolito
//October 8, 2015
//Strings HW

#include<iostream>
#include<cassert>
#include<string>
using namespace std;

string initials(string strA);

int main()
{
    assert(initials("Maria Sera Turing") == "MST");
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
