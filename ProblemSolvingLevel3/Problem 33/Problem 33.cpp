
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

bool IsVowel(char letter)
{
	string vowels = "aouie";
	for (short i = 0; i < 5; i++)
	{
		if (tolower(letter) == vowels[i])
		{
			return true;
		}
	}
	return false;
}
short countVowels(string text) {
	short counter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (IsVowel(text[i])) {
			counter++;
		}
	}

	return counter;
}
int main()
{
	cout << countVowels("faisal Omar Badaam");


}
