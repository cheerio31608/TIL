#include <iostream>
#include <cstring>
using namespace std;
int main()
{	
	

	char password[100];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;

	while (true)
	{
		//loop Ż�� ���� �Էµ� ���ڿ��� "alpha go" �϶�
		//strcmp()�� ������ 0�� �����Ѵ�.
		cout << "��ȣ: ";
		cin.getline(password, 100, '\n');
		if (strcmp(password, "alpha go") == 0) {
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else if (strcmp(password, "\0") == 0) {
			cout << "���ͷ� ����." << endl;
			break;
		}

		else
			cout << "��ȣ�� Ʋ�Ƚ��ϴ�." << endl;
	}


	return 0;
}