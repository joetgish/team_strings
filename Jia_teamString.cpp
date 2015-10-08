//David Jia
//10-8-15
//HW_8_Oct implementing functions and uploading them to GitHub
#include<iostream> // input output
#include<string> // string
#include<cassert> // assert()
using namespace std;

string initials(string strA); // receives first, middle, and last name then returns only the
							  // initials capitalized

int main()
{
	assert(initials("Maria Sera Turing") == "MST");
	assert(initials("maria sera turing") == "MST");
	assert(initials("Maria sera Turing") == "MST");
	assert(initials("George W. Bush") == "GWB");
	assert(initials("Martin luther King") == "MLK");
	
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
		
