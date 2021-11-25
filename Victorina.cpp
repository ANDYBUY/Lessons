﻿#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

void menu();

string questions[40][5] = {
		{"Наша планета:", "Марс", "Плутон", "Земля", "Уран"},
		{"Число от 1 до 10:", "11", "Октябрь", "10.4", "7"},
		{"Валентность водорода:", "2", "3", "1", "4"},
		{"Пар в пятницу:", "4", "2", "3", "5"},
		{"Число Пи:", "3.14", "5.6", "4.14", "314"},
		{"Планет в солнечной системе:", "6", "7", "4", "8"},
		{"Строк в этой программе:", "283", "789", "1654", "Много"},
		{"Натуральных чисел", "3", "десять", "9", "0"},
		{"Дней в неделе:", "Воскресенье", "5", "Июль", "7"},
		{"Номер аудитории:", "417", "17", "407", "307"},
		{"Часов в сутках:", "12", "18", "25", "24"},
		{"Дней в году:", "356", "256", "365", "386"},
		{"Ножек у стола:", "4", "8", "12", "666"},
		{"Ножек у табурета:", "36", "3", "1", "Нет"},
		{"Фантазии у автора:", "Кончилась", "Нет", "234", "Восемь"},
		{"Кто из президентов США написал свой собственный рассказ про Шерлока Холмса:","Джон Кеннеди","Франклин Рузвельт","Рональд Рейган"},
		{"Какую пошлину ввели в XII  веке в Англии для того чтобы заставить мужчин пойти на войну:", "Налог на тунеядство", "Налог на трусость", "Налог на отсутствие сапог"},
		{"Откуда пошло выражение <деньги не пахнут>:","От подателей за провоз парфюмерии","От сборов за нестиранные носки","От налога на туалеты"},
		{"Туристы, приезжающие на Майорку, обязаны заплатить налог : ","На плавки","На пальмы","На солнце"},
		{"Основой для «Сказки о рыбаке и рыбке Пушкина послужила сказка братьев Гримм «Рыбак и его жена».В ней немецкая «коллега» нашей старухи превратилась в : ","Папу Римского"," Королеву", "Директора рыбзавода","Командира отряда водолазов"},
		{"Найдите ошибку в отрывке из басни Крылова : «Попрыгунья Стрекоза лето красное пропела; оглянуться не успела, как зима катит в глаза»:","Стрекозы не умеют прыгать","Эти насекомые совсем не издают звуков","Зимы в тех местах, о которых писал Крылов, нет","Здесь нет ошибки, все правильно"},
		{"Российский мультфильм, удостоенный «Оскара», — это : ","«Простоквашино»","«Винни - Пух»","«Старик и море»","«Ну, погоди!»"},
		{"Кто из знаменитых художников за жизнь продал всего одну картину:","Винсент Ван Гог","Пьер Огюст Ренуар"},
		{"Один известный писатель рассказывал, что списал образ старушки - вредины со своей бывшей жены.При этом бабулька оказалась удивительно похожей на Коко Шанель.На голове у нее всегда была шляпка со складной тульей, благодаря которой она и получила прозвище : ","Шапокляк","Красная Шапочка","Мадам Баттерфляй"},
		{ "Что в Российской империи было вещевым эквивалентом денег : ","Шкуры пушных зверей","Крупный рогатый скот","Табак","Женские серьги"},
		{"У индейцев из немногочисленного североамериканского племени квакиутл есть традиция : беря деньги в долг, они оставляют в залог : ", "Душу","Имя","Скальп тещи","Амулет"},
		{"Какая кошка самая большая на планете : ","Лев","Тигр","Гепард","Барс"},
		{"Какое сухопутное животное может открыть рот максимально широко : ","Аллигатор","Крокодил","Бабуин","Бегемот"},
		{"Какое животное самое крупное на Земле : ","Африканский слон","Синий кит","Кашалот","Гигантский кальмар"},
		{"Какое млекопитающее умеет летать : ","Летучая мышь","Белка - летяга","Белоголовый орлан","Колуго"},
		{"Как называется животное, которое употребляет в пищу растения и мясо : ","Плотоядное животное"," Травоядное животное","Всеядное животное","Пескатариан"},
		{"Почему каланы(«морские выдры») держатся за руки : ","Потому что они любят друг друга","Чтобы показать, что они в одной семье","Чтобы они не уплывали, когда спят","Потому что они играют"},
		{"Как отличить насекомое от паука:","У насекомых три части тела, у пауков – две","У насекомых шесть ног, у пауков – восемь","У насекомых могут быть крылья, у пауков они отсутствуют","Все вышеперечисленные факты"},
		{"Чем утконос отличается от других млекопитающих : ","Крякает, как утка","Откладывает яйца","Строит гнезда","Ковыляет"},
		{"Почему змеи высовывают язык : ","Чтобы напугать хищников ","Чтобы облизать добычу","Чтобы издать шипящий звук","Чтобы «понюхать» воздух"},
		{"Как называется явление, обозначающее, что на Земле не осталось ни одного животного конкретного вида : ","Эволюция","Сохранение","Вымирание","Находящиеся под угрозой исчезновения"},
		{"Какая планета самая большая в Солнечной системе : ","Юпитер","Сатурн","Нептун","Меркурий"},
		{"На какой планете самый короткий день : ","Меркурий","Земля","Нептун","Юпитер"},
		{"Какая звезда ближе всего к Земле : " "Полярная звезда","Сириус","Солнце","Андромеда"},
		{"Как называется метеорит, который упал на Землю 15 февраля 2013 года:","Тунгусский","Челябинский","ГобаАльенде"}
};

int answers[40][2] = {
	{1,3},
	{2,4},
	{3,3},
	{4,3},
	{5,1},
	{6,4},
	{7,1},
	{8,2},
	{9,4},
	{10,3},
	{11,4},
	{12,3},
	{13,4},
	{14,2},
	{15,2},
	{16,2},
	{17,2},
	{18,3},
	{19,3},
	{20,1},
	{21,2},
	{22,3},
	{23,1},
	{24,1},
	{25,1},
	{26,2},
	{27,2},
	{28,4},
	{29,2},
	{30,1},
	{31,3},
	{32,3},
	{33,4},
	{34,2},
	{35,4},
	{36,3},
	{37,1},
	{38,4},
	{39,3},
	{40,2}
};

int attempt = 1;
int difficulty = 10;

void game()
{
	vector<int> x(40);
	int mark = 0;
	int o = 0;
	int ans;

	for (int p = 0; p < 40; p++) {
		x[p] = p;
	}
	srand(unsigned(time(0)));
	random_shuffle(x.begin(), x.end());

	for (int i = 1; i <= difficulty; i++)
	{
		cout << "[+]Вопрос ";
		cout << i;
		cout << "\t\t\t\tБаллы: ";
		cout << mark;
		cout << "\n";

		int qnumber;
		qnumber = x[o];
		cout << questions[qnumber][0];
		cout << "\n";
		for (int j = 1; j < 5; j++)
		{
			cout << "[" << j << "]";
			cout << questions[qnumber][j];
			cout << "\n";
		}
		cout << "[5]50 на 50\n";

		int answer;
		cin >> answer;
		if (answer == answers[qnumber][1])
		{
			mark++;
			cout << "Правильный ответ!\n\n";
		}
		else if (answer == 5)
		{
			if (attempt > 0)
			{
				attempt--;
				if (answers[qnumber][1] == 1)
				{
					ans = 3;
				}
				else if (answers[qnumber][1] == 2)
				{
					ans = 4;
				}
				else if (answers[qnumber][1] == 3)
				{
					ans = 2;
				}
				else if (answers[qnumber][1] == 4)
				{
					ans = 1;
				}
				cout << "[" << ans << "]" << questions[qnumber][ans];
				cout << "\n";
				cout << "[" << answers[qnumber][1] << "]" << questions[qnumber][answers[qnumber][1]];
				cout << "\n";
				cin >> answer;
				if (answer == answers[qnumber][1])
				{
					mark++;
					cout << "Правильный ответ!\n\n";
				}
				else
				{
					cout << "Неправильный ответ!\n";
				}
			}
			else
			{
				cout << "У Вас не осталось попыток\n";
			}
		}
		else
		{
			cout << "Неправильный ответ!\n";
		}
		o++;
	}
	cout << "Итого баллов: ";
	cout << mark;
}

void play()
{
	system("cls");
	game();
}

void settings()
{
	system("cls");
	cout << "[+]Выбор сложности\n";
	cout << "[1]5 Вопросов\n";
	cout << "[2]10 Вопросов\n";
	cout << "[3]15 Вопросов\n";
	int diff;
	cin >> diff;
	switch (diff)
	{
	case 1:
		difficulty = 5;
		break;
	case 2:
		difficulty = 10;
		break;
	case 3:
		difficulty = 15;
		break;
	default:
		cout << "Неверное значение";
		break;
	}
	system("cls");
	menu();
}

int exit()
{
	return 0;
}

void rules()
{
	system("cls");
	cout << "Отвечайте на вопросы правильно.\n";
	cout << "Каждый правильный ответ даёт 1 балл.\n";
	cout << "\"50 на 50\" можно использовать только 1 раз, при второй попытке балл получить нельзя, появится следующий вопрос.\n";
	cout << "Введите любое значение чтобы вернуться в Меню\n";
	string r;
	cin >> r;
	if (r != "Пока я это писал, я приисполнился больше, чем за все учебные часы.")
	{
		system("cls");
		menu();
	}
}

void menu()
{
	int i = 1;
	while (i == 1) {
		cout << "[1]Играть\n";
		cout << "[2]Настройки\n";
		cout << "[3]Правила\n";
		cout << "[4]Выход\n";
		short choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			i++;
			play();
			break;
		case 2:
			i++;
			settings();
			break;
		case 3:
			i++;
			rules();
			break;
		case 4:
			i++;
			exit();
		default:
			system("cls");
			cout << "Неверное значение";
		}
	}
}

int main()
{
	setlocale(0, "");
	menu();
	return 0;
};