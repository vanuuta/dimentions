#include "dimentions.h"

// конструктор без параметров
dimentions::dimentions(void){
	length = width = depth = 0;	
}

// пользовательский конструктор
dimentions::dimentions(int ) {
	cout << "Введите длину" << endl;
	cin >> length;
	cout << "Введите ширину" << endl;
	cin >> width;
	cout << "Введите глубину" << endl;
	cin >> depth;
}

// конструктор с параметрами 
dimentions::dimentions(int l, int w, int d) {
	length = l;
	width = w;
	depth = d;
}

// копирующий конструктор
dimentions::dimentions(const dimentions& temp) {
	length = temp.length; width = temp.width; depth = temp.depth;
}

// метод вывода габаритов
void dimentions::PrintDimentions() {
	cout << "Длина: " << length << "\n" << "Ширина: " << width << "\n" << "Глубина: " << depth << "\n";
	cout << "----------------------------------\n";
}

// перегрузка префиксной формы оператора инкремена (дружественная функция)
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

// перегрузка постфиксной формы оператора инкремента (дружественная функция)
dimentions operator++(dimentions& temp, int) {
	int selected, value;
	cout << "Изменить длину - (1)\nИзменить ширину - (2)\nИзменить глубину - (3)\n";
	cin >> selected;
	cout << "На какое значение изменить?\n";
	cin >> value;
	if (selected == 1)
		temp.length += value;
	if (selected == 2)
		temp.width += value;
	if (selected == 3)
		temp.depth += value;
	return temp;
}

// перегрузка постфиксной формы оператора декремента (дружественная функция)
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

// перегрузка префиксной формы оператора декремента (метод)
dimentions dimentions::operator--(){
	int selected, value;
	loop1:
	cout << "Изменить длину - (1)\nИзменить ширину - (2)\nИзменить глубину - (3)\n";
	cin >> selected;
	cout << "На какое значение изменить?\n";
	cin >> value;
	if (selected == 1) {
		if (value > length) {
			cout << "Габариты не могут быть отрицательными!" << endl;
			system("pause");
			system("cls");
			goto loop1;
		}
		else length -= value;
	}
		
	if (selected == 2) {
		if (value > width) {
			cout << "Габариты не могут быть отрицательными!" << endl;
			system("pause");
			system("cls");
			goto loop1;
		}
		else width -= value;
	}
		
	if (selected == 3) {
		if (value > depth) {
			cout << "Габариты не могут быть отрицательными!" << endl;
			system("pause");
			system("cls");
			goto loop1;
		}
		else depth -= value;
	}
		
	return *this;
}