
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



void PrintFibonacci(int number) 
{
	int prev1 = 1;
	int prev2 = 1;
	int temp = 0;
	cout << prev1 << "   ";
	for (int i = 0; i < number-1; i++)
	{
		cout << prev2<<"   ";
		temp = prev1;
		prev1 = prev2;
		prev2 = temp+prev2;
	}
}
int main()
{
	
	PrintFibonacci(20);

}

