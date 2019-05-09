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
		cout << "���� : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "���°����� ���� �Է�(����ID �ܾ� �̸�): ";
			cin >> id >> balance; 
			cin.getline(name, NAME_MAX);
			ptrArr[i] = new Account(id, balance, name);
			i++;
			break;
		case 2:
			int i_id, i_money;
			cout << "���� ID: ";
			cin >> i_id;
			cout << "�Աݾ�: ";
			cin >> i_money;
			Account *input;
			input = new Account(i_id);
			for (int j = 0; j < i; j++) {
				if (input == ptrArr[j]) {
					ptrArr[j]->Inmoney(i_money);
					break;
				}
			}
			cout << "�������� �ʴ� ID�Դϴ�." << endl;
			break;
		case 3:
			int o_id, o_money;
			cout << "���� ID: ";
			cin >> o_id;
			cout << "��ݾ�: ";
			cin >> o_money;
			Account *output;
			output = new Account(i_id);
			for (int j = 0; j < i; j++) {
				if (output == ptrArr[j]) {
					ptrArr[j]->Outmoney(o_money);
					break;
				}
			}
			cout << "�������� �ʴ� ID�Դϴ�." << endl;
			
			break;
		case 4:
			for (int j = 0; j < i; j++) {
				ptrArr[j]->ShowAllData();
			}
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