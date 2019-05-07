//Account 객체를 구현하라. 
//Account 객체는 사용자의 계좌 ID, 잔액, 이름을 맴버 변수로 가지는 객체이다.

//메뉴와 객체를 구현하라.
//
//<조건>
//
//1. 정적 객체 포인터 배열로 구현할 것.
//
//2. NAME_MAX = 20, ACC_MAX = 10으로 상수 선언.
//
//3. name 은 반드시 char* 로 구현할 것.
//
//4. Rule of Three 를 잘 지킬 것.(destructor, copy constructor, copy assignment operator)
//
//5. ID를 입력할 때는 Unique 하게 입력. (ID가 겹치지 않도록 입력할 것)
//
//6. 클래스 당 1개의 헤더, 1개의 cpp 파일을 가질 것.

#include <iostream>
using namespace std;
const int NAME_MAX = 20;
const int ACC_MAX = 10;

class Account{
public:
	Account();
	Account(int s, int r, char t);
	Account(const Account &S);
	~Account();
	int Inmoney(int bal);
	bool Outmoney(int bal);
	void ShowAllData();
private:
	int id;
	char* name;
	int balance;

};
Account::Account() {
	cout << "인자 없는 생성자 " << endl;
}
Account::Account(int i, int b, char n) {

	cout << "인자 있는 생성자 " << endl;
}
Account::Account(const Account &S) {
	cout << "복사 생성자 " << endl;
}
Account::~Account() {
	cout << "소멸자 " << endl;
}

	
		
int Account::Inmoney(int bal) {
	return 0;
}
bool Account::Outmoney(int bal) {
	return 0;
}
void Account::ShowAllData() {

}
void PrintMenu();


int main()
{
	int choice;
	int id, balance;
	char name[NAME_MAX];
	Account *ptrArr[ACC_MAX];
	while (true) {		
		PrintMenu();
		cout << "선택 : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "계좌개설을 위한 입력(계좌ID 잔액 이름): ";
			cin >> id >> balance; 
			cin.getline(name, NAME_MAX);
			ptrArr[0] = new Account(id, balance, name);
			break;
		case 2:
			cout << "계좌 ID: ";
			cout << "입금액: ";
			break;
		case 3:
			cout << "계좌 ID: ";
			cout << "출금액: ";
			break;
		case 4:
			break;		
		case 5:
			return 0;
		default:
			cout << "선택이 틀렸습니다!" << endl;
		}
	}
	return 0;
}

void PrintMenu()
{
	cout << "---------------MENU---------------" << endl;
	cout << "1. 계좌 개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 전체조회" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "" << endl;
}