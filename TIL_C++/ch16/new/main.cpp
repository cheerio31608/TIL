#include <iostream>
using namespace std;
const int MAX = 100;
char* RevStr(char* orig, int len);
char* RevStrStatic(char* orig, int len);
int main()
{
	char orig[] = "ABCDE";
	int len = strlen(orig);
	//함수 RevStr() 호출할 것.
	char* copy = RevStr(orig, len);
	//char* rev = new char[len + 1];
	////문자열을 역순으로 복사한다.
	//for (int i = 0; i < len; i++)
	//{
	//	rev[i] = orig[len - i - 1];
	//}
	//
	//rev[len] = NULL;
	cout << "orig : " << orig << endl;
	cout << "copy : " << copy << endl;
	delete[] copy; copy = NULL;
	char* copy2 = RevStrStatic(orig, len); //rev의 주소가 가리키는값 반환 = garvage(원래 저장된 것은 함수가 끝나며 POP된다)
	cout << "orig : " << orig << endl;
	cout << "copy2 : " << copy2 << endl;
	return 0;
}

char* RevStr(char* orig, int len)
{
	char* rev = new char[len + 1];
	//문자열을 역순으로 복사한다.
	for (int i = 0; i < len; i++)
	{
		rev[i] = orig[len - i - 1];
	}

	rev[len] = NULL;
	return rev;
}

char* RevStrStatic(char* orig, int len)
{
	//정적 메모리 할당 후 reverse string 하기
	char rev[MAX];
	//문자열을 역순으로 복사한다.
	for (int i = 0; i < len; i++)
	{
		rev[i] = orig[len - i - 1];
	}

	rev[len] = NULL;
	return rev;
}
