


#include<iostream>
#include<string>
#include<cassert>

using namespace std;

int countWords(string strA);
int countAlpha(string strA);
bool isPalindrome(string strA);
string initials(string strA);

int main()
{


    assert(countWords("I am counting words.") == 4);
    assert(countWords("Still counting the words.") == 4);
    assert(countWords("Having fun counting words.") == 4);
    
    assert(countAlpha("Ronald Wilson Reagan") == 18);
    assert(countAlpha("John Dee Doe") == 10);
    assert(countAlpha("Hope Solo") == 8);
    
    assert(isPalindrome("racecar") == true);
    assert(isPalindrome("mom") == true);
    assert(isPalindrome("hello") == false);
    
    assert(initials("Ronald Wilson Reagan") == "RWR");
    assert(initials("Lee Sue Yung") == "LSY");
    assert(initials("Ramona Tye Foster") == "RTF");
    
    cout<<"It works "<<endl;
    
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
    }else{
        return false;
    }
}
