﻿// Не знал, как решить 4ю задача без do while. Поэтому сделал с ними))

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	
	MyStart:
	setlocale(LC_ALL, "Rus");
	cout << "Введите номер задания - ";
	int task;
	cin >> task;
	switch (task)
	{

#pragma region TASK1
		case 1:
		{
			cout << "Локатор может быть ориентирован на одну из сторон света\n";
			cout << "(«C» – север, «Ю» – юг, «З» –  запад, «В» – восток) и может принимать команды :\n";
			cout << "«1» – поворот направо(90º), \n";
			cout << "«–1» –  поворот налево(–90º),\n";
			cout << "«2» – поворот в обратную сторону(180º).\n";
			cout << "Исходная ориентация локатора «C».\n";
			cout << "Определить ориентацию локатора после выполнения последовательности вводимых команд N1, N2\n";
			int n1, n2;
			cout << "Введите первую команду - ";
			cin >> n1;

			switch (n1)
			{
				case -1:
				{
					
					cout << "введите вторую команду - ";
					cin >> n2;
					switch (n2)
					{
					case -1:
						cout << "SOUTH\n";
						break;
					case 1:
						cout << "NORTH\n";
						break;
					case 2:
						cout << "EAST\n";
						break;
					}
				} break;
				case 1:
				{
					cout << "введите вторую команду - ";
					cin >> n2;
					switch (n2)
					{
					case 1:
						cout << "SOUTH\n";
						break;
					case -1:
						cout << "NORTH\n";
						break;
					case 2:
						cout << "WEST\n";
						break;
					} 
				} break;

				case 2:
				{
					cout << "введите вторую команду - ";
					cin >> n2;
					switch (n2)
					{
					case 1:
						cout << "EAST\n";
						break;
					case -1:
						cout << "WEST\n";
						break;
					case 2:
						cout << "NORTH\n";
						break;
					}
				} break;

			}
		} break;

#pragma endregion

#pragma region TASK2

		case 2:
		{	
			task2:
			cout << "Даны значения трех сторон треугольника a, b и c.\n";
			cout << "Определить вид треугольника(прямоугольный, равносторонний или простой).\n";
			cout << "Ответ вывести в виде сообщения.\n";
			cout << "Введите стороны треугольника - " << endl;
			int a, b, c;
			cin >> a >> b >> c;
			if (a > 0 && b > 0 && c > 0)
			{
				if (pow(a, 2) + pow(b, 2) == pow(c, 2))
				{
					cout << "Треугольник прямоугольный!!!!\n";
				}
				else if (a == b && b == c)
				{
					cout << "Треугольник равносторонний!!!!\n";
				}
				else
				{
					cout << "Треугольник простой!!!!\n";
				}
			}
			else
			{
				cout << "С введенными данными невозможно нарисовать треугольник\nПопробуйте ещё раз!!!\n";
				goto task2;
			}
			
		} break;
#pragma endregion

#pragma region TASK3

		case 3:
		{
			cout << "Даны два числа A и B.Разработать и описать алгоритм, \n";
			cout << "в результате которого числа меняют свой знак на противоположный, \n";
			cout << "если они имеют разный знак и будут заменены на нули, если это не так.\n";
			int a, b;
			cout << "Введите два числа - \n";
			cin >> a >> b;
			if (((a >= 0) && (b < 0)) || (b >= 0 && a < 0))
			{
				cout << -(a) << " и " << -(b) << endl;
			}
			else
			{
				a = 0;
				b = 0;
				cout << a << " и " << b << endl;
			}
		}
#pragma endregion

#pragma region TASK4

		case 4:
		{	
			// Без do while не знал как решить )))
			cout << "Дано целое число k (1<k<365). Определить, каким днем недели\n";
			cout << "(понедельник, вторник, воскресенье) является k-день невысокосного года, если 1 января – понедельник.\n";
			int k, i = 0;
			cout << "Введите число - ";
			cin >> k;
			do
			{
				i++;

			} while (7 * i < k);
			cout << k << "-й день это " <<i << "-я неделя."<< endl;
			if ((7 * i) - k == 0)
				cout << "Воскресенье" << endl;
			else if ((7 * i) - k == 1)
				cout << "Суббота" << endl;
			else if ((7 * i) - k == 2)
				cout << "Пятница" << endl;
			else if ((7 * i) - k == 3)
				cout << "Четверг" << endl;
			else if ((7 * i) - k == 4)
				cout << "Среда" << endl;
			else if ((7 * i) - k == 5)
				cout << "Вторник" << endl;
			else if ((7 * i) - k == 6)
				cout << "Понедельник" << endl;

			
		} break;
#pragma endregion

#pragma region TASK5

		case 5:
		{	
			task5:
			cout << "Закажите гостиницу на курорте Трускавец, \n";
			cout << "выбрав уровень гостиницы  количество мест в номере, \n";
			cout << "проживание с питанием или без. Гостиница «Курортная» пять звезд,\n";
			cout << "одноместная комната – 1000 тн в сутки (с питанием 1500 тн), \n";
			cout << "двухместный – 1500 тн (с питанием 2500 тн).\n";
			cout << "Гостиница «Верховина» четыре звезды, \n";
			cout << "одноместная комната – 600 тн в сутки (с питанием 900 тн),\n";
			cout << "двухместный - 900гр (с питанием 1500 тн). \n";
			cout << "Гостиница «Гуцулка» три звезды,\n";
			cout << "одноместная комната – 300 тн в сутки (с питанием 500тн),\n";
			cout << "двухместный – 450 тн (с питанием 800 тн). \n";
			cout << "Предусмотреть обработку ошибок ввода.\n";

			cout << "Введите скольки звездочный отель Вы хотит выбрать\n Используйте для выбора цирфы 3, 4 или 5.\n Где цифра соответстует кол-ву звезд\n";
			int hotel, room;
			char yn = 0;
			cin >> hotel;
			switch (hotel)
			{ 
				case 3:
				{
					cout << "Вы выбрали 3х звездочный отель \"Гуцулука\"\n";
					cout << "Вы хотели бы одноместный номер или двухместный?\n";
					cout << "Введите цифру 1 для выбора одноместного номера или 2 для двуместного.\n";
					cout << "Дальше используя клавиши y или n укажите, включать ли в стоимость питание?\n где y - да, n - нет\n";
					int hotel3;
					cout << "Какой отель?\n";
					cin >> hotel3;
					cout << "С питанием?? \n";
					cin >> yn;
					if (hotel3 == 1 && yn == 'y')
					{
						cout << "Стоимость суток = 500 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 500 << " Тг." << endl;

					}
					else if (hotel3 == 1 && yn == 'n')
					{
						cout << "Стоимость суток = 300 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 300 << " Тг." << endl;
					}
					else if (hotel3 == 2 && yn == 'y')
					{
						cout << "Стоимость суток = 800 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 800 << " Тг." << endl;
					}
					else if (hotel3 == 2 && yn == 'n')
					{
						cout << "Стоимость суток = 450 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 450 << " Тг." << endl;
					}
				} break;

				case 4:
				{
					cout << "Вы выбрали 4х звездочный отель \"Верховина\"\n";
					cout << "Вы хотели бы одноместный номер или двухместный?\n";
					cout << "Введите цифру 1 для выбора одноместного номера или 2 для двуместного.\n";
					cout << "Дальше используя клавиши y или n укажите, включать ли в стоимость питание?\n где y - да, n - нет\n";
					int hotel3;
					cout << "Какой отель?\n";
					cin >> hotel3;
					cout << "С питанием?? \n";
					cin >> yn;
					if (hotel3 == 1 && yn == 'y')
					{
						cout << "Стоимость суток = 900 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 900 << " Тг." << endl;

					}
					else if (hotel3 == 1 && yn == 'n')
					{
						cout << "Стоимость суток = 600 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 600 << " Тг." << endl;
					}
					else if (hotel3 == 2 && yn == 'y')
					{
						cout << "Стоимость суток = 1500 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 1500 << " Тг." << endl;
					}
					else if (hotel3 == 2 && yn == 'n')
					{
						cout << "Стоимость суток = 900 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 900 << " Тг." << endl;
					}
				} break;

				case 5:
				{	
					cout << "Вы выбрали 5и звездочный отель \"Трускавец\"\n";
					cout << "Вы хотели бы одноместный номер или двухместный?\n";
					cout << "Введите цифру 1 для выбора одноместного номера или 2 для двуместного.\n";
					cout << "Дальше используя клавиши y или n укажите, включать ли в стоимость питание?\n где y - да, n - нет\n";
					int hotel3;
					cout << "Какой отель?\n";
					cin >> hotel3;
					cout << "С питанием?? \n";
					cin >> yn;
					if (hotel3 == 1 && yn == 'y')
					{
						cout << "Стоимость суток = 1500 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 1500 << " Тг." << endl;

					}
					else if (hotel3 == 1 && yn == 'n')
					{
						cout << "Стоимость суток = 1000 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 1000 << " Тг." << endl;
					}
					else if (hotel3 == 2 && yn == 'y')
					{
						cout << "Стоимость суток = 2500 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 2500 << " Тг." << endl;
					}
					else if (hotel3 == 2 && yn == 'n')
					{
						cout << "Стоимость суток = 1500 тг.\n";
						hotel3 = 0;
						cout << "На сколько суток хотели бы заказать номер?\n";
						cin >> hotel3;
						cout << "Общая стоимость составит " << hotel3 * 1500 << " Тг." << endl;
					}
				} break;
				
				default:
				{
					cout << "Ввели недопустимые символы\n";
					system("pause");
					system("cls");
					goto task5;

				}
			}

		}
#pragma endregion

#pragma region TASK6

		case 6:
		{
			cout << "Напишите функцию int f(int x),\n";
			cout << "которая принимает целое значение\n";
			cout << "и возвращает число с обратным порядком цифр.(пятизначное)\n";
			cout << "Например, принимается число 7631, возвращается число 1367.\n";
			
			int n;
			do
			{
				cout << "Введите пятизначное число - ";
				cin >> n;

			} while (n < 10000 || n > 99999);
			
			cout << n << endl;
			int a, b, c, d, e;
			a = n / 10000;
			e = n % 10;
			d = (n % 100) / 10;
			c = (n % 1000) / 100;
			b = (n % 10000) / 1000;
			cout << e << d << c << b << a << endl;

		} break;
#pragma endregion

#pragma region TASK7
		case 7:
		{	
			task7:
			cout << "Введите любую дату - чило, месяц, год:  \n ";
			int dd, mm, yy;
			cin >> dd >> mm >> yy;
			if ((mm < 1 || mm > 12))
			{
				cout << "WRONG FORMAT\n";
				goto task7;
			}
			else if (mm == 1|| mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
			{
				if (dd > 31 || dd <=0)
				{
					cout << "WRONG DATE" << endl;
					goto task7;
				}
				else
				{
					if (yy > 0 && yy < 10)
					{
						cout << dd << "." << mm << "." << "200" << yy << endl;
					}
					else if (yy >= 10 && yy <= 17)
					{
						cout << dd << "." << mm << "." << "20" << yy << endl;
					}
					else if (yy >= 19 && yy <= 99)
					{
						cout << dd << "." << mm << "." << "19" << yy << endl;
					}
					else
					{
						cout << dd << "." << mm << "." << yy << endl;
					}
				}
			}
			else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
			{
				if (dd > 30 || dd <= 0)
				{
					cout << "WRONG DATE" << endl;
					goto task7;
				}
				else
				{
					if (yy > 0 && yy < 10)
					{
						cout << dd << "." << mm << "." << "200" << yy << endl;
					}
					else if (yy >= 10 && yy <= 17)
					{
						cout << dd << "." << mm << "." << "20" << yy << endl;
					}
					else if (yy >= 19 && yy <= 99)
					{
						cout << dd << "." << mm << "." << "19" << yy << endl;
					}
					else
					{
						cout << dd << "." << mm << "." << yy << endl;
					}
				}
			}
			else if (mm == 2)
			{
				if (dd > 28 || dd <= 0)
				{
					cout << "WRONG DATE" << endl;
					goto task7;
				}
				else
				{
					if (yy > 0 && yy < 10)
					{
						cout << dd << "." << mm << "." << "200" << yy << endl;
					}
					else if (yy >= 10 && yy <= 17)
					{
						cout << dd << "." << mm << "." << "20" << yy << endl;
					}
					else if (yy >= 19 && yy <= 99)
					{
						cout << dd << "." << mm << "." << "19" << yy << endl;
					}
					else
					{
						cout << dd << "." << mm << "." << yy << endl;
					}
				}
			}
		} break;
#pragma endregion




	default:
		break;
	}



	system("pause");
}