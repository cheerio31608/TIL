#include <iostream>
using namespace std;
int main()
{
	
	double a = -999, b = -888, c = -777;
	double* pArray[3];
	pArray[0] = &a;
	pArray[1] = &b;
	pArray[2] = &c;
	//�迭 �̸��� ����� index ǥ������ a, b, c�� �������
	for (int i = 0; i < 3; i++)
	{
		cout << *pArray[i] << endl;
	}
	//�迭 �̸��� �̿��� ������ ǥ������ a, b, c�� �������
	for (int i = 0; i < 3; i++)
	{
		cout << **(pArray + i) << endl;
	}
	
	//int A[10] = { -999, -888, -777, -666, -555 };
	//int* p = A;
	//for (int i = 0; i < 10; i++)
	//{
	//	//*++p = i * i; memory around A is corrupted
	//	*p++ = i * i;
	//	//* dereferencing
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << A[i] << " ";
	//}

	return 0;
}