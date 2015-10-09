//David Jia
//10-8-15
//HW_8_Oct implementing functions and uploading them to GitHub
#include<iostream> // input output
#include<string> // string
#include<cassert> // assert()
using namespace std;

string initials(string strA); // receives first, middle, and last name then returns only the
							  // initials capitalized
int countAlpha(string strA); // receives a string and outputs the number of alphabetical
							 // characters
int countWords(string strA); // receives a string that comprises a sentence and counts the
							 // number of words in it
bool isPalindrome(string strA); // receives a string and checks if it is a valid Palindrome
							 
int main()
{
	assert(initials("Maria Sera Turing") == "MST");
	assert(initials("maria sera turing") == "MST");
	assert(initials("Maria sera Turing") == "MST");
	assert(initials("George W. Bush") == "GWB");
	assert(initials("Martin luther King") == "MLK");
	
	assert(countAlpha("I really like pie.") == 14);
	assert(countAlpha("I ate 3400 pies last night.") == 17);
	assert(countAlpha("The cake is a lie.") == 13);
	assert(countAlpha("Don't make contracts with weird-looking animals.") == 40);
	assert(countAlpha("How many letters are in this string? 29?") == 29);
	
	assert(countWords("This sentence should have eight words in it.") == 8);
	assert(countWords("First rule of fight club is: you do not talk about fight club.") == 13);
	assert(countWords("Do you wanna build a snowman?") == 6);
	assert(countWords("Here's Johnny!") == 2);
	assert(countWords("Come to the dark side, we have comments!") == 8);
	
	assert(isPalindrome("r") == 1);
	assert(isPalindrome("Rats live on no evil star.") == 1);
	assert(isPalindrome("This is not a Palindrome.") == 0);
	assert(isPalindrome("Do Good's deeds live on? No, Evil's deeds do, O God.") == 1);
	assert(isPalindrome("This is false.") == 0);
	
	cout << "Code ran correctly :D" << endl;

	return 0;
}

string initials(string strA)
{
	string firstInitial, middleInitial, lastInitial;
	
	for(int ix = 0; ix < strA.length(); ix++)
	{
		firstInitial = toupper(strA[0]);
		middleInitial = toupper(strA[strA.find(32) + 1]); // finds index of first white space, 
														  // adds 1
												 // to find the first letter of the middle name
		lastInitial = toupper(strA[strA.find(32, strA.find(32) + 1) + 1]); // finds index of the 
													// second white space, adds 1 to find the 
													//first letter of the last name
	}
	
	return firstInitial + middleInitial + lastInitial;	
}

int countAlpha(string strA)
{
	int count = 0;
	for (int ix = 0; ix < strA.length(); ix++)
	{
		if ((strA[ix] >= 65 && strA[ix] <= 90) || (strA[ix] >= 97 && strA[ix] <= 122))
		{
			count++; // increases count if the current index has a letter
		}
	}
	
	return count;
}
		
int countWords(string strA)
{
	int count = 0;
	for (int ix = 0; ix < strA.length(); ix++)
	{
		if (strA[ix] == 32) // increases count whenever a white space is found
		{
			count++;
		}
	}
	count += 1; // last word won't have a white space after it so 1 is automatically added

	return count;
}

bool isPalindrome(string strA)
{
	string palindrome, strB;
	
	for (int ix = 0; ix < strA.length(); ix++)
	{
		if ((strA[ix] >= 65 && strA[ix] <= 90) || (strA[ix] >= 97 && strA[ix] <= 122)) // only
								// takes alphabetical letters
		{
			strB += tolower(strA[ix]); // makes the inputted string lowercase
		}
	}
	
	for (int ix = strB.length() - 1; ix >= 0; ix--) // returns the inputted string reversed
	{
		if ((strB[ix] >= 65 && strB[ix] <= 90) || (strB[ix] >= 97 && strB[ix] <= 122)) // only
								// takes alphabetical letters
		{
			palindrome += strB[ix];
		} 
	}
	
	if (palindrome == strB)
	{
		return true;
	}
	else if (palindrome != strB)
	{
		return false;
	}
}
