
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int randomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}
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
void fillRandomArray(int arr[100][100], int lenthR, int lenthC)
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++) {
			arr[i][j] = randomNumber(1, 100);
		}
	}
}
int sumColmuns(int arr[100][100], int cloumnNumber, int row) {

	int sum = 0;
	for (int i = 0; i < cloumnNumber; i++)
	{
		sum += arr[row][i];
	}
	return sum;
}
void printArrayCloumnSumInAnotherArray(int arr[100][100],int CopyArr[100], int columns, int rows) {
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		CopyArr[i]=sumColmuns(arr, columns, i);
		
	}
}
int main()
{
	srand((unsigned)time(NULL));
	cout << "random array: " << endl;
	int arr[100][100];
	int copyArr[100];
	int lenthR = 3;
	int lenthC = 3;
	fillRandomArray(arr, lenthR, lenthC);
	printArray(arr, lenthR, lenthC);
	printArrayCloumnSumInAnotherArray(arr,copyArr, lenthC, lenthR);
	for (int i = 0; i < lenthR; i++)
	{
		cout << "sum of the " << i + 1 << "st column is : " << copyArr[i] << endl;
	}



}

