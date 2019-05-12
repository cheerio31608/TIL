//Account ��ü�� �����϶�. 
//Account ��ü�� ������� ���� ID, �ܾ�, �̸��� �ɹ� ������ ������ ��ü�̴�.

//�޴��� ��ü�� �����϶�.
//
//<����>
//
//1. ���� ��ü ������ �迭�� ������ ��.
//
//2. NAME_MAX = 20, ACC_MAX = 10���� ��� ����.
//
//3. name �� �ݵ�� char* �� ������ ��.
//
//4. Rule of Three �� �� ��ų ��.(destructor, copy constructor, copy assignment operator)
//
//5. ID�� �Է��� ���� Unique �ϰ� �Է�. (ID�� ��ġ�� �ʵ��� �Է��� ��)
//
//6. Ŭ���� �� 1���� ���, 1���� cpp ������ ���� ��.

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
	cout << "���� ���� ������ " << endl;
}
Account::Account(int i, int b, char n) {

	cout << "���� �ִ� ������ " << endl;
}
Account::Account(const Account &S) {
	cout << "���� ������ " << endl;
}
Account::~Account() {
	cout << "�Ҹ��� " << endl;
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
		cout << "���� : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "���°����� ���� �Է�(����ID �ܾ� �̸�): ";
			cin >> id >> balance; 
			cin.getline(name, NAME_MAX);
			ptrArr[0] = new Account(id, balance, name);
			break;
		case 2:
			cout << "���� ID: ";
			cout << "�Աݾ�: ";
			break;
		case 3:
			cout << "���� ID: ";
			cout << "��ݾ�: ";
			break;
		case 4:
			break;		
		case 5:
			return 0;
		default:
			cout << "������ Ʋ�Ƚ��ϴ�!" << endl;
		}
	}
	return 0;
}

void PrintMenu()
{
	cout << "---------------MENU---------------" << endl;
	cout << "1. ���� ����" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. ��ü��ȸ" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "" << endl;
}