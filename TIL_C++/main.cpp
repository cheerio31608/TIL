#include <iostream>
#include "Account.h"
using namespace std;
const int NAME_MAX = 20;
const int ACC_MAX = 10;
void PrintMenu();
int main()
{
	int choice;
	int id, balance;
	int i = 0;
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
			ptrArr[i] = new Account(id, balance, name);
			i++;
			break;
		case 2:
			int i_id, i_money;
			cout << "계좌 ID: ";
			cin >> i_id;
			cout << "입금액: ";
			cin >> i_money;
			Account *input;
			input = new Account(i_id);
			for (int j = 0; j < i; j++) {
				if (input == ptrArr[j]) {
					ptrArr[j]->Inmoney(i_money);
					break;
				}
			}
			cout << "존재하지 않는 ID입니다." << endl;
			break;
		case 3:
			int o_id, o_money;
			cout << "계좌 ID: ";
			cin >> o_id;
			cout << "출금액: ";
			cin >> o_money;
			Account *output;
			output = new Account(i_id);
			for (int j = 0; j < i; j++) {
				if (output == ptrArr[j]) {
					ptrArr[j]->Outmoney(o_money);
					break;
				}
			}
			cout << "존재하지 않는 ID입니다." << endl;
			
			break;
		case 4:
			for (int j = 0; j < i; j++) {
				ptrArr[j]->ShowAllData();
			}
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