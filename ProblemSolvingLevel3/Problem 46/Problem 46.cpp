
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
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

sClient ConvertLineToRecord(string data,string separetor="#//#") {
	sClient client;
	vector<string>vData = splitString(data, separetor);
	client.AccountNumber = vData[0];
	client.PinCode = vData[1];
	client.Name = vData[2];
	client.Phone = vData[3];
	client.AccountBalance = stod(vData[4]);



	return client;
}
void PrintClientRecord(sClient Client)
{
	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccout Number: " << Client.AccountNumber;
	cout << "\nPin Code : " << Client.PinCode;
	cout << "\nName : " << Client.Name;
	cout << "\nPhone : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}
int main()
{
	string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
	PrintClientRecord(ConvertLineToRecord(stLine));

}
