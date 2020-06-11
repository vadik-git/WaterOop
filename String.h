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
	TV(bool o, char cc, int v, vector<Channel> c) {// ������������
		on = o;
		currentChannel = cc;
		volume = v;
		channels = c;

	}

	void  Turn(bool o) { //������� ���/����
		on = o;
	}

	bool isOn() { // ���������� �������� ������� ��������� ��� ���
		return on;
	}

	void switchChannel(bool up) {// ������� ������������ �������
		if (isOn()) Turn(true);
		if (up) { // ���� ������ ������� �����
			if (currentChannel < channels.size() - 1) // ���� ����� �� ���������
				currentChannel++; // �� ��������� �� ��������� �����
			else
				currentChannel = 0; // ����� ������������ �� ��������� �����
		}
		else { // ������ ����
			if (currentChannel > 0)
				currentChannel--;
			else
				currentChannel = channels.size() - 1;
		}
	}

	void switchChannel(int c) { //������� ������������ �������
		if (c >= 0 && c < channels.size()) // ���� ������� ������� �������� � ��������
			//�� 0 �� ������� ������� �������, �� �����������
			// ���� �����, �� �� ���������� ������
			currentChannel = c;
	}

	void switchVolume(bool up) { //������� ��������� ���������
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
	Channel getcurrentChannel() { //�������� ������� �����
		return channels[currentChannel];
	}
	int getVolume() { //�������� ������� ���������
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

/*�������� ����  TV(��������)
� ������
o	���� ���������(��������� - ���������, bool  ��� enum)
o	������� ������� �����
o	�������� �����(����� ������)
o	������� ������ � ��������(���������� ���� ����������!)
o	����������� �������  ���������(���������� ���� ����������!)
��������
o	�����������(�)(�������� ��������  ���������)
o	power()  ��� �������� �� ��������� ���������
o	nextChannel() - ����������� �� ��������� �����, ������ ��� ���������� ��������
o	prevChannel() - ����������� �� ��������� �����, ������ ��� ���������� ��������
o	incVolume() - �������� �������, ������ ��� ���������� ��������
o	decVolume() - �������� �������, ������ ��� ���������� ��������

�������� ���� Remote(����� ��������� ����������), ������ �� ����� TV.
����  Remote  ������� ���� ������
o	power() - on / off(�������� �� ��������� ������� ���������)
o	��������++, ����������� �� ��������� ����� ������� ���������(������ ��� ���������� ��������))
o	��������-- - ����������� �� ��������� �����(������ ��� ���������� ��������)
o	�������� ������� + , �������� �������
o	�������� ������� - , �������� �������
o	goChannel(), ����������� �� ����� �� ������� � ������� ��������
��������� ������ �����.
* ����������� ��������� ��������� ������ ����������� � ������ ������*/




