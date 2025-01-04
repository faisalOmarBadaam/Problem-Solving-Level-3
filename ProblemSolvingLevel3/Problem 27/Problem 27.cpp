
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

int main()
{
	cout << convertLetterToInvertCase('B');

}
