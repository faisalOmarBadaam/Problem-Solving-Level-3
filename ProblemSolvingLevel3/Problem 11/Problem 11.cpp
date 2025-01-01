
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
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}
int randomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}
void fillRandomArray(int arr[100][100], int lenthR, int lenthC)
{
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++) {
			arr[i][j] = randomNumber(1, 10);
		}
	}
}
bool areEqualMatrix(int arr1[100][100], int arr2[100][100], int lenthR, int lenthC) {
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++) {
			if (arr1[i][j] != arr2[i][j]) {
				return false;
			}
		}
	}
	return true;
}
int main()
{
	srand((unsigned)time(NULL));
	cout << "random array: " << endl;
	int arr[100][100];
	int arr2[100][100];
	int lenthR = 3;
	int lenthC = 3;
	fillRandomArray(arr, lenthR, lenthC);
	fillRandomArray(arr2, lenthR, lenthC);

	cout << "first Mtrix:" << endl;
	printArray(arr, lenthR, lenthC);
	cout <<endl<<"second Mtrix:" << endl;
	printArray(arr2, lenthR, lenthC);
	if (areEqualMatrix(arr,arr,lenthR,lenthC))
	{
		cout << endl << "equal matrices";
	}
	else
	{
		cout << endl << "not equal matrices";

	}








}

