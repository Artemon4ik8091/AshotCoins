#include <iostream>
using namespace std;
//#define WHILE
double l1 = 200920070;
double l2 = 555913746;
double l3 = 449936400;
double l4 = 123456789;
double p1 = 5125;
double p2 = 2904;
double p3 = 9891;
double p4 = 1234;
double buffer;
double buffer2;
double n;
double summ = 0;
double balance1 = 2;
double balance2 = 3;
double balance3 = 1;
double balance4 = 2;
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
		cout << "������� �����: " << endl; cin >> buffer;
		cout << "������� ��� ���: " << endl; cin >> buffer2;
		if (buffer == l1 && buffer2 == p1)
		{
			cout << "������������, ���� ����������" << endl;
			while (true)
			{
				cout << "1.�������� ������� 2.������� 3.��������, ������������������ � ���� �����: " << endl;
				cout << "4. ������� ����������" << endl;
				cin >> buffer;
				if (buffer == 1)
				{
					cout << balance1;
					cout << " ��������." << endl;
				}
				else if (buffer == 2)
				{
					cout << "1.��������� ����-�� 2.����� � ����-�� � ��������� ����." << endl;
					cin >> buffer2;
					if (buffer2 == 1)
					{
						cout << "����� ����� ����������: " << endl; cin >> buffer3;
						cout << "����� ��������: " << endl; cin >> b;
						cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������" << endl;
						c = balance1 - b;
						balance1 = c;
					}
					else if (buffer == 2)
					{
						cout << "����� ����� � �������� ������ �����: " << endl; cin >> buffer;
						cout << "��� ���: " << endl; cin >> buffer2;
						if (buffer == l3 && buffer2 == p3)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance1;
							balance1 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}

						else if (buffer == l2 && buffer2 == p2)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance1;
							balance1 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}
						else if (buffer == l4 && buffer2 == p4)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance1;
							balance1 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}
						else
						{
							cout << "�������� ����� ��� ������." << endl;
						}
					}
				}
				else if (buffer == 3)
				{
					cout << "1. ���� ����������. Login: 200920070" << endl;
					cout << "2. ������� �������������. Login: 555913746" << endl;
					cout << "3. ������ ����������. Login: 449936400" << endl;
					cout << "4. ��������. Login: 123456789" << endl;
				}
				else if (buffer == 4)
				{
					cout << "������� ���������� ������ ����������:" << endl; cin >> n;
					buffer3 = 0;
					for (int i = 0; i < n; i++)
					{
						buffer3 += 0.01;
						cout << "������..." << endl;
					}
					summ = 0;
					balance1 += buffer3;
					cout << "������: ";
					cout << balance1 << endl;
#ifdef WHILE
					while (mayning > buffer3)
					{
						buffer3 = summ + 1;
						cout << "������..." << endl;
					}
					summ = 0;
					balance1 = summ + buffer3;
					cout << "������: ";
					cout << balance1;
#endif // WHILE


				}
			}
		}
		if (buffer == l2 && buffer2 == p2)
		{
			cout << "������������, ������� �������������" << endl;
			while (true)
			{
				cout << "1.�������� ������� 2.������� 3.��������, ������������������ � ���� �����: " << endl;
				cout << "4. ������� ����������" << endl;
				cin >> buffer;
				if (buffer == 1)
				{
					cout << balance2;
					cout << " ��������." << endl;
				}
				else if (buffer == 2)
				{
					cout << "1.��������� ����-�� 2.����� � ����-�� � ��������� ����." << endl;
					cin >> buffer2;
					if (buffer2 == 1)
					{
						cout << "����� ����� ����������: " << endl; cin >> buffer3;
						cout << "����� ��������: " << endl; cin >> b;
						cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������" << endl;
						c = balance2 - b;
						balance2 = c;
					}
					else if (buffer == 2)
					{
						cout << "����� ����� � �������� ������ �����: " << endl; cin >> buffer;
						cout << "��� ���: " << endl; cin >> buffer2;
						if (buffer == l1 && buffer2 == p1)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance2;
							balance2 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}

						else if (buffer == l3 && buffer2 == p3)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance2;
							balance2 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}
						else if (buffer == l4 && buffer2 == p4)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance2;
							balance2 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}
						else
						{
							cout << "�������� ����� ��� ������." << endl;
						}
					}
				}
				else if (buffer == 3)
				{
					cout << "1. ���� ����������. Login: 200920070" << endl;
					cout << "2. ������� �������������. Login: 555913746" << endl;
					cout << "3. ������ ����������. Login: 449936400" << endl;
					cout << "4. ��������. Login: 123456789" << endl;
				}
				else if (buffer == 4)
				{
					cout << "������� ���������� ������ ����������:" << endl; cin >> n;
					buffer3 = 0;
					for (int i = 0; i < n; i++)
					{
						buffer3 += 0.01;
						cout << "������..." << endl;
					}
					summ = 0;
					balance2 += buffer3;
					cout << "������: ";
					cout << balance2 << endl;
#ifdef WHILE
					while (mayning > buffer3)
					{
						buffer3 = summ + 1;
						cout << "������..." << endl;
					}
					summ = 0;
					balance1 = summ + buffer3;
					cout << "������: ";
					cout << balance1;
#endif // WHILE


				}
			}

		}
		if (buffer == l3 && buffer2 == p3)
		{
			cout << "������������, ������ ����������" << endl;
			while (true)
			{
				cout << "1.�������� ������� 2.������� 3.��������, ������������������ � ���� �����: " << endl;
				cout << "4. ������� ����������" << endl;
				cin >> buffer;
				if (buffer == 1)
				{
					cout << balance3;
					cout << " ��������." << endl;
				}
				else if (buffer == 2)
				{
					cout << "1.��������� ����-�� 2.����� � ����-�� � ��������� ����." << endl;
					cin >> buffer2;
					if (buffer2 == 1)
					{
						cout << "����� ����� ����������: " << endl; cin >> buffer3;
						cout << "����� ��������: " << endl; cin >> b;
						cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������" << endl;
						c = balance3 - b;
						balance3 = c;
					}
					else if (buffer == 2)
					{
						cout << "����� ����� � �������� ������ �����: " << endl; cin >> buffer;
						cout << "��� ���: " << endl; cin >> buffer2;
						if (buffer == l1 && buffer2 == p1)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance3;
							balance3 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}

						else if (buffer == l2 && buffer2 == p2)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance3;
							balance3 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}
						else if (buffer == l4 && buffer2 == p4)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance4;
							balance4 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}
						else
						{
							cout << "�������� ����� ��� ������." << endl;
						}
					}
				}
				else if (buffer == 3)
				{
					cout << "1. ���� ����������. Login: 200920070" << endl;
					cout << "2. ������� �������������. Login: 555913746" << endl;
					cout << "3. ������ ����������. Login: 449936400" << endl;
					cout << "4. ��������. Login: 123456789" << endl;
				}
				else if (buffer == 4)
				{
					cout << "������� ���������� ������ ����������:" << endl; cin >> n;
					buffer3 = 0;
					for (int i = 0; i < n; i++)
					{
						buffer3 += 0.01;
						cout << "������..." << endl;
					}
					summ = 0;
					balance3 += buffer3;
					cout << "������: ";
					cout << balance3 << endl;
#ifdef WHILE
					while (mayning > buffer3)
					{
						buffer3 = summ + 1;
						cout << "������..." << endl;
					}
					summ = 0;
					balance1 = summ + buffer3;
					cout << "������: ";
					cout << balance1;
#endif // WHILE


				}

			}
		}
		if (buffer == l4 && buffer2 == p4)
		{
			cout << "������������, ��������" << endl;
			while (true)
			{
				cout << "1.�������� ������� 2.������� 3.��������, ������������������ � ���� �����: " << endl;
				cout << "4. ������� ����������" << endl;
				cin >> buffer;
				if (buffer == 1)
				{
					cout << balance4;
					cout << " ��������." << endl;
				}
				else if (buffer == 2)
				{
					cout << "1.��������� ����-�� 2.����� � ����-�� � ��������� ����." << endl;
					cin >> buffer2;
					if (buffer2 == 1)
					{
						cout << "����� ����� ����������: " << endl; cin >> buffer3;
						cout << "����� ��������: " << endl; cin >> b;
						cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������" << endl;
						c = balance4 - b;
						balance4 = c;
					}
					else if (buffer == 2)
					{
						cout << "����� ����� � �������� ������ �����: " << endl; cin >> buffer;
						cout << "��� ���: " << endl; cin >> buffer2;
						if (buffer == l1 && buffer2 == p1)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance4;
							balance4 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}

						else if (buffer == l2 && buffer2 == p2)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance4;
							balance4 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}
						else if (buffer == l3 && buffer2 == p3)
						{
							cout << "������� �� ������ �����? " << endl;
							cin >> b;
							c = b + balance4;
							balance4 = c;
							cout << "����������! ��� ������������� �������� �������� � �������� ������������ � ��������." << endl;
						}
						else
						{
							cout << "�������� ����� ��� ������." << endl;
						}
					}
				}
				else if (buffer == 3)
				{
					cout << "1. ���� ����������. Login: 200920070" << endl;
					cout << "2. ������� �������������. Login: 555913746" << endl;
					cout << "3. ������ ����������. Login: 449936400" << endl;
					cout << "4. ��������. Login: 123456789" << endl;
				}
				else if (buffer == 4)
				{
					cout << "������� ���������� ������ ����������:" << endl; cin >> n;
					buffer3 = 0;
					for (int i = 0; i < n; i++)
					{
						buffer3 += 0.01;
						cout << "������..." << endl;
					}
					summ = 0;
					balance3 += buffer3;
					cout << "������: ";
					cout << balance3 << endl;
#ifdef WHILE
					while (mayning > buffer3)
					{
						buffer3 = summ + 1;
						cout << "������..." << endl;
					}
					summ = 0;
					balance1 = summ + buffer3;
					cout << "������: ";
					cout << balance1;
#endif // WHILE


				}

			}
		}
		else if (buffer == dev || buffer2 == dev)
		{
			cout << "Developer Information" << endl;
			cout << "\"Ashotcoins\" app version 0.0.2.4 Alpha" << endl;
			cout << "Developer E-mail: yandex8091@gmail.com" << endl;
			cout << "Programming language: C++" << endl;
			cout << endl;
			cout << "Online features: false" << endl;
			cout << "Mayning features: true" << endl;
			cout << "Registered person: 4" << endl;
			restart = 1;

		}
		else
		{
			cout << "�������� ����� ��� ������!" << endl;
			restart = 1;
		}
	

	}while (restart == 1);
}