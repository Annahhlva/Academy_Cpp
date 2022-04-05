#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	int num1, num2, a, b, ch, right = 0, que_count, ans;
	int random1, random2, random3, random4;

	random1 = (rand() % 10) + 1;
	random2 = (rand() % 10) + 1;
	random3 = (rand() % 5) + 1;
	random4 = (rand() % 5) + 1;

	cout << "~Проверь знание таблицы умножения~" << endl;
	cout << "Чтобы выйти введи '0'" << endl;

	do {
		cout << "Выбери уровень сложности (1-легкий, 2-средний, 3-сложный): ";
		cin >> ch;
		switch (ch)
		{
		case 0: {
			cout << "Вы вышли";
			break;
		}
		case 1: {
			cout << "*Легкий уровень*" << endl;
			right = 0;
			que_count = 3;
			num1 = 1;
			num2 = 4;
			break;
		}
		case 2: {
			cout << "*Средний уровень*" << endl;
			right = 0;
			que_count = 6;
			num1 = 3;
			num2 = 6;
			break;
		}
		case 3: {
			cout << "*Сложный уровень*" << endl;
			right = 0;
			que_count = 10;
			num1 = 3;
			num2 = 9;
			break;
		}
		{
		default:
			cout << "Число введено неверно" << endl;
			break;
		}
		}
		for (int i = 1; i <= que_count; i++) {
			a = rand() % num2 + num1;
			b = rand() % num2 + num1;
			cout << i << ") " << a << " * " << b << " = ";
			cin >> ans;
			if (ans == a * b) {
				right++;
			}
		}
		cout << "Правильных ответов: " << right << " из " << que_count << endl;
	} while (ch != 0);



	system("pause");
	return 0;
}