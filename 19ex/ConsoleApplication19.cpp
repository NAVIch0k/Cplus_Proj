#include <iostream>
#include <ctime>
#include <chrono>
#include <string>
#include <array>
#include <xstring>
using namespace std;
using namespace chrono;

string sort(int n, int size, int arr_val, int iter, string words[]) {
	srand(time(NULL));
	int random = 0;
	string answer;
	int arr[15]{ arr_val,arr_val,arr_val,arr_val,arr_val,arr_val,arr_val,arr_val,arr_val,arr_val,arr_val,arr_val,arr_val,arr_val,arr_val };
	int iteration = iter;
	while (iteration > 0)
	{
		random = rand() % size;
		bool check = true;
		for (int i = 0; i < 15 - n; i++)
		{
			if (arr[i] == random)
			{
				random = rand() % size;
				i = -1;
			}
		}
		for (int i = 0; i < 15 - n && check; i++)
		{
			if (arr[i] == arr_val)
			{
				arr[i] = random;
				check = false;
			}
		}
		answer += words[random];
		iteration--;
	}
	return answer;
}

void play(int hp, int question, int time_play, int help) {
	srand(time(NULL));
	system("cls");

	int end = question;
	string empty[15]{ "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15" };
	int answer;
	int help_play = help;
	int honey = 0;
	const int arr_question = 4;

	const int size = 15;

	int n = 1;
	if (question == 5)
	{
		n = 10;
	}
	else if (question == 10)
	{
		n = 5;
	}

	int arr[15]{ 0 };


	steady_clock::time_point tend = steady_clock::now() + minutes(time_play);
	while (steady_clock::now() < tend && hp > 0 && end > 0)
	{
		int choose_question = stoi(sort(n, 15, 50, 1, empty));
		bool check = true;
		for (int i = 0; i < 15 - n; i++)
		{
			if (arr[i] == choose_question)
			{
				choose_question = stoi(sort(n, 15, 50, 1, empty));
				i = -1;
			}
		}
		for (int i = 0; i < 15 - n && check; i++)
		{
			if (arr[i] == 0)
			{
				arr[i] = choose_question;
				check = false;

			}
		}
		switch (choose_question)
		{
		case 1: {
			cout << "Размер типа данных int: ";
			string choose[arr_question]{ "1)1 байт ", "2)2байт ", "3)3байт ", "4)4байт " };
			cout << sort(11, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "\x1b[92m1)1байт 2)2байта\x1b[0m 3)3байт 4)4байт\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 2) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 2: {
			cout << "Где я нахожусь: ";
			string choose[arr_question]{ "1)Москва ", "2)Псков ", "3)Барнаул ", "4)Казахстан " };
			cout << sort(11, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "\x1b[92m1)Москва 2)Псков \x1b[0m3)Барнаул 4)Казахстан\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 1) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 3: {
			cout << "В какой мы группе: ";
			string choose[arr_question]{ "1)КС ", "2)ОСАТ ", "3)ИСП ", "4)ЛОЛИ " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)КС 2)ОСАТ \x1b[92m3)ИСП 4)ЛОЛИ\x1b[0m\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 3) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 4: {
			cout << "Какая у нас площадка: ";
			string choose[arr_question]{ "1)ОП1 ", "2)ОП3 ", "3)ОП9 ", "4)ОП6 " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)1байт 2)ОП3 \x1b[92m3)ОП9 4)ОП6\x1b[0m\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 4) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 5: {
			cout << "В каком колледже мы учимся: ";
			string choose[arr_question]{ "1)КС54 ", "2)ЛОШ87 ", "3)ФЬГ23 ", "4)ФщО33 " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "\x1b[92m1)КС54 2)ЛОШ87 \x1b[0m3)ФЬГ23 4)ФщО33\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 1) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 6: {
			cout << "Когда у миши день рождения: ";
			string choose[arr_question]{ "1)сегодня ", "2)13 февраля ", "3)23 ноября ", "4)1 декабря " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "\x1b[92m1)сегодня 2)13 февраля \x1b[0m3)23 ноября 4)1 декабря\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 1) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 7: {
			cout << "Где живет сеня: ";
			string choose[arr_question]{ "1)GUM ", "2)Genshin ", "3)Москва ", "4)В компе " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)GUM \x1b[92m2)Genshin 3)Москва \x1b[0m4)В компе\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 2) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 8: {
			cout << "У меня будет автомат: ";
			string choose[arr_question]{ "1)да ", "2)нет ", "3)наверное ", "4)скорее всего " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)да 2)нет \x1b[92m3)наверное 4)скорее всего\x1b[0m\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 4) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 9: {
			cout << "Нашь директор: ";
			string choose[arr_question]{ "1)Гренов ", "2)Хамов ", "3)Сомов ", "4)Щербинков " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)Гренов 2)Хамов \x1b[92m3)Сомов 4)Щербинков\x1b[0m\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 3) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 10: {
			cout << "Практика проходит в...: ";
			string choose[arr_question]{ "1)Кузьминки ", "2)Деревня ", "3)Колледж ", "4)Ущербина " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)Кузьминки 2)Деревня \x1b[92m3)Деревня 4)Ущербинка\x1b[0m\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 4) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 11: {
			cout << "На каком яп мы проходим практику: ";
			string choose[arr_question]{ "1)С++ ", "2)С# ", "3)JS ", "4)1C " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)C++ 2)C# \x1b[92m3)JS 4)1C\x1b[0m\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 4) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 12: {
			cout << "Запомни только	1, а другое...: ";
			string choose[arr_question]{ "1)забудь ", "2)вспомни ", "3)сделай ", "4)не знаю " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "\x1b[92m1)забудь 2)вспомни \x1b[0m3)сделай 4)не знаю\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 1) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 13: {
			cout << "150+150=...: ";
			string choose[arr_question]{ "1)300 ", "2)3 сотни ", "3)0 ", "4)3000 " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)300 \x1b[92m2)3 сотни 3)0 \x1b[0m4)3000\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 2) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 14: {
			cout << "Самое большое млекопитающие: ";
			string choose[arr_question]{ "1)зебра ", "2)слон ", "3)кит ", "4)дельфин " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)зебра 2)слон \x1b[92m3)кит 4)дельфин\x1b[0m\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 3) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		case 15: {
			cout << "отец это ...: ";
			string choose[arr_question]{ "1)Орлов ", "2)Николаенко ", "3)Папич ", "4)Отец " };
			cout << sort(0, 4, 100, 4, choose) << "5)Подсказка\n";
			cin >> answer;
			if (answer == 5 && help_play > 0)
			{
				cout << "1)Орлов \x1b[92m2)Николаенко 3)Папич \x1b[0m4)Отец\n";
				help_play--;
				cin >> answer;
			}
			else if (answer == 5 && help_play < 1) {
				cout << "У вас не осталось подсказок\n";
				cin >> answer;
			}
			while (answer < 1 || answer>4)
			{
				cin >> answer;
			}
			if (answer == 3) {
				honey++;
				break;
			}
			else {
				hp--;
				break;
			}
		}
		default:
			break;
		}
		end--;
	}
	if (hp == 0) {
		cout << "У вас закончились жизни. Вы набрали " << honey << " очков.";
	}
	else if (end == 0) {
		cout << "Игра закончена. Вы набрали " << honey << " очков.";
	}
	else
	{
		cout << "У вас закончилось время. Вы набрали " << honey << " очков.";
	}
}


int set_hp() {
	cout << "Введите кол-во жизней от 1 до 5: ";
	int hp = 0;
	while (hp < 1 || hp>5)
	{
		cin >> hp;
	}
	return hp;
}

int set_question() {
	cout << "Введите кол-во вопросов(5,10,15): ";
	int question = 0;
	while (question != 5 && question != 10 && question != 15)
	{
		cin >> question;
	}
	return question;
}

int set_time() {
	cout << "Введите время игры(1,2,3): ";
	int time = 0;
	while (time != 1 && time != 2 && time != 3 && time != 10)
	{
		cin >> time;
	}
	return time;
}
int set_help() {
	cout << "Введите кол-во подсказок(1-5): ";
	int help = 0;
	while (help < 1 || help>5)
	{
		cin >> help;
	}
	return help;
}

int main()
{
	setlocale(0, "");
	bool game = true;
	int hp = 3;
	int question = 5;
	int time_play = 2;
	int help = 3;
	int choose;
	while (game)
	{
		cout << "Меню\n1.Начать викторину\n2.Настройки\n3.Выход\n";
		cin >> choose;
		switch (choose)
		{
		case 1: {
			play(hp, question, time_play, help);
			game = false;
			break;
		}
		case 2: {
			int stop = 0;
			while (stop != 4)
			{
				system("cls");
				cout << "1.Кол-во жизней\n2.Время(в минутах)\n3.Кол-во вопросов\n4.Подсказка\n5.Выход\n";
				cin >> choose;
				switch (choose)
				{
				case 1: {
					hp = set_hp();
					break;
				}
				case 2: {
					time_play = set_time();
					break;
				}
				case 3: {
					question = set_question();
					break;
				}
				case 4: {
					help = set_help();
					break;
				}
				case 5: {
					stop = 4;
					break;
				}
				default:
					break;
				}
			}
			system("cls");
			break;
		}
		case 3: {
			system("cls");
			game = false;
			break;
		}
		default:
			cin >> choose;
			system("cls");
			break;
		}
	}
}