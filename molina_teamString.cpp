#include<iostream>
#include<string>
#include<cassert>
using namespace std;

string initials(string strA);
int countAlpha(string strA);
int countWords(string strA);
bool isPalindrome(string strA);

int main()
{
  assert( countAlpha( "Hello") == 5);
  assert( countAlpha("Dario Molina") == 11);
  assert( countAlpha("Pencil") == 6);
  
  assert( countWords( "Dario Molina") == 2);
  assert( countWords("America Idol USA") == 3);
  assert( countWords("Computer Science is Awesome") == 4);
  
  assert(isPalindrome("racecar")== 1);
  assert(isPalindrome("a")== 1); 
  assert(isPalindrome("bear") == 0);
  
  assert(initials( "Dario Alejandro Molina") =="DAM");
  
  
return 0;
}

string initials(string strA)
{
  string caps;
  caps = strA.substr(0,1);
  
  for( int i = 0; i < strA.length() -1; i++)
  {
  
    if(strA.at(i) == ' ')
      caps = caps + strA.at(i+1);
  }

  return caps;

}


int countAlpha(string strA)
{
  int count = 0;
  
  for ( int i = 0; i < strA.length(); i++)
  {
    //cout << strA.at(i) << "  " << count << endl;
    if (( strA.at(i) > 96) && ( strA.at(i)  < 122))
      
      count++;
      
    else if ((strA.at(i) > 64) && ( strA.at(i) < 90))
      count++;
  
  }
  
  return count;
}







int countWords(string strA)
{
  int count = 0, words = 0;
  
  for( int i = 0; i < strA.length(); i++)
  {
    if ( strA.at(i) == ' ')
      count++;
 
  }

  words = count + 1;
  
  return words;
}

bool isPalindrome(string strA)
{
  string strB;
  
  for( int i = strA.length() - 1; i > -1; i--)
  {
    strB += strA.at(i);
  
  }

  if( strA == strB)
    return true;
    
  else
    return false;
    
}
