#include <iostream>
using namespace std;
int main()
{
	int A[10] = { -999 };
	int* p = A;
	//1. �迭���� ����� index ǥ��
	//2. �迭���� ����� ������ ǥ��
	cout << "A : " << A << endl;
	for (int i = 0; i < 10; i++)
	{
		*(A + i) = i * i;
	}
	cout << "A : " << A << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;



	//3. �迭���� ������ ������ ������ ����� ������ ǥ��
	cout << "p : " << p << endl;
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i * i * i;
	}
	cout << "p : " << p << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	//4. �迭���� ������ ������ ������ ����� index ǥ��
	






	//int i;
	//int* p = &i;
	//cout << "p : " << p << endl;
	//cout << "p++ : " << p++ << endl;
	//short A[10] = { 3, 8, 237, 14, 24, 25, 1, 6, 35, 45 };
	//short* p1 = &A[3];
	//short* p2 = &A[7];
	//cout << "p1 : " << p1 << endl;
	//cout << "p2 : " << p2 << endl;
	//cout << "p2 - p1 : " << p2 - p1 << endl;
	return 0;
}