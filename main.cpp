#include"dimentions.h"

int stateMenu;
void Menu() {
	cout << "�������� ��������:\n";
	cout << "���������� ���� ������ �� ������������ �������� ����� ������, ������, ������� (1)\n";
	cout << "���������� �� ��� ����� ������ �� ���������� �� ���� �������� (2)\n";
	cout << "���������� ���� ������ �� ����������� �������� ����� ������, ������, ������� (3)\n";
	cout << "���������� �� ��� ����� ������ �� ���������� �� ���� �������� (4)\n";
	cout << "����� �� ��������� (5)\n";
	cin >> stateMenu;
	if (stateMenu < 1 || stateMenu > 5) { 
		cout << "����������� ��������!";
		system("pause");
		system("cls");
		Menu();
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	int count = 0;
	
	dimentions x(1); system("cls");
	Menu();
	while (stateMenu != 5) {
		switch (stateMenu)
		{
		case 1: {
			cout << "����:\n"; x.PrintDimentions();
			++x;
			cout << "�����:\n"; x.PrintDimentions();
			break;
		}
		case 2: {
			cout << "����:\n"; x.PrintDimentions();
			x++;
			cout << "�����:\n"; x.PrintDimentions();
			break;
		}
		case 3: {
			cout << "����:\n"; x.PrintDimentions();
			x--;
			cout << "�����:\n"; x.PrintDimentions();
			break;
		}
		case 4: {
			cout << "����:\n"; x.PrintDimentions();
			--x;
			cout << "�����:\n"; x.PrintDimentions();
			break;
		}
		default:
			cout << "����������� ��������" << endl;
			break;
		}

		system("pause");
		system("cls");
		Menu();
	}
	///*x.PrintDimentions();
	//++x;
	//x.PrintDimentions();*/
	//y.PrintDimentions();
	//++y;
	//y.PrintDimentions();
	//dimentions z = y;
	//--z;
	//z.PrintDimentions();
	return 0;
}