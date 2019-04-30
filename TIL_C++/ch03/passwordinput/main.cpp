#include <iostream>
#include <cstring>
using namespace std;
int main()
{	
	

	char password[100];
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;

	while (true)
	{
		//loop 탈출 조건 입력된 문자열이 "alpha go" 일때
		//strcmp()는 같을때 0을 리턴한다.
		cout << "암호: ";
		cin.getline(password, 100, '\n');
		if (strcmp(password, "alpha go") == 0) {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else if (strcmp(password, "\0") == 0) {
			cout << "엔터로 종료." << endl;
			break;
		}

		else
			cout << "암호가 틀렸습니다." << endl;
	}


	return 0;
}