#include <iostream>
using namespace std;
//#define WHILE
double l1 = 200920070;
double l2 = 555913746;
double l3 = 449936400;
double l4 = 123456789;
double l5 = 200950087;
double l6 = 15044512;
double l7 = 321654987;
double l8 = 987654321;
double l9 = 895257157;
double p1 = 4605;
double p2 = 1119;
double p3 = 9140;
double p4 = 642;
double p5 = 3619;
double p6 = 1849;
double p7 = 3496;
double p8 = 1541;
double p9 = 1795;
double buffer;
double buffer2;
double n;
double summ = 0;
double balance1 = 4;
double balance2 = 5;
double balance3 = 4;
double balance4 = 4;
double balance5 = 6;
double balance6 = 4;
double balance7 = 3;
double balance8 = 2;
double balance9 = 2;
double c;
double dev = 8624;
double b;
double buffer3;
double restart = 0;
void main()
{
	setlocale(LC_ALL, "russian");
		cout << "-------------------------------------------" << endl;
		cout << "Банк для Ашоткойнов. Version: 0.0.4.9 Alpha" << endl;
		cout << "-------------------------------------------" << endl;
		if (l1 == 200920070 && l2 == 555913746 && l3 == 449936400 && l4 == 123456789 && l5 == 200950087 && l6 == 15044512 && l7 == 321654987 && l8 == 987654321 && l9 == 895257157 && p1 == 4605 && p2 == 1119 && p3 == 9140 && p4 == 642 && p5 == 3619 && p6 == 1849 && p7 == 3496 && p8 == 1541 && p9 == 1795 && balance1 == 4 && balance2 == 5 && balance3 == 4 && balance4 == 4 && balance5 == 6 && balance6 == 4 && balance7 == 3 && balance8 == 2 && balance9 == 2 && dev == 8624)
		{
			p1 += 520;
			p2 += 1785;
			p3 += 751;
			p4 += 592;
			p5 += 904;
			p6 += 2654;
			p7 += 825;
			p8 += 6057;
			p9 += 635;
			do
			{
				//cout << "В честь каждого 5-го юзера мы дарим 2 ашоткойна!" << endl;
				cout << "----------------" << endl;
				cout << "Введите логин: " << endl; cin >> buffer;
				cout << "Введите пин код: " << endl; cin >> buffer2;
				cout << "----------------" << endl;
				if (buffer == l1 && buffer2 == p1)
				{
					cout << "Здравствуйте, Артём Дмитриевич" << endl;
					cout << "------------------------------" << endl;
					while (true)
					{
						cout << "| 1.Проверка баланса | 2.Перевод | 3.Аккаунты, зарегестрированные в этом банке |" << endl;
						cout << "| 4. Майнинг ашоткойнов | 5. Справка | " << endl;
						cin >> buffer;
						if (buffer == 1)
						{
							cout << balance1;
							cout << " ашоткойн." << endl;
							cout << "------------" << endl;
						}
						else if (buffer == 2)
						{
							cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе[Будет убрана]." << endl;
							cin >> buffer2;
							cout << "-------------------------------------------------------" << endl;
							if (buffer2 == 1)
							{
								cout << "Номер счёта получателя: " << endl; cin >> buffer3;
								cout << "Сумма перевода: " << endl; cin >> b;
								if (buffer3 == l2)
								{
									balance2 += b;
									c = balance1 - b;
									balance1 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l3)
								{
									balance3 += b;
									c = balance1 - b;
									balance1 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l4)
								{
									balance4 += b;
									c = balance1 - b;
									balance1 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l5)
								{
									balance5 += b;
									c = balance1 - b;
									balance1 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l6)
								{
									balance6 += b;
									c = balance1 - b;
									balance1 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l7)
								{
									balance7 += b;
									c = balance1 - b;
									balance1 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l8)
								{
									balance8 += b;
									c = balance1 - b;
									balance1 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l9)
								{
									balance9 += b;
									c = balance1 - b;
									balance1 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Такого пользователя нет. Всё равно перевести?" << endl;
									cout << "1.Да 2.Нет" << endl; cin >> buffer2;
									cout << "---------------------------------------------" << endl;
									if (buffer2 == 1)
									{
										cout << "Переведено!" << endl;
										cout << "-----------" << endl;
										c = balance1 - b;
										balance1 = c;
									}
									if (buffer2 == 2)
									{
										cout << "Перевод не совершён. Причина: Отсутствие подтверждения." << endl;
										cout << "-------------------------------------------------------" << endl;
									}
								}
							}
							else if (buffer == 2)
							{
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "|Внимание! Эта функция в ближайшее время перестанет работать на некоторое время. Спасибо за понимание!|" << endl;
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
								cout << "Пин код: " << endl; cin >> buffer2;
								cout << "-------------------------------------" << endl;
								if (buffer == l3 && buffer2 == p3)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance1;
									balance1 = c;
									balance3 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else if (buffer == l2 && buffer2 == p2)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance1;
									balance1 = c;
									balance2 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l4 && buffer2 == p4)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance1;
									balance1 = c;
									balance4 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l5 && buffer2 == p5)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance1;
									balance1 = c;
									balance5 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l6 && buffer2 == p6)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance1;
									balance1 = c;
									balance6 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l7 && buffer2 == p7)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance1;
									balance1 = c;
									balance7 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l8 && buffer2 == p8)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance1;
									balance1 = c;
									balance8 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l9 && buffer2 == p9)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance1;
									balance1 = c;
									balance9 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Неверный логин или пароль." << endl;
									cout << "--------------------------" << endl;
								}
							}
						}
						else if (buffer == 3)
						{
							cout << "-------------------------------------------------------------" << endl;
							cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
							cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
							cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
							cout << "4. Владимир Олегович. Login: 123456789. Balance: " << balance4 << endl;
							cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
							cout << "6. Никита Денисович. Login: 15044512. Balance: " << balance6 << endl;
							cout << "7. Игорь Александрович. Login: 321654987. Balance: " << balance7 << endl;
							cout << "8. Максим Николаевич. Login: 987654321. Balance: " << balance8 << endl;
							cout << "9. Иван Николаевич. Login: 895257157. Balance: " << balance9 << endl;
							cout << "-------------------------------------------------------------" << endl;
						}
						else if (buffer == 4)
						{
							cout << "Введите количество нужных ашоткойнов:" << endl; cin >> n;
							buffer3 = 0;
							for (int i = 0; i < n; i++)
							{
								buffer3 += 0.01;
								cout << "Майнинг..." << endl;
							}
							summ = 0;
							balance1 += buffer3;
							cout << "-----------" << endl;
							cout << "Баланс: ";
							cout << balance1 << endl;
							cout << "-----------" << endl;
#ifdef WHILE
							while (mayning > buffer3)
							{
								buffer3 = summ + 1;
								cout << "Майним..." << endl;
							}
							summ = 0;
							balance1 = summ + buffer3;
							cout << "Баланс: ";
							cout << balance1;
#endif // WHILE


						}
						else if (buffer == 5)
						{
							cout << "-------" << endl;
							cout << "Справка" << endl;
							cout << "-------" << endl;
							cout << endl;
							cout << "-------------------------------" << endl;
							cout << "AshotCoins App" << endl;
							cout << "Версия приложения: 0.0.4.9_Alpha" << endl;
							cout << "-------------------------------" << endl;
							cout << endl;
							cout << "-----------------------------------------" << endl;
							cout << "E-mail разработчика: ashotcoins092@gmail.com" << endl;
							cout << "-----------------------------------------" << endl;
						}
					}
				}
				if (buffer == l2 && buffer2 == p2)
				{
					cout << "Здравствуйте, Дмитрий Александрович" << endl;
					cout << "-----------------------------------" << endl;
					while (true)
					{
						cout << "| 1.Проверка баланса | 2.Перевод | 3.Аккаунты, зарегестрированные в этом банке |" << endl;
						cout << "| 4. Майнинг ашоткойнов | 5. Справка | " << endl;
						cin >> buffer;
						if (buffer == 1)
						{
							cout << balance2;
							cout << " ашоткойн." << endl;
							cout << "------------" << endl;
						}
						else if (buffer == 2)
						{
							cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе[Будет убрана]." << endl;
							cin >> buffer2;
							cout << "-------------------------------------------------------" << endl;
							if (buffer2 == 1)
							{
								cout << "Номер счёта получателя: " << endl; cin >> buffer3;
								cout << "Сумма перевода: " << endl; cin >> b;
								if (buffer3 == l1)
								{
									balance1 += b;
									c = balance2 - b;
									balance2 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l3)
								{
									balance3 += b;
									c = balance2 - b;
									balance2 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l4)
								{
									balance4 += b;
									c = balance2 - b;
									balance2 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l5)
								{
									balance5 += b;
									c = balance2 - b;
									balance2 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l6)
								{
									balance6 += b;
									c = balance2 - b;
									balance2 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l7)
								{
									balance7 += b;
									c = balance2 - b;
									balance2 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l8)
								{
									balance8 += b;
									c = balance2 - b;
									balance2 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l9)
								{
									balance9 += b;
									c = balance2 - b;
									balance2 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else
								{
									cout << "Такого пользователя нет. Всё равно перевести?" << endl;
									cout << "1.Да 2.Нет" << endl; cin >> buffer2;
									cout << "---------------------------------------------" << endl;
									if (buffer2 == 1)
									{
										cout << "Переведено!" << endl;
										cout << "-----------" << endl;
										c = balance2 - b;
										balance2 = c;
									}
									if (buffer2 == 2)
									{
										cout << "Перевод не совершён. Причина: Отсутствие подтверждения." << endl;
										cout << "-------------------------------------------------------" << endl;
									}
								}
							}
							else if (buffer == 2)
							{
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "|Внимание! Эта функция в ближайшее время перестанет работать на некоторое время. Спасибо за понимание!|" << endl;
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
								cout << "Пин код: " << endl; cin >> buffer2;
								cout << "-------------------------------------" << endl;
								if (buffer == l1 && buffer2 == p1)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance2;
									balance2 = c;
									balance1 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else if (buffer == l3 && buffer2 == p3)
								{
									cin >> b;
									c = b + balance2;
									balance2 = c;
									balance3 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l4 && buffer2 == p4)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance2;
									balance2 = c;
									balance4 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l5 && buffer2 == p5)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance2;
									balance2 = c;
									balance5 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l6 && buffer2 == p6)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance2;
									balance2 = c;
									balance6 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l7 && buffer2 == p7)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance2;
									balance2 = c;
									balance7 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l8 && buffer2 == p8)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance2;
									balance2 = c;
									balance8 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l9 && buffer2 == p9)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance2;
									balance2 = c;
									balance9 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Неверный логин или пароль." << endl;
									cout << "--------------------------" << endl;
								}
							}
						}
						else if (buffer == 3)
						{
							cout << "-------------------------------------------------------------" << endl;
							cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
							cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
							cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
							cout << "4. Владимир Олегович. Login: 123456789. Balance: " << balance4 << endl;
							cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
							cout << "6. Никита Денисович. Login: 15044512. Balance: " << balance6 << endl;
							cout << "7. Игорь Александрович. Login: 321654987. Balance: " << balance7 << endl;
							cout << "8. Максим Николаевич. Login: 987654321. Balance: " << balance8 << endl;
							cout << "9. Иван Николаевич. Login: 895257157. Balance: " << balance9 << endl;
							cout << "-------------------------------------------------------------" << endl;
						}
						else if (buffer == 4)
						{
							cout << "Введите количество нужных ашоткойнов:" << endl; cin >> n;
							buffer3 = 0;
							for (int i = 0; i < n; i++)
							{
								buffer3 += 0.01;
								cout << "Майнинг..." << endl;
							}
							summ = 0;
							balance2 += buffer3;
							cout << "-----------" << endl;
							cout << "Баланс: ";
							cout << balance2 << endl;
							cout << "-----------" << endl;
#ifdef WHILE
							while (mayning > buffer3)
							{
								buffer3 = summ + 1;
								cout << "Майним..." << endl;
							}
							summ = 0;
							balance1 = summ + buffer3;
							cout << "Баланс: ";
							cout << balance1;
#endif // WHILE


						}
						else if (buffer == 5)
						{
							cout << "-------" << endl;
							cout << "Справка" << endl;
							cout << "-------" << endl;
							cout << endl;
							cout << "-------------------------------" << endl;
							cout << "AshotCoins App" << endl;
							cout << "Версия приложения: 0.0.4.9_Alpha" << endl;
							cout << "-------------------------------" << endl;
							cout << endl;
							cout << "-----------------------------------------" << endl;
							cout << "E-mail разработчика: ashotcoins092@gmail.com" << endl;
							cout << "-----------------------------------------" << endl;
						}
					}

				}
				if (buffer == l3 && buffer2 == p3)
				{
					cout << "Здравствуйте, Матвей Дмитриевич" << endl;
					cout << "-------------------------------" << endl;
					while (true)
					{
						cout << "| 1.Проверка баланса | 2.Перевод | 3.Аккаунты, зарегестрированные в этом банке |" << endl;
						cout << "| 4. Майнинг ашоткойнов | 5. Справка" << endl;
						cin >> buffer;
						if (buffer == 1)
						{
							cout << balance3;
							cout << " ашоткойн." << endl;
							cout << "------------" << endl;
						}
						else if (buffer == 2)
						{
							cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе[Будет убрана]." << endl;
							cin >> buffer2;
							cout << "-------------------------------------------------------" << endl;
							if (buffer2 == 1)
							{
								cout << "Номер счёта получателя: " << endl; cin >> buffer3;
								cout << "Сумма перевода: " << endl; cin >> b;
								if (buffer3 == l1)
								{
									balance1 += b;
									c = balance3 - b;
									balance3 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l2)
								{
									balance2 += b;
									c = balance3 - b;
									balance3 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l4)
								{
									balance4 += b;
									c = balance3 - b;
									balance3 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l5)
								{
									balance5 += b;
									c = balance3 - b;
									balance3 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l6)
								{
									balance6 += b;
									c = balance3 - b;
									balance3 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l7)
								{
									balance7 += b;
									c = balance3 - b;
									balance3 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l8)
								{
									balance8 += b;
									c = balance3 - b;
									balance3 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l9)
								{
									balance9 += b;
									c = balance3 - b;
									balance3 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Такого пользователя нет. Всё равно перевести?" << endl;
									cout << "1.Да 2.Нет" << endl; cin >> buffer2;
									cout << "---------------------------------------------" << endl;
									if (buffer2 == 1)
									{
										cout << "Переведено!" << endl;
										cout << "-----------" << endl;
										c = balance3 - b;
										balance3 = c;
									}
									if (buffer2 == 2)
									{
										cout << "Перевод не совершён. Причина: Отсутствие подтверждения." << endl;
										cout << "-------------------------------------------------------" << endl;
									}
								}
							}
							else if (buffer == 2)
							{
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "|Внимание! Эта функция в ближайшее время перестанет работать на некоторое время. Спасибо за понимание!|" << endl;
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
								cout << "Пин код: " << endl; cin >> buffer2;
								cout << "-------------------------------------" << endl;
								if (buffer == l1 && buffer2 == p1)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance3;
									balance3 = c;
									balance1 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else if (buffer == l2 && buffer2 == p2)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance3;
									balance3 = c;
									balance2 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l4 && buffer2 == p4)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance3;
									balance3 = c;
									balance4 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l5 && buffer2 == p5)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance3;
									balance3 = c;
									balance5 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l6 && buffer2 == p6)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance3;
									balance3 = c;
									balance6 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l7 && buffer2 == p7)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance3;
									balance3 = c;
									balance7 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l8 && buffer2 == p8)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance3;
									balance3 = c;
									balance8 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l9 && buffer2 == p9)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance3;
									balance3 = c;
									balance9 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Неверный логин или пароль." << endl;
									cout << "--------------------------" << endl;
								}
							}
						}
						else if (buffer == 3)
						{
							cout << "-------------------------------------------------------------" << endl;
							cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
							cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
							cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
							cout << "4. Владимир Олегович. Login: 123456789. Balance: " << balance4 << endl;
							cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
							cout << "6. Никита Денисович. Login: 15044512. Balance: " << balance6 << endl;
							cout << "7. Игорь Александрович. Login: 321654987. Balance: " << balance7 << endl;
							cout << "8. Максим Николаевич. Login: 987654321. Balance: " << balance8 << endl;
							cout << "9. Иван Николаевич. Login: 895257157. Balance: " << balance9 << endl;
							cout << "-------------------------------------------------------------" << endl;
						}
						else if (buffer == 4)
						{
							cout << "Введите количество нужных ашоткойнов:" << endl; cin >> n;
							buffer3 = 0;
							for (int i = 0; i < n; i++)
							{
								buffer3 += 0.01;
								cout << "Майнинг..." << endl;
							}
							summ = 0;
							balance3 += buffer3;
							cout << "-----------" << endl;
							cout << "Баланс: ";
							cout << balance3 << endl;
							cout << "-----------" << endl;
#ifdef WHILE
							while (mayning > buffer3)
							{
								buffer3 = summ + 1;
								cout << "Майним..." << endl;
							}
							summ = 0;
							balance1 = summ + buffer3;
							cout << "Баланс: ";
							cout << balance1;
#endif // WHILE


						}
						else if (buffer == 5)
						{
							cout << "-------" << endl;
							cout << "Справка" << endl;
							cout << "-------" << endl;
							cout << endl;
							cout << "-------------------------------" << endl;
							cout << "AshotCoins App" << endl;
							cout << "Версия приложения: 0.0.4.9_Alpha" << endl;
							cout << "-------------------------------" << endl;
							cout << endl;
							cout << "-----------------------------------------" << endl;
							cout << "E-mail разработчика: ashotcoins092@gmail.com" << endl;
							cout << "-----------------------------------------" << endl;
						}

					}
				}
				if (buffer == l4 && buffer2 == p4)
				{
					cout << "Здравствуйте, Владислав Олегович" << endl;
					cout << "-------------------------------" << endl;
					while (true)
					{
						cout << "| 1.Проверка баланса | 2.Перевод | 3.Аккаунты, зарегестрированные в этом банке |" << endl;
						cout << "| 4. Майнинг ашоткойнов | 5. Справка |" << endl;
						cin >> buffer;
						if (buffer == 1)
						{
							cout << balance4;
							cout << " ашоткойн." << endl;
							cout << "------------" << endl;
						}
						else if (buffer == 2)
						{
							cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе[Будет убрана]." << endl;
							cin >> buffer2;
							cout << "-------------------------------------------------------" << endl;
							if (buffer2 == 1)
							{
								cout << "Номер счёта получателя: " << endl; cin >> buffer3;
								cout << "Сумма перевода: " << endl; cin >> b;
								if (buffer3 == l1)
								{
									balance1 += b;
									c = balance4 - b;
									balance4 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l2)
								{
									balance2 += b;
									c = balance4 - b;
									balance4 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l3)
								{
									balance3 += b;
									c = balance4 - b;
									balance4 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l5)
								{
									balance5 += b;
									c = balance4 - b;
									balance4 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l6)
								{
									balance6 += b;
									c = balance4 - b;
									balance4 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l7)
								{
									balance7 += b;
									c = balance4 - b;
									balance4 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l8)
								{
									balance8 += b;
									c = balance4 - b;
									balance4 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l9)
								{
									balance9 += b;
									c = balance4 - b;
									balance4 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Такого пользователя нет. Всё равно перевести?" << endl;
									cout << "1.Да 2.Нет" << endl; cin >> buffer2;
									cout << "---------------------------------------------" << endl;
									if (buffer2 == 1)
									{
										cout << "Переведено!" << endl;
										cout << "-----------" << endl;
										c = balance4 - b;
										balance4 = c;
									}
									if (buffer2 == 2)
									{
										cout << "Перевод не совершён. Причина: Отсутствие подтверждения." << endl;
										cout << "-------------------------------------------------------" << endl;
									}
								}
							}
							else if (buffer == 2)
							{
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "|Внимание! Эта функция в ближайшее время перестанет работать на некоторое время. Спасибо за понимание!|" << endl;
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
								cout << "Пин код: " << endl; cin >> buffer2;
								cout << "-------------------------------------" << endl;
								if (buffer == l1 && buffer2 == p1)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance4;
									balance4 = c;
									balance1 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else if (buffer == l2 && buffer2 == p2)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance4;
									balance4 = c;
									balance2 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l3 && buffer2 == p3)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance4;
									balance4 = c;
									balance3 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l5 && buffer2 == p5)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance4;
									balance4 = c;
									balance5 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l6 && buffer2 == p6)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance4;
									balance4 = c;
									balance6 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l7 && buffer2 == p7)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance4;
									balance4 = c;
									balance7 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l8 && buffer2 == p8)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance4;
									balance4 = c;
									balance8 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l9 && buffer2 == p9)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance4;
									balance4 = c;
									balance9 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Неверный логин или пароль." << endl;
									cout << "--------------------------" << endl;
								}
							}
						}
						else if (buffer == 3)
						{
							cout << "-------------------------------------------------------------" << endl;
							cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
							cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
							cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
							cout << "4. Владислав Олегович. Login: 123456789. Balance: " << balance4 << endl;
							cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
							cout << "6. Никита Денисович. Login: 15044512. Balance: " << balance6 << endl;
							cout << "7. Игорь Александрович. Login: 321654987. Balance: " << balance7 << endl;
							cout << "8. Максим Николаевич. Login: 987654321. Balance: " << balance8 << endl;
							cout << "9. Иван Николаевич. Login: 895257157. Balance: " << balance9 << endl;
							cout << "-------------------------------------------------------------" << endl;
						}
						else if (buffer == 4)
						{
							cout << "Введите количество нужных ашоткойнов:" << endl; cin >> n;
							buffer3 = 0;
							for (int i = 0; i < n; i++)
							{
								buffer3 += 0.01;
								cout << "Майнинг..." << endl;
							}
							summ = 0;
							balance3 += buffer3;
							cout << "-----------" << endl;
							cout << "Баланс: ";
							cout << balance3 << endl;
							cout << "-----------" << endl;
#ifdef WHILE
							while (mayning > buffer3)
							{
								buffer3 = summ + 1;
								cout << "Майним..." << endl;
							}
							summ = 0;
							balance1 = summ + buffer3;
							cout << "Баланс: ";
							cout << balance1;
#endif // WHILE


						}
						else if (buffer == 5)
						{
							cout << "-------" << endl;
							cout << "Справка" << endl;
							cout << "-------" << endl;
							cout << endl;
							cout << "-------------------------------" << endl;
							cout << "AshotCoins App" << endl;
							cout << "Версия приложения: 0.0.3.8_Alpha" << endl;
							cout << "-------------------------------" << endl;
							cout << endl;
							cout << "-----------------------------------------" << endl;
							cout << "E-mail разработчика: ashotcoins092@gmail.com" << endl;
							cout << "-----------------------------------------" << endl;
						}

					}
				}
				if (buffer == l5 && buffer2 == p5)
				{
					cout << "Здравствуйте, Илья Игоревич" << endl;
					cout << "-------------------------------" << endl;
					while (true)
					{
						cout << "| 1.Проверка баланса | 2.Перевод | 3.Аккаунты, зарегестрированные в этом банке |" << endl;
						cout << "| 4. Майнинг ашоткойнов | 5. Справка |" << endl;
						cin >> buffer;
						if (buffer == 1)
						{
							cout << balance5;
							cout << " ашоткойн." << endl;
							cout << "------------" << endl;
						}
						else if (buffer == 2)
						{
							cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе[Будет убрана]." << endl;
							cout << "-------------------------------------------------------" << endl;
							cin >> buffer2;
							if (buffer2 == 1)
							{
								cout << "Номер счёта получателя: " << endl; cin >> buffer3;
								cout << "Сумма перевода: " << endl; cin >> b;
								if (buffer3 == l1)
								{
									balance1 += b;
									c = balance5 - b;
									balance5 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l2)
								{
									balance2 += b;
									c = balance5 - b;
									balance5 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l3)
								{
									balance3 += b;
									c = balance5 - b;
									balance5 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l4)
								{
									balance4 += b;
									c = balance5 - b;
									balance5 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l6)
								{
									balance6 += b;
									c = balance5 - b;
									balance5 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l7)
								{
									balance7 += b;
									c = balance5 - b;
									balance5 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l8)
								{
									balance8 += b;
									c = balance5 - b;
									balance5 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l9)
								{
									balance9 += b;
									c = balance5 - b;
									balance5 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Такого пользователя нет. Всё равно перевести?" << endl;
									cout << "1.Да 2.Нет" << endl; cin >> buffer2;
									cout << "---------------------------------------------" << endl;
									if (buffer2 == 1)
									{
										cout << "Переведено!" << endl;
										cout << "-----------" << endl;
										c = balance5 - b;
										balance5 = c;
									}
									if (buffer2 == 2)
									{
										cout << "Перевод не совершён. Причина: Отсутствие подтверждения." << endl;
										cout << "-------------------------------------------------------" << endl;
									}
								}
							}
							else if (buffer == 2)
							{
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "|Внимание! Эта функция в ближайшее время перестанет работать на некоторое время. Спасибо за понимание!|" << endl;
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
								cout << "Пин код: " << endl; cin >> buffer2;
								cout << "-------------------------------------" << endl;
								if (buffer == l1 && buffer2 == p1)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance5;
									balance5 = c;
									balance1 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else if (buffer == l2 && buffer2 == p2)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance5;
									balance5 = c;
									balance2 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l3 && buffer2 == p3)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance5;
									balance5 = c;
									balance3 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l4 && buffer2 == p4)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance5;
									balance5 = c;
									balance4 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l6 && buffer2 == p6)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance5;
									balance5 = c;
									balance6 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l7 && buffer2 == p7)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance5;
									balance5 = c;
									balance7 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l8 && buffer2 == p8)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance5;
									balance5 = c;
									balance8 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l9 && buffer2 == p9)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance5;
									balance5 = c;
									balance9 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Неверный логин или пароль." << endl;
									cout << "--------------------------" << endl;
								}
							}
						}
						else if (buffer == 3)
						{
							cout << "-------------------------------------------------------------" << endl;
							cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
							cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
							cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
							cout << "4. Владислав Олегович. Login: 123456789. Balance: " << balance4 << endl;
							cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
							cout << "6. Никита Денисович. Login: 15044512. Balance: " << balance6 << endl;
							cout << "7. Игорь Александрович. Login: 321654987. Balance: " << balance7 << endl;
							cout << "8. Максим Николаевич. Login: 987654321. Balance: " << balance8 << endl;
							cout << "9. Иван Николаевич. Login: 895257157. Balance: " << balance9 << endl;
							cout << "-------------------------------------------------------------" << endl;
						}
						else if (buffer == 4)
						{
							cout << "Введите количество нужных ашоткойнов:" << endl; cin >> n;
							buffer3 = 0;
							for (int i = 0; i < n; i++)
							{
								buffer3 += 0.01;
								cout << "Майнинг..." << endl;
							}
							summ = 0;
							balance5 += buffer3;
							cout << "-----------" << endl;
							cout << "Баланс: ";
							cout << balance5 << endl;
							cout << "-----------" << endl;
#ifdef WHILE
							while (mayning > buffer3)
							{
								buffer3 = summ + 1;
								cout << "Майним..." << endl;
							}
							summ = 0;
							balance1 = summ + buffer3;
							cout << "Баланс: ";
							cout << balance1;
#endif // WHILE


						}
						else if (buffer == 5)
						{
							cout << "-------" << endl;
							cout << "Справка" << endl;
							cout << "-------" << endl;
							cout << endl;
							cout << "-------------------------------" << endl;
							cout << "AshotCoins App" << endl;
							cout << "Версия приложения: 0.0.4.9_Alpha" << endl;
							cout << "-------------------------------" << endl;
							cout << endl;
							cout << "-----------------------------------------" << endl;
							cout << "E-mail разработчика: ashotcoins092@gmail.com" << endl;
							cout << "-----------------------------------------" << endl;
						}

					}
				}
				if (buffer == l6 && buffer2 == p6)
				{
					cout << "Здравствуйте, Никита Денисович" << endl;
					cout << "------------------------------" << endl;
					while (true)
					{
						cout << "| 1.Проверка баланса | 2.Перевод | 3.Аккаунты, зарегестрированные в этом банке |" << endl;
						cout << "| 4. Майнинг ашоткойнов | 5. Справка | " << endl;
						cin >> buffer;
						if (buffer == 1)
						{
							cout << balance6;
							cout << " ашоткойн." << endl;
							cout << "------------" << endl;
						}
						else if (buffer == 2)
						{
							cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе[Будет убрана]." << endl;
							cin >> buffer2;
							cout << "-------------------------------------------------------" << endl;
							if (buffer2 == 1)
							{
								cout << "Номер счёта получателя: " << endl; cin >> buffer3;
								cout << "Сумма перевода: " << endl; cin >> b;
								if (buffer3 == l2)
								{
									balance2 += b;
									c = balance6 - b;
									balance6 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l3)
								{
									balance3 += b;
									c = balance6 - b;
									balance6 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l4)
								{
									balance4 += b;
									c = balance6 - b;
									balance6 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l5)
								{
									balance5 += b;
									c = balance6 - b;
									balance6 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l1)
								{
									balance1 += b;
									c = balance6 - b;
									balance6 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l7)
								{
									balance7 += b;
									c = balance6 - b;
									balance6 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l8)
								{
									balance8 += b;
									c = balance6 - b;
									balance6 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l9)
								{
									balance9 += b;
									c = balance6 - b;
									balance6 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Такого пользователя нет. Всё равно перевести?" << endl;
									cout << "1.Да 2.Нет" << endl; cin >> buffer2;
									cout << "---------------------------------------------" << endl;
									if (buffer2 == 1)
									{
										cout << "Переведено!" << endl;
										cout << "-----------" << endl;
										c = balance6 - b;
										balance6 = c;
									}
									if (buffer2 == 2)
									{
										cout << "Перевод не совершён. Причина: Отсутствие подтверждения." << endl;
										cout << "-------------------------------------------------------" << endl;
									}
								}
							}
							else if (buffer == 2)
							{
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "|Внимание! Эта функция в ближайшее время перестанет работать на некоторое время. Спасибо за понимание!|" << endl;
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
								cout << "Пин код: " << endl; cin >> buffer2;
								cout << "-------------------------------------" << endl;
								if (buffer == l3 && buffer2 == p3)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance6;
									balance6 = c;
									balance3 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else if (buffer == l2 && buffer2 == p2)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance6;
									balance6 = c;
									balance2 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l4 && buffer2 == p4)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance1;
									balance1 = c;
									balance4 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l5 && buffer2 == p5)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance6;
									balance6 = c;
									balance5 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l1 && buffer2 == p1)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance6;
									balance6 = c;
									balance1 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l8 && buffer2 == p8)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance6;
									balance6 = c;
									balance8 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l9 && buffer2 == p9)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance6;
									balance6 = c;
									balance9 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Неверный логин или пароль." << endl;
									cout << "--------------------------" << endl;
								}
							}
						}
						else if (buffer == 3)
						{
							cout << "-------------------------------------------------------------" << endl;
							cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
							cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
							cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
							cout << "4. Владислав Олегович. Login: 123456789. Balance: " << balance4 << endl;
							cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
							cout << "6. Никита Денисович. Login: 15044512. Balance: " << balance6 << endl;
							cout << "7. Игорь Александрович. Login: 321654987. Balance: " << balance7 << endl;
							cout << "8. Максим Николаевич. Login: 987654321. Balance: " << balance8 << endl;
							cout << "9. Иван Николаевич. Login: 895257157. Balance: " << balance9 << endl;
							cout << "-------------------------------------------------------------" << endl;
						}
						else if (buffer == 4)
						{
							cout << "Введите количество нужных ашоткойнов:" << endl; cin >> n;
							buffer3 = 0;
							for (int i = 0; i < n; i++)
							{
								buffer3 += 0.01;
								cout << "Майнинг..." << endl;
							}
							summ = 0;
							balance6 += buffer3;
							cout << "-----------" << endl;
							cout << "Баланс: ";
							cout << balance6 << endl;
							cout << "-----------" << endl;
#ifdef WHILE
							while (mayning > buffer3)
							{
								buffer3 = summ + 1;
								cout << "Майним..." << endl;
							}
							summ = 0;
							balance1 = summ + buffer3;
							cout << "Баланс: ";
							cout << balance1;
#endif // WHILE


						}
						else if (buffer == 5)
						{
							cout << "-------" << endl;
							cout << "Справка" << endl;
							cout << "-------" << endl;
							cout << endl;
							cout << "-------------------------------" << endl;
							cout << "AshotCoins App" << endl;
							cout << "Версия приложения: 0.0.4.9_Alpha" << endl;
							cout << "-------------------------------" << endl;
							cout << endl;
							cout << "-----------------------------------------" << endl;
							cout << "E-mail разработчика: ashotcoins092@gmail.com" << endl;
							cout << "-----------------------------------------" << endl;
						}
					}
				}
				if (buffer == l7 && buffer2 == p7)
				{
					cout << "Здравствуйте, Игорь Александрович" << endl;
					cout << "------------------------------" << endl;
					while (true)
					{
						cout << "| 1.Проверка баланса | 2.Перевод | 3.Аккаунты, зарегестрированные в этом банке |" << endl;
						cout << "| 4. Майнинг ашоткойнов | 5. Справка | " << endl;
						cin >> buffer;
						if (buffer == 1)
						{
							cout << balance7;
							cout << " ашоткойн." << endl;
							cout << "------------" << endl;
						}
						else if (buffer == 2)
						{
							cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе[Будет убрана]." << endl;
							cin >> buffer2;
							cout << "-------------------------------------------------------" << endl;
							if (buffer2 == 1)
							{
								cout << "Номер счёта получателя: " << endl; cin >> buffer3;
								cout << "Сумма перевода: " << endl; cin >> b;
								if (buffer3 == l2)
								{
									balance2 += b;
									c = balance7 - b;
									balance7 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l3)
								{
									balance3 += b;
									c = balance7 - b;
									balance7 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l4)
								{
									balance4 += b;
									c = balance7 - b;
									balance7 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l5)
								{
									balance5 += b;
									c = balance7 - b;
									balance7 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l1)
								{
									balance1 += b;
									c = balance7 - b;
									balance7 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l6)
								{
									balance6 += b;
									c = balance7 - b;
									balance7 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l8)
								{
									balance8 += b;
									c = balance7 - b;
									balance7 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l9)
								{
									balance9 += b;
									c = balance7 - b;
									balance7 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Такого пользователя нет. Всё равно перевести?" << endl;
									cout << "1.Да 2.Нет" << endl; cin >> buffer2;
									cout << "---------------------------------------------" << endl;
									if (buffer2 == 1)
									{
										cout << "Переведено!" << endl;
										cout << "-----------" << endl;
										c = balance7 - b;
										balance7 = c;
									}
									if (buffer2 == 2)
									{
										cout << "Перевод не совершён. Причина: Отсутствие подтверждения." << endl;
										cout << "-------------------------------------------------------" << endl;
									}
								}
							}
							else if (buffer == 2)
							{
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "|Внимание! Эта функция в ближайшее время перестанет работать на некоторое время. Спасибо за понимание!|" << endl;
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
								cout << "Пин код: " << endl; cin >> buffer2;
								cout << "-------------------------------------" << endl;
								if (buffer == l3 && buffer2 == p3)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance7;
									balance7 = c;
									balance3 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else if (buffer == l2 && buffer2 == p2)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance7;
									balance7 = c;
									balance2 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l4 && buffer2 == p4)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance7;
									balance7 = c;
									balance4 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l5 && buffer2 == p5)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance7;
									balance7 = c;
									balance5 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l1 && buffer2 == p1)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance7;
									balance7 = c;
									balance1 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l6 && buffer2 == p6)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance7;
									balance7 = c;
									balance6 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l8 && buffer2 == p8)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance7;
									balance7 = c;
									balance8 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l9 && buffer2 == p9)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance7;
									balance7 = c;
									balance9 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Неверный логин или пароль." << endl;
									cout << "--------------------------" << endl;
								}
							}
						}
						else if (buffer == 3)
						{
							cout << "-------------------------------------------------------------" << endl;
							cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
							cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
							cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
							cout << "4. Владислав Олегович. Login: 123456789. Balance: " << balance4 << endl;
							cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
							cout << "6. Никита Денисович. Login: 15044512. Balance: " << balance6 << endl;
							cout << "7. Игорь Александрович. Login: 321654987. Balance: " << balance7 << endl;
							cout << "8. Максим Николаевич. Login: 987654321. Balance: " << balance8 << endl;
							cout << "9. Иван Николаевич. Login: 895257157. Balance: " << balance9 << endl;
							cout << "-------------------------------------------------------------" << endl;
						}
						else if (buffer == 4)
						{
							cout << "Введите количество нужных ашоткойнов:" << endl; cin >> n;
							buffer3 = 0;
							for (int i = 0; i < n; i++)
							{
								buffer3 += 0.01;
								cout << "Майнинг..." << endl;
							}
							summ = 0;
							balance7 += buffer3;
							cout << "-----------" << endl;
							cout << "Баланс: ";
							cout << balance7 << endl;
							cout << "-----------" << endl;
#ifdef WHILE
							while (mayning > buffer3)
							{
								buffer3 = summ + 1;
								cout << "Майним..." << endl;
							}
							summ = 0;
							balance1 = summ + buffer3;
							cout << "Баланс: ";
							cout << balance1;
#endif // WHILE


						}
						else if (buffer == 5)
						{
							cout << "-------" << endl;
							cout << "Справка" << endl;
							cout << "-------" << endl;
							cout << endl;
							cout << "-------------------------------" << endl;
							cout << "AshotCoins App" << endl;
							cout << "Версия приложения: 0.0.4.9_Alpha" << endl;
							cout << "-------------------------------" << endl;
							cout << endl;
							cout << "-----------------------------------------" << endl;
							cout << "E-mail разработчика: ashotcoins092@gmail.com" << endl;
							cout << "-----------------------------------------" << endl;
						}
					}
				}
				if (buffer == l8 && buffer2 == p8)
				{
					cout << "Здравствуйте, Максим Николаевич" << endl;
					cout << "------------------------------" << endl;
					while (true)
					{
						cout << "| 1.Проверка баланса | 2.Перевод | 3.Аккаунты, зарегестрированные в этом банке |" << endl;
						cout << "| 4. Майнинг ашоткойнов | 5. Справка | " << endl;
						cin >> buffer;
						if (buffer == 1)
						{
							cout << balance8;
							cout << " ашоткойн." << endl;
							cout << "------------" << endl;
						}
						else if (buffer == 2)
						{
							cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе[Будет убрана]." << endl;
							cin >> buffer2;
							cout << "-------------------------------------------------------" << endl;
							if (buffer2 == 1)
							{
								cout << "Номер счёта получателя: " << endl; cin >> buffer3;
								cout << "Сумма перевода: " << endl; cin >> b;
								if (buffer3 == l2)
								{
									balance2 += b;
									c = balance8 - b;
									balance8 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l3)
								{
									balance3 += b;
									c = balance8 - b;
									balance8 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l4)
								{
									balance4 += b;
									c = balance8 - b;
									balance7 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l5)
								{
									balance5 += b;
									c = balance8 - b;
									balance8 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l1)
								{
									balance1 += b;
									c = balance8 - b;
									balance8 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l6)
								{
									balance6 += b;
									c = balance8 - b;
									balance8 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l7)
								{
									balance7 += b;
									c = balance8 - b;
									balance8 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l9)
								{
									balance9 += b;
									c = balance8 - b;
									balance8 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Такого пользователя нет. Всё равно перевести?" << endl;
									cout << "1.Да 2.Нет" << endl; cin >> buffer2;
									cout << "---------------------------------------------" << endl;
									if (buffer2 == 1)
									{
										cout << "Переведено!" << endl;
										cout << "-----------" << endl;
										c = balance8 - b;
										balance8 = c;
									}
									if (buffer2 == 2)
									{
										cout << "Перевод не совершён. Причина: Отсутствие подтверждения." << endl;
										cout << "-------------------------------------------------------" << endl;
									}
								}
							}
							else if (buffer == 2)
							{
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "|Внимание! Эта функция в ближайшее время перестанет работать на некоторое время. Спасибо за понимание!|" << endl;
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
								cout << "Пин код: " << endl; cin >> buffer2;
								cout << "-------------------------------------" << endl;
								if (buffer == l3 && buffer2 == p3)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance8;
									balance8 = c;
									balance3 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else if (buffer == l2 && buffer2 == p2)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance8;
									balance8 = c;
									balance2 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l4 && buffer2 == p4)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance8;
									balance8 = c;
									balance4 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l5 && buffer2 == p5)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance8;
									balance8 = c;
									balance5 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l1 && buffer2 == p1)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance8;
									balance8 = c;
									balance1 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l6 && buffer2 == p6)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance8;
									balance8 = c;
									balance6 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l7 && buffer == p6)
								{
									cout << "Сколько вы хотите снять?" << endl; cin >> b;
									c = b + balance8;
									balance8 = c;
									balance7 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l9 && buffer == p9)
								{
									cout << "Сколько вы хотите снять?" << endl; cin >> b;
									c = b + balance8;
									balance8 = c;
									balance9 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Неверный логин или пароль." << endl;
									cout << "--------------------------" << endl;
								}
							}
						}
						else if (buffer == 3)
						{
							cout << "-------------------------------------------------------------" << endl;
							cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
							cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
							cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
							cout << "4. Владислав Олегович. Login: 123456789. Balance: " << balance4 << endl;
							cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
							cout << "6. Никита Денисович. Login: 15044512. Balance: " << balance6 << endl;
							cout << "7. Игорь Александрович. Login: 321654987. Balance: " << balance7 << endl;
							cout << "8. Максим Николаевич. Login: 987654321. Balance: " << balance8 << endl;
							cout << "9. Иван Николаевич. Login: 895257157. Balance: " << balance9 << endl;
							cout << "-------------------------------------------------------------" << endl;
						}
						else if (buffer == 4)
						{
							cout << "Введите количество нужных ашоткойнов:" << endl; cin >> n;
							buffer3 = 0;
							for (int i = 0; i < n; i++)
							{
								buffer3 += 0.01;
								cout << "Майнинг..." << endl;
							}
							summ = 0;
							balance8 += buffer3;
							cout << "-----------" << endl;
							cout << "Баланс: ";
							cout << balance8 << endl;
							cout << "-----------" << endl;
#ifdef WHILE
							while (mayning > buffer3)
							{
								buffer3 = summ + 1;
								cout << "Майним..." << endl;
							}
							summ = 0;
							balance1 = summ + buffer3;
							cout << "Баланс: ";
							cout << balance1;
#endif // WHILE


						}
						else if (buffer == 5)
						{
							cout << "-------" << endl;
							cout << "Справка" << endl;
							cout << "-------" << endl;
							cout << endl;
							cout << "-------------------------------" << endl;
							cout << "AshotCoins App" << endl;
							cout << "Версия приложения: 0.0.4.9_Alpha" << endl;
							cout << "-------------------------------" << endl;
							cout << endl;
							cout << "-----------------------------------------" << endl;
							cout << "E-mail разработчика: ashotcoins092@gmail.com" << endl;
							cout << "-----------------------------------------" << endl;
						}
					}
				}
				if (buffer == l9 && buffer2 == p9)
				{
					cout << "Здравствуйте, Иван Николаевич" << endl;
					cout << "------------------------------" << endl;
					while (true)
					{
						cout << "| 1.Проверка баланса | 2.Перевод | 3.Аккаунты, зарегестрированные в этом банке |" << endl;
						cout << "| 4. Майнинг ашоткойнов | 5. Справка | " << endl;
						cin >> buffer;
						if (buffer == 1)
						{
							cout << balance9;
							cout << " ашоткойн." << endl;
							cout << "------------" << endl;
						}
						else if (buffer == 2)
						{
							cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе[Будет убрана]." << endl;
							cin >> buffer2;
							cout << "---------------------------------------------------------------------------------" << endl;
							if (buffer2 == 1)
							{
								cout << "Номер счёта получателя: " << endl; cin >> buffer3;
								cout << "Сумма перевода: " << endl; cin >> b;
								if (buffer3 == l2)
								{
									balance2 += b;
									c = balance9 - b;
									balance9 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l3)
								{
									balance3 += b;
									c = balance9 - b;
									balance9 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l4)
								{
									balance4 += b;
									c = balance9 - b;
									balance9 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l5)
								{
									balance5 += b;
									c = balance9 - b;
									balance9 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l6)
								{
									balance6 += b;
									c = balance9 - b;
									balance9 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l7)
								{
									balance7 += b;
									c = balance9 - b;
									balance9 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l8)
								{
									balance8 += b;
									c = balance9 - b;
									balance9 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer3 == l1)
								{
									balance1 += b;
									c = balance9 - b;
									balance9 = c;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Такого пользователя нет. Всё равно перевести?" << endl;
									cout << "1.Да 2.Нет" << endl; cin >> buffer2;
									cout << "---------------------------------------------" << endl;
									if (buffer2 == 1)
									{
										cout << "Переведено!" << endl;
										cout << "-----------" << endl;
										c = balance9 - b;
										balance9 = c;
									}
									if (buffer2 == 2)
									{
										cout << "Перевод не совершён. Причина: Отсутствие подтверждения." << endl;
										cout << "-------------------------------------------------------" << endl;
									}
								}
							}
							else if (buffer == 2)
							{
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "|Внимание! Эта функция в ближайшее время перестанет работать на некоторое время. Спасибо за понимание!|" << endl;
								cout << "-------------------------------------------------------------------------------------------------------" << endl;
								cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
								cout << "Пин код: " << endl; cin >> buffer2;
								cout << "-------------------------------------" << endl;
								if (buffer == l3 && buffer2 == p3)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance9;
									balance9 = c;
									balance3 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}

								else if (buffer == l2 && buffer2 == p2)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance9;
									balance9 = c;
									balance2 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l4 && buffer2 == p4)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance9;
									balance9 = c;
									balance4 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l5 && buffer2 == p5)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance9;
									balance9 = c;
									balance5 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l6 && buffer2 == p6)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance9;
									balance9 = c;
									balance6 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l7 && buffer2 == p7)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance9;
									balance9 = c;
									balance7 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l8 && buffer2 == p8)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance9;
									balance9 = c;
									balance8 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else if (buffer == l1 && buffer2 == p1)
								{
									cout << "Сколько вы хотите снять? " << endl;
									cin >> b;
									c = b + balance9;
									balance9 = c;
									balance1 -= b;
									cout << "Переведено!" << endl;
									cout << "-----------" << endl;
								}
								else
								{
									cout << "Неверный логин или пароль." << endl;
									cout << "--------------------------" << endl;
								}
							}
						}
						else if (buffer == 3)
						{
							cout << "-------------------------------------------------------------" << endl;
							cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
							cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
							cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
							cout << "4. Владимир Олегович. Login: 123456789. Balance: " << balance4 << endl;
							cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
							cout << "6. Никита Денисович. Login: 15044512. Balance: " << balance6 << endl;
							cout << "7. Игорь Александрович. Login: 321654987. Balance: " << balance7 << endl;
							cout << "8. Максим Николаевич. Login: 987654321. Balance: " << balance8 << endl;
							cout << "9. Иван Николаевич. Login: 895257157. Balance: " << balance9 << endl;
							cout << "-------------------------------------------------------------" << endl;
						}
						else if (buffer == 4)
						{
							cout << "Введите количество нужных ашоткойнов:" << endl; cin >> n;
							buffer3 = 0;
							for (int i = 0; i < n; i++)
							{
								buffer3 += 0.01;
								cout << "Майнинг..." << endl;
							}
							summ = 0;
							balance9 += buffer3;
							cout << "-----------" << endl;
							cout << "Баланс: ";
							cout << balance9 << endl;
							cout << "-----------" << endl;
#ifdef WHILE
							while (mayning > buffer3)
							{
								buffer3 = summ + 1;
								cout << "Майним..." << endl;
							}
							summ = 0;
							balance1 = summ + buffer3;
							cout << "Баланс: ";
							cout << balance1;
#endif // WHILE


						}
						else if (buffer == 5)
						{
							cout << "-------" << endl;
							cout << "Справка" << endl;
							cout << "-------" << endl;
							cout << endl;
							cout << "-------------------------------" << endl;
							cout << "AshotCoins App" << endl;
							cout << "Версия приложения: 0.0.4.9_Alpha" << endl;
							cout << "-------------------------------" << endl;
							cout << endl;
							cout << "-----------------------------------------" << endl;
							cout << "E-mail разработчика: ashotcoins092@gmail.com" << endl;
							cout << "-----------------------------------------" << endl;
						}
					}
				}

				else if (buffer == dev || buffer2 == dev)
				{
					cout << "----------------------------------------" << endl;
					cout << "Developer Information" << endl;
					cout << "\"AshotCoins\" app version 0.0.4.9 Alpha" << endl;
					cout << "Developer E-mail: ashotcoins092@gmail.com" << endl;
					cout << "Programming language: C++" << endl;
					cout << "----------------------------------------" << endl;
					cout << endl;
					cout << "----------------------------------------" << endl;
					cout << "Online features: false" << endl;
					cout << "Mining features: true" << endl;
					cout << "Registered person: 9" << endl;
					cout << "Security: true" << endl;
					cout << "----------------------------------------" << endl;
					restart = 1;

				}
				else
				{
					cout << "--------------------------" << endl;
					cout << "Неверный логин или пароль!" << endl;
					cout << "--------------------------" << endl;
					restart = 1;
				}


			}while (restart == 1);
		}
		else
		{
		cout << "Код был изменён! Запуск отменён." << endl;
		}
		
	
}