
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
char convertLetterToInvertCase(char letter) {
	if (isupper(letter))
	{
		return tolower(letter);
	}
	else
	{
		return toupper(letter);
	}

}
string convertToInvertCase(string text) {
	string s = "";
	for (int i = 0; i < text.length(); i++)
	{
		s += convertLetterToInvertCase(text[i]);
	}
	return s;
}
int main()
{
	cout << convertToInvertCase("faisal OmaR BADaam");

}
