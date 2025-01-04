// Problem 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
string convertToUpperCase(string text) {
	bool isFirstLetter = true;
	string s = "";
	for (int i = 0; i < text.length(); i++)
	{
		s += text[i];
		if (text[i]!=' ' && isFirstLetter==true && int(text[i])<=122 && int(text[i]) >= 97)
		{
			s[i] = char(text[i] - 32);
		}
		isFirstLetter = text[i] == ' ' ? true : false;
	}
	return s;
}
int main()
{
	cout<<convertToUpperCase("faisal omar salem Badaam");
}
