#include "dimentions.h"

// ����������� ��� ����������
dimentions::dimentions(void){
	length = width = depth = 0;	
}

// ���������������� �����������
dimentions::dimentions(int ) {
	cout << "������� �����" << endl;
	cin >> length;
	cout << "������� ������" << endl;
	cin >> width;
	cout << "������� �������" << endl;
	cin >> depth;
}

// ����������� � ����������� 
dimentions::dimentions(int l, int w, int d) {
	length = l;
	width = w;
	depth = d;
}

// ���������� �����������
dimentions::dimentions(const dimentions& temp) {
	length = temp.length; width = temp.width; depth = temp.depth;
}

// ����� ������ ���������
void dimentions::PrintDimentions() {
	cout << "�����: " << length << "\n" << "������: " << width << "\n" << "�������: " << depth << "\n";
	cout << "----------------------------------\n";
}

// ���������� ���������� ����� ��������� ��������� (������������� �������)
dimentions operator++(dimentions&temp) {
	int max = 0;
	if (temp.length > max)
		max = temp.length;
	if (temp.width > max)
		max = temp.width;
	if (temp.depth > max)
		max = temp.depth;
	temp.length += max;
	temp.width += max;
	temp.depth += max;
	
	return temp;
}

// ���������� ����������� ����� ��������� ���������� (������������� �������)
dimentions operator++(dimentions& temp, int) {
	int selected, value;
	cout << "�������� ����� - (1)\n�������� ������ - (2)\n�������� ������� - (3)\n";
	cin >> selected;
	cout << "�� ����� �������� ��������?\n";
	cin >> value;
	if (selected == 1)
		temp.length += value;
	if (selected == 2)
		temp.width += value;
	if (selected == 3)
		temp.depth += value;
	return temp;
}

// ���������� ����������� ����� ��������� ���������� (������������� �������)
dimentions operator--(dimentions& temp, int) {
	int min = 1000000;
	if (temp.length < min)
		min = temp.length;
	if (temp.width <  min)
		min = temp.width;
	if (temp.depth < min)
		min = temp.depth;
	temp.length -= min;
	temp.width -= min;
	temp.depth -= min;
	return temp;
}

// ���������� ���������� ����� ��������� ���������� (�����)
dimentions dimentions::operator--(){
	int selected, value;
	loop1:
	cout << "�������� ����� - (1)\n�������� ������ - (2)\n�������� ������� - (3)\n";
	cin >> selected;
	cout << "�� ����� �������� ��������?\n";
	cin >> value;
	if (selected == 1) {
		if (value > length) {
			cout << "�������� �� ����� ���� ��������������!" << endl;
			system("pause");
			system("cls");
			goto loop1;
		}
		else length -= value;
	}
		
	if (selected == 2) {
		if (value > width) {
			cout << "�������� �� ����� ���� ��������������!" << endl;
			system("pause");
			system("cls");
			goto loop1;
		}
		else width -= value;
	}
		
	if (selected == 3) {
		if (value > depth) {
			cout << "�������� �� ����� ���� ��������������!" << endl;
			system("pause");
			system("cls");
			goto loop1;
		}
		else depth -= value;
	}
		
	return *this;
}