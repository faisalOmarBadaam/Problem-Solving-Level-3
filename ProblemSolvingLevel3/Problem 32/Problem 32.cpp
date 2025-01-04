
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
int countLetterInTextSencetiveCase(string text, char letter) {
	int counter = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == letter)
		{
			counter++;
		}
	}
	return counter;
}
bool IsVowel(char letter) 
{
	string vowels = "aouie";
	for (short i = 0; i < 5; i++)
	{
		if (tolower(letter)==vowels[i])
		{
			return true;
		}
	}
	return false;
}

int main()
{
	cout << IsVowel('A');


}
