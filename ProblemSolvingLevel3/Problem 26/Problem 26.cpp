
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
	string s = "";
	for (int i = 0; i < text.length(); i++)
	{
		s += toupper(text[i]);
		
	}
	return s;
}
string convertToLowerCase(string text) {
	string s = "";
	for (int i = 0; i < text.length(); i++)
	{
		s += tolower(text[i]);

	}
	return s;
}
int main()
{
	cout << convertToUpperCase("Faisal Omar salem Badaam");
	cout << endl;
	cout << convertToLowerCase("Faisal Omar salem Badaam");

}
