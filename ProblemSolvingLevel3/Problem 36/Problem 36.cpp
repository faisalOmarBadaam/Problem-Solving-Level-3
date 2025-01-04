
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
short countWordsInText(string text)
{
	string delim = " ";
	string sword;
	short pos = 0;
	short counter = 0;
	while ((pos = text.find(delim)) != string::npos)
	{
		sword = text.substr(0, pos);
		if (sword != "")
		{
			counter++;
		}
		text.erase(0, pos + delim.length());
	}
	if (text != "")
	{
		counter++;
	}
	return counter;
}

int main()
{
	cout<<countWordsInText("faisal omar badaam");

}
