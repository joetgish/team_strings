// Name: Mavey Ma
// Created: Thursday, October 8, 2015
// GitHub CSS Lab team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
#include <string> //string
#include <iostream> //cout, cin
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
    
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("Mavey june Ma") == "MJM");
    assert(initials("terra lockheart laforet") == "TLL");
    //END STRING INITIALS FUNCTION
    
    //INT COUNT ALPHA FUNCTION
    assert(countAlpha("12345m") == 1);
    assert(countAlpha("mAvEyJuNeMa") == 11);
    assert(countAlpha("C0mput3r5 4ever") == 10);
    assert(countAlpha("{}|+-)(*&^%$#@!~?") == 0);
    //END INT COUNT ALPHA FUNCTION
    
    //INT COUNT WORDS FUNCTION
    assert(countWords("Hi hi hi") == 3);
    assert(countWords("what") == 1);
    assert(countWords("What makes you happy?") == 4);
    assert(countWords("If you want to be happy, be.") == 7);
    //END INT COUNT WORDS FUNCTION

    cout << "PANDAS WILL SMILE!" << endl;
    return 0;
}//END MAIN
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
int countAlpha(string strA)
{
    int output = 0;
    int count = 0;
    for (count = 0; count < strA.length(); count++)
    {
        if (((strA[count] >= 'A') && (strA[count] <= 'Z')) || ((strA[count] >= 'a') && (strA[count] <= 'z')))
        {
            output ++;
        }
        else
        {
            output += 0;
        }
    }
    return output;
}//END COUNT LETTERS
int countWords(string strA)
{
    int output = 0;
    int count = 0;
    for (count = 0; count < strA.length(); count++)
    {
        if (strA[count] == ' ')
        {
            output ++;
        }
        else
        {
            output += 0;
        }
    }
    output ++; //FOR THE EXTRA WORD AT THE END THAT IS NOT FOLLOWED BY A SPACE
    return output; 
}//END COUNT WORDS
