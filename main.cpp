#include"dimentions.h"

int stateMenu;
void Menu() {
	cout << "Выберите действие:\n";
	cout << "Увеличение всех данных на максимальное значение среди высоты, ширины, глубины (1)\n";
	cout << "Увеличение на ваш выбор одного из параметров на ваше значение (2)\n";
	cout << "Уменьшение всех данных на минимальное значение среди высоты, ширины, глубины (3)\n";
	cout << "Уменьшение на ваш выбор одного из параметров на ваше значение (4)\n";
	cout << "Выход из программы (5)\n";
	cin >> stateMenu;
	if (stateMenu < 1 || stateMenu > 5) { 
		cout << "Неизвестное действие!";
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
			cout << "БЫЛО:\n"; x.PrintDimentions();
			++x;
			cout << "СТАЛО:\n"; x.PrintDimentions();
			break;
		}
		case 2: {
			cout << "БЫЛО:\n"; x.PrintDimentions();
			x++;
			cout << "СТАЛО:\n"; x.PrintDimentions();
			break;
		}
		case 3: {
			cout << "БЫЛО:\n"; x.PrintDimentions();
			x--;
			cout << "СТАЛО:\n"; x.PrintDimentions();
			break;
		}
		case 4: {
			cout << "БЫЛО:\n"; x.PrintDimentions();
			--x;
			cout << "СТАЛО:\n"; x.PrintDimentions();
			break;
		}
		default:
			cout << "Неизвестное действие" << endl;
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