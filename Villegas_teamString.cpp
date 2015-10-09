// Name: Sarah Villegas 
//October 8, 2015
// team_strings HW assignment

#include <iostream>
#include <cassert>
using namespace std;


string initials(string strA);
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST

int countAlpha(string strA);
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 

int countWords(string strA);
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.

bool isPalindrome(string strA);
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome


int main (){


    cout << initials("Sarah Brianne Villegas") << endl;



    return 0; 
}

string initials(string strA){

    string word;
    string newName;
    int end = strA.length() ;
    for (int i = 0; i <= strA.length(); i++ ){
        
        if (( strA [i] == ' ') || (i == end )){
            
            newName += word[0];
            word = "";
        }
        if (strA[i] != ' '){
            //captures each word 
            word += strA[i];
        }
    }
    return newName;
}
/*
int countAlpha(string strA){




}

int countWords(string strA){






}

bool isPalindrome(string strA){






}
*/


