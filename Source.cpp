//#include"Water.h"
#include<iostream>
#include"String.h"
#include <string>
#include<fstream>
#include<Windows.h>

using namespace std;
int main() {

	TV tv1(13,5,15,50);
	Remote pult {&tv1};
	cout << "tv 1" << endl;
	tv1.print();
	+pult;
	pult.goChanell(8);
	tv1.print();
	 +pult;
	 ++pult;
	
	tv1.print();
	-pult;
	tv1.print();

	cout << endl;
	cout << endl;
	
	







	/*ifstream ifs("Channels.txt"); //����, � ������� �������� ���������� � �������
	vector <Channel> channels; //����� ����� ��������� ������
	int number;
	ifs >> number; //��������� ����� ������� (������ ������ � �����)
	int channelNumber; //���������� ��� �������� ������ ������
	string channelName; //��� �������� �������� ������

	for (int i = 0; i < number; i++) {
		ifs >> channelNumber >> channelName;
		channels.push_back(Channel(channelNumber, channelName)); //��������� ������ �������
	}

	fstream file("Current.txt", ios::in); //��������� ���� ��� ������
	int vol, current;
	file >> current >> vol; //��������� ������� ����� � ���������

	TV tv(false, current - 1, vol, channels); //������� ��������� � ��������� �����������

	cout << "upravlenie:" << endl;
	cout << "w - vkl/vikl" << endl << "strelki pravo/levo - perekluchennie kanalov" << endl;
	cout << "strelki verh /niz - zvyk" << endl << "c - zadat kanal v ruchnuu" << endl;

	int key; // ��� �������

	while (true) {
		if (_kbhit()) { //���� ���� ������ �������
			key = _getch(); //�������� �� ���

			if (key == 119 || key == 230)  //���� ������ w
				tv.Turn(!tv.isOn()); //�������� ���������
			else {//���� ��� ����� ������� ����� w, �� ��������� ������� �� ���������, ���� ��, �� ��������� ������
				if (!tv.isOn()) {
					continue; //� ������� ����� ��������� ��������� � ��������� �������� �����
				}
			}
			if (key == 225 || key == 99) { // ���� �
				int number;
				cout << "enter kanal: " << endl;
				cin >> number; // ��������� ����� ������, ���������� �������������
				tv.switchChannel(number - 1); //� ����������� �� ���� �����
			}
			if (_kbhit()) { //���� ��� ������� ������� ������� �� 2 ���� (���� ������� �� 2 ����), �� ��������� �� ������ �������
				int key2 = _getch(); //�������� ��� �������

				switch (key2) {
				case 72: //����������� ����
					tv.switchVolume(true);
					cout << "zvuk ++" << endl;
					break;
				case 75: //���������� �����
					tv.switchChannel(false);
					cout << "predidushuyy kanal" << endl;
					break;
				case 80: //��������� ����
					tv.switchVolume(false);
					cout << "zvyk--" << endl;
					break;
				case 77: //��������� �����
					tv.switchChannel(true);
					cout << "kanal ++" << endl;
					break;
				}
			}
		}

	}*/
	system("pause");
	return 0;

}

   
	
	/*Water water("river",6,10,3,10);
	Water water1("lva",5,1,1,1);
	water.setType(Water::TypeWater::LAKE);
	water1.setType(Water::TypeWater::LAKE);
	water.print();
	
	cout << "_______________" << endl;
	water1.print();
	Water::GetQuanituWater();
	cout << "compresion >>" << Water::comprasion(water, water1);
	cout << endl;
	cout << "type >> ";*/
	//Water::Type(water, water1)<<endl;

	//���� ��� � ��� ���� ��� ����� �������*/


	

	/*String  name("vadim",10);
	name.print();
	String name1("slobodzyan", 20);
	//name = name1;
	name.print();

	String name2 = move(name);
	cout << "i watch name "; name.print();
	cout << endl;
	name2.print();
	
	name1 = move(name2);
	cout << "name 1 " << endl;
	name1.print();*/


	