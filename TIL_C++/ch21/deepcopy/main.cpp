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
	DA& operator=(const DA& r); // 깊은 대입 연산자 overloading
};

DA::DA()
{
	cout << "인자 없는 생성자" << endl;
	size = DEFAULT_ARR_SIZE;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

DA::DA(int arrsize)
{
	cout << "인자 있는 생성자" << endl;
	size = arrsize;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

DA::DA(const DA& D)
{
	cout << "복사 생성자" << endl;
	size = D.size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = D.arr[i];
	}
}

DA::~DA()
{
	cout << "소멸자" << endl; // 나중에 PUSH된 스택이 먼저 POP이 되기 때문에, d2의 소멸자가 먼저 실행된다
	delete[] arr; arr = NULL;
}

DA& DA::operator=(const DA& r) // 깊은 대입 연산자 overloading
{
	if (this != &r)
	{
		delete[] this->arr;
		this->size = r.size;
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			//요소간 대입
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
	//cout << "몇 개의 정수를 입력하시겠소?: ";
	//cin >> n;
	//DA d1(n); //인자 있는 생성자 d1.DA(n) called
	//cout << "d1.arr: " << d1.arr << endl;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "정수 입력: ";
	//	cin >> d1.arr[i];
	//}
	//DA d2(d1); // 깊은 복사 생성자 d2.DA(d1) called.
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


