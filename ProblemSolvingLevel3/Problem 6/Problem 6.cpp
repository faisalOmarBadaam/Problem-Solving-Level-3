
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void printArray(int arr[100][100], int lenthR, int lenthC)
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			cout << setw(3) << arr[i][j] << "	";
		}
		cout << endl;
	}
}
void fillOrderedArray(int arr[100][100], int lenthR, int lenthC)
{
	int counter = 1;
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++) {
			arr[i][j] = counter;
			counter++;
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	cout << "random array: " << endl;
	int arr[100][100];
	int lenthR = 3;
	int lenthC = 3;
	fillOrderedArray(arr, lenthR, lenthC);
	printArray(arr, lenthR, lenthC);
	



}

