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

    assert(initials("Sarah Brianne Villegas") == "SBV");
    assert(initials("Jose Manuel Perez") == "JMP");
    assert(initials("Joel Verduzco") == "JV");
    assert(countAlpha("steven87932tv") == 8);
    assert(countAlpha("world12unknown") == 12);
    assert(countAlpha("bubba2cool4school") == 15);
    assert(countWords("My dos is cooler than yours") == 6);
    assert(countWords("Who let the dogs out") == 5);
    assert(countWords("There's a squirrel in my boot'") == 6);
    assert(isPalindrome("racecar") == true);
    assert(isPalindrome("carl") == false);
    assert(isPalindrome("boob") == true);




    /*
    cout << initials("Sarah Brianne Villegas") << endl;
    cout << countAlpha("steven87932tv") << endl;
    cout << countWords("i love my dog bubba he's awesome") << endl;
    cout << isPalindrome("racecar") << endl;
    */

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

int countAlpha(string strA){

    int wordCount =0;
    for(int i = 0; i < strA.length();i++){
    
        if ((strA[i] >= 'a') && (strA[i] <= 'z')){
        
            wordCount++;
        }
        if ((strA[i] >= 'A') && (strA[i] <= 'Z')){
        
            wordCount++;
        }
    }
    return wordCount;

}

int countWords(string strA){

    int onlyWords =0;
    string word;
    for(int i = 0; i <= strA.length(); i++){
    
         if (( strA [i] == ' ') || (i == strA.length())){
            
            onlyWords++;
        }
        if (strA[i] != ' '){
            //captures each word 
            word += strA[i];
        }
    }

    return onlyWords;
}

bool isPalindrome(string strA){

    string newWord;
    for(int i = strA.length() -1 ; i >= 0; i-- ){
    
        newWord += strA[i];
    
    }
    if (strA == newWord){
    
         return true;
    }
    else {
    
        return false;
    }
}



