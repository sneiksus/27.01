#include <iostream>
#include<string>
#include <ctime>
using namespace std;

int main()
//{
//	const int sizeA = 10, sizeB = 15;
//	srand(time(0));
//	int arrA[sizeA], arrB[sizeB],sum[sizeA+sizeB],arrX[sizeA],arrZ[sizeB];
//	cout << "\t\tA\n";
//	for (int i = 0; i < sizeA; i++)
//	{
//		arrA[i] = rand() % (100 - 1 + 1) - 1;
//		cout << "Element" << i << "  " << arrA[i] << endl;
//	}
//	cout << "\t\tB\n";
//	for (int i = 0; i < sizeB; i++)
//	{
//		arrB[i] = rand() % (100 - 1 + 1) - 1;
//		cout << "Element" << i << "  " << arrB[i] << endl;
//	}
//	cout << "\t\tSUM\n";
//	for (int a = 0,b=0; a < sizeA+sizeB; a++)
//	{
//		if (a < sizeA)
//			sum[a] = arrA[a];
//		else
//		{
//			sum[a] = arrB[b];
//			b++;
//		}
//		cout << "Element" << a << "  " << sum[a] << endl;
//	}
//	cout << "\t\tX\n";
//	for (int i = 0; i < sizeA; i++)
//	{
//		arrX[i] = sum[i];
//		cout << "Element" << i << "  " << arrX[i] << endl;
//	}
//	cout << "\t\tZ\n";
//	for (int i = 0,b=sizeA; i < sizeB; i++,b++)
//	{
//		arrZ[i] = sum[b];
//		cout << "Element" << i << "  " << arrZ[i] << endl;
//	}
//	cout << "\n\n\n";
//}
//arr[i] = rand() % (10 - 1 + 1) - 1;


//{
//	const int size = 10;
//	int arr[size];
//
//	for (int i = 0; i < size; i++)
//		cin >> arr[i];
//	short value = arr[0];
//	for (int i = 0; i < size; i++)
//		arr[i] = arr[i + 1];
//	arr[size - 1] = value;
//	for (int i = 0; i < size; i++)
//		cout << arr[i] << endl;
//}

//{
//	const int size = 10;
//	int arrA[size], arrB[size];
//	for (int i = 0; i < size; i++)
//			cin >> arrA[i];
//	arrB[size - 1] = arrA[0];
//	for (int i = 0; i < size-1; i++)
//	{
//		arrB[i] = arrA[i + 1];
//	}
//	for (int i = 0; i < size; i++)
//		cout << arrB[i] << endl;
//}
//
//{
//	const int size = 5;
//	int arrA[size], arrB[size];
//	for (int i = 0; i < size; i++)
//		cin >> arrA[i];
//	arrB[0] = arrA[size-1];
//	for (int i = 0; i < size - 1; i++)
//	{
//		arrB[i+1] = arrA[i];
//	}
//	for (int i = 0; i < size; i++)
//		cout << arrB[i] << endl;
//}

{
	const short cols = 5, rows = 4;
	int arr[rows] [cols]{ {1,2},{2,4},5 };
	for (int a = 0; a < rows; a++)
	{
		for (int b = 0; b < cols; b++)
		{
			cout << arr[a][b] << "\t";
		}
		cout << endl;
	}
}