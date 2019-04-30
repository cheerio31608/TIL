#include <iostream>
using namespace std;
const int DEFAULT_ARR_SIZE = 4;
class DA {
public:
	int* arr;
	int size;
	DA();
	DA(int arrsize);
	DA(const DA& D);
	~DA();
	DA& operator=(const DA& r); // ���� ���� ������ overloading
};

DA::DA()
{
	cout << "���� ���� ������" << endl;
	size = DEFAULT_ARR_SIZE;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

DA::DA(int arrsize)
{
	cout << "���� �ִ� ������" << endl;
	size = arrsize;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

DA::DA(const DA& D)
{
	cout << "���� ������" << endl;
	size = D.size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = D.arr[i];
	}
}

DA::~DA()
{
	cout << "�Ҹ���" << endl; // ���߿� PUSH�� ������ ���� POP�� �Ǳ� ������, d2�� �Ҹ��ڰ� ���� ����ȴ�
	delete[] arr; arr = NULL;
}

DA& DA::operator=(const DA& r) // ���� ���� ������ overloading
{
	if (this != &r)
	{
		delete[] this->arr;
		this->size = r.size;
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			//��Ұ� ����
			this->arr[i] = r.arr[i];
		}
	}
	return *this;
}

int main()
{
	DA A(2);
	DA B(5);
	A = B;
	for (int i = 0; i < A.size; i++)
	{
		cout << A.arr[i] << " ";
	}
	cout << endl;

	//int n;
	//cout << "�� ���� ������ �Է��Ͻðڼ�?: ";
	//cin >> n;
	//DA d1(n); //���� �ִ� ������ d1.DA(n) called
	//cout << "d1.arr: " << d1.arr << endl;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "���� �Է�: ";
	//	cin >> d1.arr[i];
	//}
	//DA d2(d1); // ���� ���� ������ d2.DA(d1) called.
	//cout << "d2.arr: " << d2.arr << endl;
	//for (int i = 0; i < d2.size; i++)
	//{
	//	cout << d2.arr[i] << " ";
	//}
	//cout << endl;

	//d2 = d1;
	//for (int i = 0; i < d2.size; i++)
	//{
	//	cout << d2.arr[i] << " ";
	//}
	return 0;
}


