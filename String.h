#pragma once
#include<iostream>
#include<string>
#include<conio.h>
#include<vector>


using namespace std;
/*class String
{
private:
	size_t size;
	char * Write = nullptr;

public:



	String()=default;
	String(const char*Write, size_t size) {
		setName(Write, size);
	}

	void setName(const char*Write,size_t size) {
		if (Write == nullptr || strlen(Write)==0)
			return;
		if (this->Write != nullptr) {
			delete[]this->Write;
			
		}
		this->size = size;
		size_t NewSize = size;

		if (size <= strlen(Write)) {
			cout << "incorect" << endl;
		}
		this->Write = new char[NewSize];
		strcpy_s(this->Write, NewSize, Write);
	}


	void setSize(const size_t & size) {
		this->size = size;
	}
	void print() {
		if (Write != nullptr) {
			cout << Write << endl;
		}
		
	}
	void operator=(const String&other) {
		

		if (this != &other) {
			delete[]Write;
			this->size = other.size;
			this->Write = new char[size];
			strcpy_s(this->Write, size, other.Write);
		}
	}
	String(String&& other) {


		cout << "working constructor move" << endl;
		Write = other.Write;
		size = other.size;
		other.Write = nullptr;
		other.size = 0;

	}

	void operator=(String&&other) {

		if (this != &other) {
			if (Write != nullptr)
				delete[]Write;

			Write = other.Write;
			size = other.size;

			other.Write = nullptr;
			other.size = 0;



		}
	}

	~String() {
		delete[]Write;
		Write = nullptr;
	};
};*/

class TV {
	friend class Remote;
private:
	bool on = true;
	size_t volume = 0;
	size_t chanell = 1;
	const size_t quanituChanels = 10;
	const size_t maxVolume = 50;
public:

	TV() = default;

	TV( int volume, int chanell, const int quanituChanels, const int maxvolume)
	:quanituChanels(quanituChanels),maxVolume(maxvolume){
		setVolume(volume);
		setChanell(chanell);

	}
	void setVolume(const size_t&volume) {
		if (volume > maxVolume) {
			this->volume = maxVolume;
		}
		else {
			this->volume = volume;
		}
	}
	void setChanell(const size_t&chanell) {
		if (chanell > quanituChanels) {
			this->chanell = quanituChanels;
		}
		else {
			this->chanell = chanell;
		}
	}
	void power() {
		if (on != true) {
			on = true;
		}
		else {
			on = false;
		}

	}
	void print() {
		if (on) {
			cout << "volume ->> " << volume << endl;
			cout << "chanel ->> " << chanell << endl;
			
		}
		else {
			cout << "TV off" << endl;
			cout << "quanitu chanels" << quanituChanels << endl;
			cout << "max volume" << maxVolume << endl;
		}
	}
     
	void nextChanel() {
		if (on) {
			if (chanell != quanituChanels) {
				chanell++;
			}
			else {
				chanell = 1;
			}
		}
	}
	void backChanel() {
		if (on) {
			if (chanell != quanituChanels) {
				chanell--;
			}
			else {
				chanell = 1;
			}
		}
	}

	void volumePlus() {
		if (on) {
			if (volume != maxVolume) {
				volume++;
			}
			else {
				cout << "maxx volume" << volume << endl;
			}
		}
	}
	void volumeMinus() {
		if (on) {
			if (volume != maxVolume) {
				volume--;
			}
			else {
				cout << "min volume" << volume << endl;
			}
		}
	}

	/*bool on;
	char currentChannel;
	int volume;
	vector<Channel> channels;

public:
	TV(bool o, char cc, int v, vector<Channel> c) {// конструкторы
		on = o;
		currentChannel = cc;
		volume = v;
		channels = c;

	}

	void  Turn(bool o) { //функция вкл/выкл
		on = o;
	}

	bool isOn() { // возвращает значение включен телевизор или нет
		return on;
	}

	void switchChannel(bool up) {// функция переключения каналов
		if (isOn()) Turn(true);
		if (up) { // если нажата клавиша вверх
			if (currentChannel < channels.size() - 1) // если канал не последний
				currentChannel++; // то переходим на следующий канал
			else
				currentChannel = 0; // иначе возвращаемся на следующий канал
		}
		else { // нажали вниз
			if (currentChannel > 0)
				currentChannel--;
			else
				currentChannel = channels.size() - 1;
		}
	}

	void switchChannel(int c) { //функция переключения вручную
		if (c >= 0 && c < channels.size()) // если нажатая клавиша попадает в диапазон
			//от 0 до размера массива каналов, то переключает
			// если иначе, то не произойдет ничего
			currentChannel = c;
	}

	void switchVolume(bool up) { //функция изменения громкости
		if (isOn()) {
			if (up) {
				if (volume < 100)
					volume++;
			}
			else {
				if (volume > 0)
					volume--;
			}
		}
	}
	Channel getcurrentChannel() { //получаем текущий канал
		return channels[currentChannel];
	}
	int getVolume() { //получаем текущую громкость
		return volume;
	}*/

	
};

class Remote {

	TV * tv = nullptr;
public:
	

	Remote(TV*tv) :tv(tv) {};

	void operator ++() {
		tv->nextChanel();
	}
	void operator --() {
		tv->backChanel();
	}
	void operator +() {
		tv->volumePlus();
	}
	void operator -() {
		tv->volumeMinus();
	}
	void goChanell(size_t newchanel) {
		if (tv->on&&tv->quanituChanels >= newchanel) {
			tv->chanell = newchanel;
		}
	}
	};

/*Створити клас  TV(телевізор)
з полями
o	стан телевізора(увімкнений - вимкнений, bool  або enum)
o	поточна гучність звуку
o	поточний канал(номер каналу)
o	кількість каналів у телевізорі(константне поле екземпляру!)
o	максимальна гучність  телевізора(константне поле екземпляру!)
методами
o	конструктор(и)(телевізор спочатку  вимкнений)
o	power()  для вмикання чи вимикання телевізору
o	nextChannel() - перемикання на наступний канал, працює при увімкненому телевізорі
o	prevChannel() - перемикання на попередній канал, працює при увімкненому телевізорі
o	incVolume() - збільшити гучність, працює при увімкненому телевізорі
o	decVolume() - зменшити гучність, працює при увімкненому телевізорі

Створити клас Remote(пульт керування телевізором), дружній до класу TV.
Клас  Remote  повинен мати методи
o	power() - on / off(вмикання чи вимикання певного телевізору)
o	операція++, перемикання на наступний канал певного телевізору(працює при увімкненому телевізорі))
o	операція-- - перемикання на попередній канал(працює при увімкненому телевізорі)
o	операція унарний + , збільшити гучність
o	операція унарний - , зменшити гучність
o	goChannel(), перемикання на канал за номером у певному телевізорі
Перевірити роботу класів.
* Передбачити можливість управління різними телевізорами з одного пульта*/




