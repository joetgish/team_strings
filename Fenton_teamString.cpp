// Name: Ali Fenton
// Date: October 9,2015
// Programming Team String

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main(){
    //1st Problem
    assert(initials("Terra Aliess Fenton") == "TAF");
    assert(initials("Ann Lee Vive") == "ALV");
    assert(initials("Joe Bob Lee") == "JBL");
    
    //2nd Problem
    assert(countAlpha("Hello World") == 10);
    assert(countAlpha("Apple") == 5);
    assert(countAlpha("food") == 4);
    
    //3rd Problem 
    assert(countWords("I like apples and cats!") == 5);
    assert(countWords("I like apples!") == 3);
    assert(countWords("Would you like food?") == 4);
    
    //4th Problem
    assert(isPalindrome("deed") == 1);
    assert(isPalindrome("like") == 0);
    assert(isPalindrome("dad") == 1);
    
    return 0;
}
//1st Problem
string initials(string strA){
    int firstBlank, secondBlank;
    string strCaps;
    strCaps = strA.substr(0,1);
    firstBlank = strA.find(" ");
    strCaps = strCaps + strA.substr(firstBlank + 1, 1);
    secondBlank = strA.find(" ", firstBlank + 1);
    strCaps =  strCaps + strA.substr(secondBlank + 1, 1);
    return strCaps;
}

//2nd Problem
int countAlpha(string strA){
    int count = 0;
    for(int ix=0; ix <strA.length();ix++){
        if(((strA[ix] >= 'A')&& (strA[ix] <= 'Z')) || ((strA[ix] >= 'a')&& (strA[ix] <='z'))){
            count++;
        }
    }
    return count;
}

//3rd Problem
int countWords(string strA){
    int count = 0;
    for(int ix=0; ix < strA.length();ix++){
        if( strA.at(ix) == ' '){
            count++;
        }
    }    
    return count + 1;
}

// 4th Problem
bool isPalindrome(string strA){
    string strB;
    for(int i = strA.length()-1; i>= 0; i--){
        strB = strB + strA[i];
    }  
    
    if(strA == strB){
        return true;
    }else{
        return false;
    }
}


