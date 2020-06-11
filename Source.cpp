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
	
	







	/*ifstream ifs("Channels.txt"); //файл, в котором хранится информация о каналах
	vector <Channel> channels; //здесь будут храниться каналы
	int number;
	ifs >> number; //считываем число каналов (первая строка в файле)
	int channelNumber; //переменная для хранения номера канала
	string channelName; //для хранения названия канала

	for (int i = 0; i < number; i++) {
		ifs >> channelNumber >> channelName;
		channels.push_back(Channel(channelNumber, channelName)); //заполняем вектор каналов
	}

	fstream file("Current.txt", ios::in); //открываем файл для чтения
	int vol, current;
	file >> current >> vol; //считываем текущие канал и громкость

	TV tv(false, current - 1, vol, channels); //создаем телевизор с заданными параметрами

	cout << "upravlenie:" << endl;
	cout << "w - vkl/vikl" << endl << "strelki pravo/levo - perekluchennie kanalov" << endl;
	cout << "strelki verh /niz - zvyk" << endl << "c - zadat kanal v ruchnuu" << endl;

	int key; // код клавиши

	while (true) {
		if (_kbhit()) { //если была нажата клавиша
			key = _getch(); //получаем ее код

			if (key == 119 || key == 230)  //если нажата w
				tv.Turn(!tv.isOn()); //включаем телевизор
			else {//если это любая клавиша кроме w, то проверяем включен ли телевизор, если да, то переходим дальше
				if (!tv.isOn()) {
					continue; //с помощью этого оператора переходим к следующей итерации цикла
				}
			}
			if (key == 225 || key == 99) { // если с
				int number;
				cout << "enter kanal: " << endl;
				cin >> number; // считываем номер канала, введенного пользователем
				tv.switchChannel(number - 1); //и переключаем на этот канал
			}
			if (_kbhit()) { //если код нажатой клавиши состоит из 2 цифр (коды стрелок из 2 цифр), то различают по второй стрелке
				int key2 = _getch(); //получаем код стрелки

				switch (key2) {
				case 72: //увеличиваем звук
					tv.switchVolume(true);
					cout << "zvuk ++" << endl;
					break;
				case 75: //предыдущий канал
					tv.switchChannel(false);
					cout << "predidushuyy kanal" << endl;
					break;
				case 80: //уменьшаем звук
					tv.switchVolume(false);
					cout << "zvyk--" << endl;
					break;
				case 77: //следующий канал
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

	//вроді все в коді норм але якась помилка*/


	

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


	