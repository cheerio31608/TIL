#include <iostream>
using namespace std;
const int MAX = 100;
char* RevStr(char* orig, int len);
char* RevStrStatic(char* orig, int len);
int main()
{
	char orig[] = "ABCDE";
	int len = strlen(orig);
	//�Լ� RevStr() ȣ���� ��.
	char* copy = RevStr(orig, len);
	//char* rev = new char[len + 1];
	////���ڿ��� �������� �����Ѵ�.
	//for (int i = 0; i < len; i++)
	//{
	//	rev[i] = orig[len - i - 1];
	//}
	//
	//rev[len] = NULL;
	cout << "orig : " << orig << endl;
	cout << "copy : " << copy << endl;
	delete[] copy; copy = NULL;
	char* copy2 = RevStrStatic(orig, len); //rev�� �ּҰ� ����Ű�°� ��ȯ = garvage(���� ����� ���� �Լ��� ������ POP�ȴ�)
	cout << "orig : " << orig << endl;
	cout << "copy2 : " << copy2 << endl;
	return 0;
}

char* RevStr(char* orig, int len)
{
	char* rev = new char[len + 1];
	//���ڿ��� �������� �����Ѵ�.
	for (int i = 0; i < len; i++)
	{
		rev[i] = orig[len - i - 1];
	}

	rev[len] = NULL;
	return rev;
}

char* RevStrStatic(char* orig, int len)
{
	//���� �޸� �Ҵ� �� reverse string �ϱ�
	char rev[MAX];
	//���ڿ��� �������� �����Ѵ�.
	for (int i = 0; i < len; i++)
	{
		rev[i] = orig[len - i - 1];
	}

	rev[len] = NULL;
	return rev;
}
