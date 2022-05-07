#include <iostream>
using namespace std;
//#define WHILE
double l1 = 200920070;
double l2 = 555913746;
double l3 = 449936400;
double l4 = 123456789;
double l5 = 200950087;
double p1 = 5125;
double p2 = 2904;
double p3 = 9891;
double p4 = 1234;
double p5 = 4523;
double buffer;
double buffer2;
double n;
double summ = 0;
double balance1 = 4;
double balance2 = 5;
double balance3 = 4;
double balance4 = 4;
double balance5 = 2;
double c;
double dev = 8624;
double b;
double buffer3;
double restart = 0;
void main()
{
	setlocale(LC_ALL, "russian");
	do
	{
		cout << "Банк для Ашоткойнов. Version: 0.0.2.5 Alpha" << endl;
		cout << "В честь каждого 5-го юзера мы дарим 2 ашоткойна!" << endl;
		cout << "Введите логин: " << endl; cin >> buffer;
		cout << "Введите пин код: " << endl; cin >> buffer2;
		if (buffer == l1 && buffer2 == p1)
		{
			cout << "Здравствуйте, Артём Дмитриевич" << endl;
			while (true)
			{
				cout << "1.Проверка баланса 2.Перевод 3.Аккаунты, зарегестрированные в этом банке: " << endl;
				cout << "4. Майнинг ашоткойнов" << endl;
				cin >> buffer;
				if (buffer == 1)
				{
					cout << balance1;
					cout << " ашоткойн." << endl;
				}
				else if (buffer == 2)
				{
					cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе." << endl;
					cin >> buffer2;
					if (buffer2 == 1)
					{
						cout << "Номер счёта получателя: " << endl; cin >> buffer3;
						cout << "Сумма перевода: " << endl; cin >> b;
						cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе" << endl;
						c = balance1 - b;
						balance1 = c;
					}
					else if (buffer == 2)
					{
						cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
						cout << "Пин код: " << endl; cin >> buffer2;
						if (buffer == l3 && buffer2 == p3)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance1;
							balance1 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}

						else if (buffer == l2 && buffer2 == p2)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance1;
							balance1 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l4 && buffer2 == p4)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance1;
							balance1 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l5 && buffer2 == p5)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance1;
							balance1 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else
						{
							cout << "Неверный логин или пароль." << endl;
						}
					}
				}
				else if (buffer == 3)
				{
					cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
					cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
					cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
					cout << "4. Владимир Олегович. Login: 123456789. Balance: " << balance4 << endl;
					cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
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
					cout << "Баланс: ";
					cout << balance1 << endl;
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
			}
		}
		if (buffer == l2 && buffer2 == p2)
		{
			cout << "Здравствуйте, Дмитрий Александрович" << endl;
			while (true)
			{
				cout << "1.Проверка баланса 2.Перевод 3.Аккаунты, зарегестрированные в этом банке: " << endl;
				cout << "4. Майнинг ашоткойнов" << endl;
				cin >> buffer;
				if (buffer == 1)
				{
					cout << balance2;
					cout << " ашоткойн." << endl;
				}
				else if (buffer == 2)
				{
					cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе." << endl;
					cin >> buffer2;
					if (buffer2 == 1)
					{
						cout << "Номер счёта получателя: " << endl; cin >> buffer3;
						cout << "Сумма перевода: " << endl; cin >> b;
						cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе" << endl;
						c = balance2 - b;
						balance2 = c;
					}
					else if (buffer == 2)
					{
						cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
						cout << "Пин код: " << endl; cin >> buffer2;
						if (buffer == l1 && buffer2 == p1)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance2;
							balance2 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}

						else if (buffer == l3 && buffer2 == p3)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance2;
							balance2 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l4 && buffer2 == p4)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance2;
							balance2 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l5 && buffer2 == p5)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance2;
							balance2 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else
						{
							cout << "Неверный логин или пароль." << endl;
						}
					}
				}
				else if (buffer == 3)
				{
					cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
					cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
					cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
					cout << "4. Владимир Олегович. Login: 123456789. Balance: " << balance4 << endl;
					cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
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
					cout << "Баланс: ";
					cout << balance2 << endl;
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
			}

		}
		if (buffer == l3 && buffer2 == p3)
		{
			cout << "Здравствуйте, Матвей Дмитриевич" << endl;
			while (true)
			{
				cout << "1.Проверка баланса 2.Перевод 3.Аккаунты, зарегестрированные в этом банке: " << endl;
				cout << "4. Майнинг ашоткойнов" << endl;
				cin >> buffer;
				if (buffer == 1)
				{
					cout << balance3;
					cout << " ашоткойн." << endl;
				}
				else if (buffer == 2)
				{
					cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе." << endl;
					cin >> buffer2;
					if (buffer2 == 1)
					{
						cout << "Номер счёта получателя: " << endl; cin >> buffer3;
						cout << "Сумма перевода: " << endl; cin >> b;
						cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе" << endl;
						c = balance3 - b;
						balance3 = c;
					}
					else if (buffer == 2)
					{
						cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
						cout << "Пин код: " << endl; cin >> buffer2;
						if (buffer == l1 && buffer2 == p1)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance3;
							balance3 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}

						else if (buffer == l2 && buffer2 == p2)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance3;
							balance3 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l4 && buffer2 == p4)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance3;
							balance3 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l5 && buffer2 == p5)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance3;
							balance3 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else
						{
							cout << "Неверный логин или пароль." << endl;
						}
					}
				}
				else if (buffer == 3)
				{
					cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
					cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
					cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
					cout << "4. Владимир Олегович. Login: 123456789. Balance: " << balance4 << endl;
					cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
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
					cout << "Баланс: ";
					cout << balance3 << endl;
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

			}
		}
		if (buffer == l4 && buffer2 == p4)
		{
			cout << "Здравствуйте, Владимир Олегович" << endl;
			while (true)
			{
				cout << "1.Проверка баланса 2.Перевод 3.Аккаунты, зарегестрированные в этом банке: " << endl;
				cout << "4. Майнинг ашоткойнов" << endl;
				cin >> buffer;
				if (buffer == 1)
				{
					cout << balance4;
					cout << " ашоткойн." << endl;
				}
				else if (buffer == 2)
				{
					cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе." << endl;
					cin >> buffer2;
					if (buffer2 == 1)
					{
						cout << "Номер счёта получателя: " << endl; cin >> buffer3;
						cout << "Сумма перевода: " << endl; cin >> b;
						cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе" << endl;
						c = balance4 - b;
						balance4 = c;
					}
					else if (buffer == 2)
					{
						cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
						cout << "Пин код: " << endl; cin >> buffer2;
						if (buffer == l1 && buffer2 == p1)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance4;
							balance4 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}

						else if (buffer == l2 && buffer2 == p2)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance4;
							balance4 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l3 && buffer2 == p3)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance4;
							balance4 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l5 && buffer2 == p5)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance4;
							balance4 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else
						{
							cout << "Неверный логин или пароль." << endl;
						}
					}
				}
				else if (buffer == 3)
				{
					cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
					cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
					cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
					cout << "4. Владимир Олегович. Login: 123456789. Balance: " << balance4 << endl;
					cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
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
					cout << "Баланс: ";
					cout << balance3 << endl;
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

			}
		}
		if (buffer == l5 && buffer2 == p5)
		{
			cout << "Здравствуйте, Илья Игоревич" << endl;
			while (true)
			{
				cout << "1.Проверка баланса 2.Перевод 3.Аккаунты, зарегестрированные в этом банке: " << endl;
				cout << "4. Майнинг ашоткойнов" << endl;
				cin >> buffer;
				if (buffer == 1)
				{
					cout << balance5;
					cout << " ашоткойн." << endl;
				}
				else if (buffer == 2)
				{
					cout << "1.Перевести кому-то 2.Снять у кого-то и перевести себе." << endl;
					cin >> buffer2;
					if (buffer2 == 1)
					{
						cout << "Номер счёта получателя: " << endl; cin >> buffer3;
						cout << "Сумма перевода: " << endl; cin >> b;
						cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе" << endl;
						c = balance5 - b;
						balance4 = c;
					}
					else if (buffer == 2)
					{
						cout << "Номер счёта с которого хотите снять: " << endl; cin >> buffer;
						cout << "Пин код: " << endl; cin >> buffer2;
						if (buffer == l1 && buffer2 == p1)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance5;
							balance5 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}

						else if (buffer == l2 && buffer2 == p2)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance5;
							balance5 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l3 && buffer2 == p3)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance5;
							balance5 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else if (buffer == l4 && buffer2 == p4)
						{
							cout << "Сколько вы хотите снять? " << endl;
							cin >> b;
							c = b + balance5;
							balance5 = c;
							cout << "Переведено! Для подтверждения перевода напишите и сообщите разработчику о переводе." << endl;
						}
						else
						{
							cout << "Неверный логин или пароль." << endl;
						}
					}
				}
				else if (buffer == 3)
				{
					cout << "1. Артём Дмитриевич (Developer). Login: 200920070. Balance: " << balance1 << endl;
					cout << "2. Дмитрий Александрович. Login: 555913746. Balance: " << balance2 << endl;
					cout << "3. Матвей Дмитриевич (Developer). Login: 449936400. Balance: " << balance3 << endl;
					cout << "4. Владимир Олегович. Login: 123456789. Balance: " << balance4 << endl;
					cout << "5. Илья Игоревич. Login: 200950087. Balance: " << balance5 << endl;
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
					cout << "Баланс: ";
					cout << balance5 << endl;
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

			}
		}
		else if (buffer == dev || buffer2 == dev)
		{
			cout << "Developer Information" << endl;
			cout << "\"Ashotcoins\" app version 0.0.2.5 Alpha" << endl;
			cout << "Developer E-mail: yandex8091@gmail.com" << endl;
			cout << "Programming language: C++" << endl;
			cout << endl;
			cout << "Online features: false" << endl;
			cout << "Mayning features: true" << endl;
			cout << "Registered person: 5" << endl;
			restart = 1;

		}
		else
		{
			cout << "Неверный логин или пароль!" << endl;
			restart = 1;
		}
	

	}while (restart == 1);
}