/*#pragma once
#include<iostream>
using namespace std;
class String
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

