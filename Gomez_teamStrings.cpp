// Name: Nancy Gomez
// Date: October 8, 2015

// INSTRUCTIONS:
// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// Name your C++ file: lastName_teamString.cpp
//

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main(){

	assert(initials("Maria Sera Turing") == "MST");
	assert(initials("Nancy H. Gomez") == "NHG");
	
	assert(countAlpha("Nancy416") == 5);
	assert(countAlpha("Mikaami13") == 7);
	
	assert(countWords("My name is Nancy.") == 4);
	assert(countWords("I want to play League") == 5);
	
	assert(isPalindrome("race car") == true);
	assert(isPalindrome("no") == false);
	assert(isPalindrome("a") == true);
	
	
	return 0;
}

string initials(string strA){
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST
	
	string firstInitial;
	string middleInitial;
	string lastInitial;
	
	for(int pos = 0; pos < strA.length(); pos++){
		if (strA[pos] == ' '){
			int nextSpace = strA.find(" ", pos+1);
			firstInitial = strA.substr(0,1);
			middleInitial = strA.substr(pos+1, 1);
			lastInitial = strA.substr(nextSpace+1,1);
			
			return firstInitial + middleInitial + lastInitial;
		} 
	}
}
int countAlpha(string strA){
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 
	int alphaCount = 0;
	for(int pos = 0; pos < strA.length(); pos++){
		if ( (strA[pos] >= 'a' && strA[pos] <= 'z') ||
			(strA[pos] >= 'A' && strA[pos] <= 'Z') ){
			alphaCount++;
		}
	}
	return alphaCount;
}
int countWords(string strA){
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.
	int spaceCount = 0;
	for (int pos = 0; pos < strA.length(); pos++){
		if (strA[pos] == ' '){
			spaceCount++;
		}
	}
	return spaceCount+1;
}
bool isPalindrome(string strA){
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome
	// deletes dashes or spaces
	for (int pos = 0; pos < strA.length(); pos++){
		char asciiChar = strA[pos];
		if (asciiChar == '-' || asciiChar == ' '){
			strA.erase(pos,1);
			pos = 0;	
		}
	}
	//makes a new string with the chars in the backwards order 
	string palindrome;
	int convert = strA.length()-1, newPos = 0;
	for (int pos = 0; pos < strA.length(); pos++){
		newPos = pos + convert;
		palindrome+= strA[newPos];
		convert-=2;
	}
	return (strA == palindrome);
}
