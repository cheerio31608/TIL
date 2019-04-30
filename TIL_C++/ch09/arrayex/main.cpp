#include <iostream>
using namespace std;
// funcMin() 구현할 것.
// funcMin() 은 int 배열을 받아서 요소중에 최소값을 찾아서 Return 하는 함수.
// 배열을 매개변수로 넘길 때에는 배열의 요소의 개수를 같이 넘겨야 한다.
// int funcmin(int B[], int n); //선언
// int res = funcMin(arrA, 3); //함수 call
int main()
{
	int arrA[3] = { 1, 2, 3 };
	int arrB[5] = { 1, 3, 5, 7, 9 };

	cout << "sizeof(arrA): " << sizeof(arrA) << endl;
	//arrB의 요소의 갯수 찾기

	cout << "arrB의 요소의 갯수: " << sizeof(arrB) / sizeof(arrB[0]) << endl;
	cout << "arrA: " << arrA << endl; // 배열 arrA의 시작주소를 표시
	cout << "&arrA[0]: " << &arrA[0] << endl;
	//arrB = arrA; //배열의 이름은 포인터 상수이므로 컴파일 오류 발생




	return 0;
}