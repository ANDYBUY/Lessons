#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int figure, type, length, size, hight = 0;
	int count = 1;
	char texture = ' ';

	cout << "[+]Программа - \"Геометрические фигуры\"" << endl;
	cout << "[1]Линия" << endl;
	cout << "[2]Квадрат" << endl;
	cout << "[3]Прямоугольник" << endl;
	cout << "[4]Прямоугольник пустой" << endl;
	cout << "[5]Квадрат пустой" << endl;
	cout << "[6]Треугольник пустой" << endl;
	cout << "[7]Треугольник" << endl;
	cout << "[8]Круг" << endl;
	cout << "[9]Крест" << endl;
	cout << "[10]Квадрат в квадрате" << endl;
    cout << "[+]Выберите фигуру: " << endl;
	cin >> figure;

	switch (figure)
	{
	case 1:
		system("cls");
		cout << "[+]Выберите тип: " << endl;
		cout << "[1]Горизонтальная" << endl;
		cout << "[2]Вертикальная" << endl;
		cin >> type;

		switch (type)
		{
		case 1:
			cout << "[+]Текстура линии: " << endl;
			cin >> texture;
			system("cls");
			cout << "[+]Длинна линии: " << endl;
			cin >> length;

			system("cls");
			while (count < length + 1)
			{
				cout << texture;
				count++;
			}

		case 2:
			cout << "[+]Текстура линии: " << endl;
			cin >> texture;
			cout << "[+]Длинна линии: " << endl;
			cin >> length;

			system("cls");
			while (count < length + 1)
			{
				cout << texture << endl;
				count++;
			}
			break;
		default:
			cout << "[+]Указанного типа нет в списке.";
		}
		break;
	default:
		cout << "[+]Указанной фигуры нет в списке.";
		break;
	case 2:
		system("cls");
		cout << "[+]Размер: " << endl;
		cin >> size;

		cout << "[+]Текстура: " << endl;
		cin >> texture;
		system("cls");

		for (int y = 0; y < size; y++) {
			for (int x = 0; x < size; x++) {
				cout << texture;
			}
			cout << endl;

		}
		break;
	case 3:
		system("cls");
		cout << "[+]Длина: " << endl;
		cin >> length;
		cout << "[+]Высота: " << endl;
		cin >> hight;

		cout << "[+]Текстура: " << endl;
		cin >> texture;
		system("cls");

		for (int y = 0; y < hight; y++) {
			for (int x = 0; x < length; x++) {
				cout << texture;
			}
			cout << endl;

		}
		break;
	case 4:
		system("cls");
		cout << "[+]Длина: " << endl;
		cin >> length;
		cout << "[+]Высота: " << endl;
		cin >> hight;

		cout << "[+]Текстура: " << endl;
		cin >> texture;
		system("cls");
		for (int x = 0; x < length; x++) {
			cout << texture;
		}
		cout << endl;
		for (int y = 0; y < hight; y++) {
			cout << texture;
			for (int x = 0; x < length - 2; x++) {
				cout << " ";
			}
			cout << texture << endl;

		}
		for (int x = 0; x < length; x++) {
			cout << texture;
		}
		break;
	case 5:
		system("cls");
		cout << "[+]Размер: " << endl;
		cin >> size;

		cout << "[+]Текстура: " << endl;
		cin >> texture;
		system("cls");
		for (int y = 0; y < size; y++)
		{
			for (int x = 0; x < size; x++)
			{
				if (y == 0 || y == size - 1 || x == 0 || x == size - 1)
				{
					cout << texture;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	case 6:
		system("cls");
		cout << "[+]Размер: " << endl;
		cin >> size;

		cout << "[+]Текстура: " << endl;
		cin >> texture;
		system("cls");
		for (int y = 0; y < size; y++)
		{
			for (int x = 0; x < size; x++)
			{
				if (x == size / 2 - y || x == size / 2 + y || y == size / 2)
				{
					cout << texture;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	case 7:
		system("cls");
		cout << "[+]Размер: " << endl;
		cin >> size;

		cout << "[+]Текстура: " << endl;
		cin >> texture;
		system("cls");
		for (int y = 0; y < size; y++)
		{
			for (int x = 0; x < size; x++)
			{
				if (x >= size / 2 - y && x <= size / 2 + y && y <= size / 2)
				{
					cout << texture;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	case 8:
		system("cls");
		cout << "[+]Размер: " << endl;
		cin >> size;

		cout << "[+]Текстура: " << endl;
		cin >> texture;
		system("cls");
		for (int y = -size; y <= size; y++)
		{
			for (int x = size; x >= -size; x--)
			{
				if (x * x + y * y == size * size)
				{
					cout << texture << " ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 9:
		system("cls");
		cout << "[+]Размер: " << endl;
		cin >> size;

		cout << "[+]Текстура: " << endl;
		cin >> texture;
		system("cls");
		for (int y = 0; y < size; y++)
		{
			for (int x = 0; x < size; x++)
			{
				if (x == size / 2 || y == size / 2)
				{
					cout << texture;
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}

	case 10:

		system("cls");
		cout << "[+]Размер: " << endl;
		cin >> size;
		cout << "[+]Текстура: " << endl;
		cin >> texture;
		system("cls");

		for (int y = 0; y < size; y++)
		{
			for (int x = 0; x < size; x++)
			{
				for (int interval = 0; interval < size / 2; interval = interval + 2)
				{
					if ((size - 1 - interval) >= x && x >= interval && (y == interval || y == size - 1 - interval))
					{
						cout << texture;
					}
					else if ((size - 1 - interval) >= y && y >= interval && (x == interval || x == size - 1 - interval))
					{
						cout << texture;
					}
					else if ((size - 2 - interval) >= x && x >= interval + 1 && (y == interval + 1 || y == size - 2 - interval))
					{
						cout << " ";
					}
					else if ((size - 2 - interval) >= y && y >= interval + 1 && (x == interval + 1 || x == size - 2 - interval))
					{
						cout << " ";
					}

				}
			}
			cout << endl;
		}
	}





	int _;
	cin >> _;
}
