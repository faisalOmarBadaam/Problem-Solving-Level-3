
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



void PrintFibonacci(int number,int prev1=1,int prev2=1,int counter=1)
{
	if (number==counter)
	{
		return;
	}
	else
	{
		if (counter==1)
		{
			cout << prev1;
		}
		cout <<"  " << prev2;
		PrintFibonacci(number, prev2, prev1 + prev2,counter+1);
	}
}
int main()
{

	PrintFibonacci(10);

}

