// Name: Mavey Ma
// Created: Thursday, October 8, 2015
// GitHub CSS Lab team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
#include <string>
#include <iostream>
#include <cassert> //assert()

using namespace std;

string initials(string strA);
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
char makeUpper(char whatever);
//CAPITALIZES WHATEVER CHARACTERS
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
    //STRING INITIALS FUNCTION
    string input;
    cout << "Please enter your full name (first, middle, last)." << endl;
    getline(cin, input);
    cout << initials(input) << endl;
    cout << "PANDAS WILL SMILE!" << endl;
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("Mavey june Ma") == "MJM");
    assert(initials("terra lockheart laforet") == "TLL");
    //END STRING INITIALS FUNCTION

    return 0;
}
char makeUpper(char whatever)
{
	char output;
	int numWhatever = int(whatever);
	int numCapitalizeWhatever = numWhatever - 32;
	output = char(numCapitalizeWhatever);
	return output;
}//END MAKE UPPER 
string initials(string strA)
{
    string output;
    char firstInitial, middleInitial, lastInitial;
    int middleIndex, lastIndex;
    
    firstInitial = strA[0];
    middleIndex = strA.find(" ") + 1;
    middleInitial = strA[middleIndex];
    lastIndex = strA.find(" ", middleIndex) + 1;
    lastInitial = strA[lastIndex];
    
    if (firstInitial > 'Z' || firstInitial < 'A')
    {
        firstInitial = makeUpper(firstInitial);
    }
    if (middleInitial > 'Z' || middleInitial < 'A')
    {
        middleInitial = makeUpper(middleInitial);
    }
    if (lastInitial > 'Z' || lastInitial < 'A')
    {
        lastInitial = makeUpper(lastInitial);
    }
 
    output += firstInitial;
    //output += ". ";
    output += middleInitial;
    //output += ". ";
    output += lastInitial;
    //output += ".";
    
    return output;
}//END INITIALS




