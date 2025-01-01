
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int randomNumber(int from ,int to) {
    return rand() % (to - from + 1) + from;
}
void printArray(int arr[100][100], int lenthR, int lenthC) 
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++)
		{
			cout << setw(3) <<arr[i][j]<<"	";
		}
		cout << endl;
	}
}
void fillRandomArray(int arr[100][100],int lenthR,int lenthC)
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++) {
			arr[i][j] = randomNumber(1, 100);
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
	fillRandomArray(arr, lenthR, lenthC);
	printArray(arr, lenthR, lenthC);

    
}

