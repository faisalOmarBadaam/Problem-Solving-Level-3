
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

string JoinString(vector<string> vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}
vector<string> splitString(string text, string drim)
{
	vector<string>result;
	int pos = 0;
	string s1;
	while ((pos = text.find(drim)) != string::npos) {
		s1 = text.substr(0, pos);
		if (s1 != "")
		{
			result.push_back(s1);
		}
		text.erase(0, pos + drim.length());
	}
	if (text != "")
	{
		result.push_back(text);
	}
	return result;
}
string convertToLower(string text) {
	for (int i = 0; i < text.length(); i++)
	{
		text = tolower(text[i]);
	}
	return text;
}
string replaceStringWithCaseSencitve(string text, string oldPart, string newPart) {
	vector<string>vs = splitString(text, " ");
	string newString;
	for (int i = 0; i < vs.size(); i++)
	{
		if (vs[i]==oldPart)
		{
			vs[i] = newPart;
		}
	}
	newString = JoinString(vs, " ");
	return newString;
}
string replaceStringWithOutCaseSencitve(string text, string oldPart, string newPart) {
	vector<string>vs = splitString(text, " ");
	string newString;
	for (int i = 0; i < vs.size(); i++)
	{
		if (convertToLower(vs[i]) == convertToLower(oldPart))
		{
			vs[i] = newPart;
		}
	}
	newString = JoinString(vs, " ");
	return newString;
}
// another solution

string ReplaceWordInStringUsingSplit(string S1, string
	StringToReplace, string sRepalceTo, bool MatchCase = true)
{
	vector<string> vString = splitString(S1, " ");
	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace)
			{
				s = sRepalceTo;
			}
		}
		else
		{
			if (convertToLower(s) ==
				convertToLower(StringToReplace))
			{
				s = sRepalceTo;
			}
		}
	}
	return JoinString(vString, " ");
}
int main()
{
	string name = "faisal omar badaam";
	
	cout << replaceStringWithCaseSencitve(name, "badaam", "mohmmed")<<endl;
	cout << replaceStringWithOutCaseSencitve(name, "BADaam", "mohmmed");



	
}
