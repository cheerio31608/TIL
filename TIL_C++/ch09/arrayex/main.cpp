#include <iostream>
using namespace std;
// funcMin() ������ ��.
// funcMin() �� int �迭�� �޾Ƽ� ����߿� �ּҰ��� ã�Ƽ� Return �ϴ� �Լ�.
// �迭�� �Ű������� �ѱ� ������ �迭�� ����� ������ ���� �Ѱܾ� �Ѵ�.
// int funcmin(int B[], int n); //����
// int res = funcMin(arrA, 3); //�Լ� call
int main()
{
	int arrA[3] = { 1, 2, 3 };
	int arrB[5] = { 1, 3, 5, 7, 9 };

	cout << "sizeof(arrA): " << sizeof(arrA) << endl;
	//arrB�� ����� ���� ã��

	cout << "arrB�� ����� ����: " << sizeof(arrB) / sizeof(arrB[0]) << endl;
	cout << "arrA: " << arrA << endl; // �迭 arrA�� �����ּҸ� ǥ��
	cout << "&arrA[0]: " << &arrA[0] << endl;
	//arrB = arrA; //�迭�� �̸��� ������ ����̹Ƿ� ������ ���� �߻�




	return 0;
}