
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
int sumOfMatrix(int arr[100][100], int lenthR, int lenthC) 
{
	int sum = 0;
	for (int i = 0; i < lenthR; i++)
	{
		for (int j = 0; j < lenthC; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}
int main()
{
	srand((unsigned)time(NULL));
	cout << "random array: " << endl;
	int arr[100][100];
	int lenthR = 3;
	int lenthC = 3;
	fillRandomArray(arr, lenthR, lenthC);
	cout << "first Mtrix:" << endl;
	printArray(arr, lenthR, lenthC);
	cout << endl << "sum:" << sumOfMatrix(arr, lenthR, lenthC) << endl;

	






}

