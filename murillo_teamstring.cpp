//Name:Evelyn Murillo
//October 8 2015
//
#include<iostream>
#include<string>
#include<cassert>

using namespace std;

int countAlpha(string strA);
int countWords(string strA);
string initials(string strA);
bool isPalindrome(string strA);

int main(){



    //cout<<countAlpha("hello world!")<<endl;
    assert(countAlpha("Hello World")==10);
    assert(countAlpha("h$!@# 3rfja")==5);
    assert(countAlpha("i love!! banana")==11);
    assert(countWords("two plus two equals four")==5);
    assert(initials("Maria Evelyn Anda")=="MEA");
    assert(initials("William Joe Welch")=="WJW");
    assert(initials("CS IN Three")=="CIT");
    assert(isPalindrome("DAD")==true);
    assert(isPalindrome("racecar")==true);
    assert(isPalindrome("lake")==false);


cout<<" Hey its working" <<endl;
return 0;
}

int countAlpha(string strA)
{
    int count = 0;
    for(int ix=0; ix <strA.length();ix++)
    {
    
        if(((strA[ix] >= 'A')&& (strA[ix] <= 'Z')) || ((strA[ix] >= 'a')&& (strA[ix] <='z')))
        {
           
            count++;
        
        }
    
 
    }
 

        return count;

}
int countWords(string strA)
{
        int count = 0;

        for(int ix=0; ix < strA.length();ix++)
        {
        
            if( strA.at(ix) == ' ')
            {
            count++;
            }
        }    
        
    return count + 1;



}
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

bool isPalindrome(string strA){
    string strB;
    for(int i = strA.length()-1; i>= 0; i--){
        strB = strB + strA[i];
    }  
    
    if(strA == strB){
        return true;
    }
    else
    {
        return false;
    }
}
