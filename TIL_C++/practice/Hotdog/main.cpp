#include <iostream>
using namespace std;
class HotDogStand {
private:
	int id;
	int sold;
public:
	HotDogStand();
	~HotDogStand();
	void JustSold();
	void ShowSold(int s);
	static int totalSold;
	static void ShowTotal();
};
int HotDogStand::totalSold = 0;
void HotDogStand::ShowTotal() {
	cout << "total: " << totalSold << endl;
}
HotDogStand::HotDogStand() {
	cout << "���� �ִ� ������" << endl;
	id = 0;
	sold = 0;
}
HotDogStand::~HotDogStand() {
	cout << "�Ҹ���" << endl;	
}
void HotDogStand::JustSold() {
	this->sold = this->sold + 1;
	totalSold++;
}
void HotDogStand::ShowSold(int s) {
		cout << s << "�� ���ĵ忡�� �ȸ� �ֵ��� ����: " << this->sold << endl;
}
int main() 
{
	int space;
	while (true) {
		cout << "�ֵ��� ���ĵ� ����(3~10): ";
		cin >> space;
		if (space >= 3 && space <= 10) {
			HotDogStand *Stand = new HotDogStand[space];
			while (true) {
				char q;
				cout << "ID" << " (0~" << space-1 << ") : ";
				cin >> q;
				int k = 0;
				k = q - 48;
				if (q == 113) {
					for (int j = 0; j < space; j++) {
						Stand[j].ShowSold(j);
					}
					HotDogStand::ShowTotal();
					delete[] Stand; 
					break;
				}
				else if (k >= 0 && k < space) 
					Stand[k].JustSold();
				else {
					cout << "������ Ʋ�Ƚ��ϴ�!" << 
						endl;
				}
			}
			break;
		}
		else {
			cout << "������ Ʋ�Ƚ��ϴ�!" << endl;
		}
	}
	return 0;
}