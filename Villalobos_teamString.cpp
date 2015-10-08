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

int main()
{
    assert(initials("Thalia Ivette Villalobos") == "TIV");       
    assert(initials("maria Sera turing") == "MST"); 
    assert(initials("juan jose sera") == "JJS"); 
    return 0;
}

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




