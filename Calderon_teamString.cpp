// Name: Daniel Calderon
// Date: October 8, 2015
// Function string hw


#include<iostream>
#include<cassert>
#include<string>

using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);


int main()
{
//************First Function*****************************************
    assert(initials("Daniel Calderon Manriquez")=="DCM");
    assert(initials("daniel calderon manriquez")=="dcm");
    assert(initials("Potato Fancy Bottom Silver John")=="PFBSJ");
    assert(initials("Maria Sera Turing")=="MST");
//************Second Function********************************************
    assert(countAlpha("Potato")==6);
    assert(countAlpha("D4an56ny")==5);
    assert(countAlpha("B4acon")==5);
//************Third Function**************************************************
    assert(countWords("My name is daniel calderon led")==6);
    assert(countWords("BaconPotatoChili")==1);
    assert(countWords("Coleslaw Potato Salad Meat Loaf")==5);
//**********Fourth Function*************************************************
    assert(isPalindrome("civic")==true);
    assert(isPalindrome("potato")==false);
    assert(isPalindrome("76544567")==true);



    return 0;
}
//*********************************First Function************************************
string initials(string strA)
{
    int c;
    string a,b,e;
    for(int i=0; i < strA.length(); i++)
        {
            if(strA[i]==' ')
            {
                i++;
            }
            if((strA[i]>='A'&&strA[i]<='Z') || (strA[i]>='a'&&strA[i]<='z'))
            {
                b+=strA.substr(i,1);
                c =strA.find(' ',i);
                e = strA.erase(i+1,c-i);   
            }
        }
    return b;
}
//**************************Second Function***************************************
int countAlpha(string strA)
{
    int count=0;
    for (int i =0; i < strA.length(); i++)
    {
        if((strA[i]>='A'&&strA[i]<='Z') || (strA[i]>='a'&&strA[i]<='z'))
        {
            count +=1;
        }
        else
        {
            count =count;
        }
    }
    return count;
}
//************************Third Function*************************************
int countWords(string strA)
{
    int count=0;
    for(int i=0; i < strA.length();i++)
    {
        if (strA[i]==' ')
        {
            count+=1;
        }
        else
        {
            count = count;
        }
    }
    return count +1;
}
//************************Fourth Function******************************************
bool isPalindrome(string strA)
{
    string a;
    bool verdict;
    for(int i= strA.length()-1; i>=0;i--)
    {
        a+=strA[i];
    }
    if (a == strA)
    {
        verdict = true;
    }
    else
    {
        verdict = false;
    }
    return verdict;
}














