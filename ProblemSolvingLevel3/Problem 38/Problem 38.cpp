
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
string trimLeft(string text) {
	while (text[0] ==' ') {
		text.erase(0,1);
		if (text[0]!=' ')
		{
			break;
		}
	}
	return text;
}
string trimRight(string text) {
	while (text[text.length()-1] == ' ') {
		text.erase(text.length()-1, text.length());
		if (text[text.length() - 1] != ' ')
		{
			break;
		}
	}
	return text;
}
string trim(string text) {
	return trimLeft(trimRight(text));

}
//another solution
string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i, S1.length() - i);
		}
	}
	return "";
}
string TrimRight(string S1)
{
	for (short i = S1.length() - 1; i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
	}
	return "";
}
int main()
{
	cout << trimRight("   faisal k        ");
	cout << trimLeft("    faisal         ") << endl;
	cout << trim("    faisal         ") << endl;




}
