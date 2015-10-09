// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// // Name your C++ file: lastName_teamString.cpp
//Name: Samba Diallo
//Date: 10/9/15
#include <cassert>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);
int main(){

    assert(initials("I Love Azn Baby girls") == "ILABG");
    assert(initials("AHAHAHA WOOT") == "AW");
    assert(countAlpha("12fenc678YOP9 912- ") == 7);
    assert(countAlpha("GOO98345Y") == 4);
    assert(countWords("Hi my name is Samba")== 5);
    assert(countWords("pLEASE STOP counting my number of words I say")== 9);
    assert(isPalindrome("mom") == 1);
    assert(isPalindrome("racecar") == 1);
    assert(isPalindrome("wliotw") == 0);
return 0;}


string initials(string strA){
string answr;
int num = 0, loop = 0;
int len = strA.length();
answr += strA.at(0);
for(loop; loop < len; loop++){
char let = strA.at(loop);
if (let == ' '){
        if((strA.at(loop+1)) >=97 and (strA.at(loop+1)) <= 122)
            answr += (strA.at(loop+1)-32);
        if((strA.at(loop+1)) >=65 and (strA.at(loop+1)) <= 90)
            answr += (strA.at(loop+1));}}
return answr;}
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST

int countAlpha(string strA){
    int num = 0;
    int loop = 0;
    for(loop = 0; loop < strA.length(); loop++){
        if((strA.at(loop) >= 65 and strA.at(loop) <= 90) or (strA.at(loop) >= 97 and strA.at(loop) <=122 ))
            num++;
    }
return num;}
// receives a string comprising a sentence, counts and returns the number of alphabetical
// characters a -> z  and A -> Z are the alphabetical characters.

int countWords(string strA){
int num = 0, loop = 0;
for(loop; loop < strA.length(); loop++){
    if(strA.at(loop) == ' ')
        num++;}
return (num + 1);}
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.
bool isPalindrome(string strA){
int num = 0, loop = 0;
if(strA.length() == 1)
    return true;
for(loop; loop < strA.length(); loop++){
    if(strA.at(loop) != strA.at(strA.length()- loop - 1))
        return false;}
return true;}

