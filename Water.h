/*#include<iostream>
#include<string>
using namespace std;

class Water
{
public:
	enum TypeWater { NONE, LAKE, SEA };
private:
	char* name;
    TypeWater type =TypeWater::NONE;
	float width;
	float length;
	float MaxDebt;
	size_t size;
	float _area;
	static int quanituWater;
public:
	
	
	Water()=default;

	Water( const char* name,size_t size, float width,float length,float maxdebt)
	:width(width),length(length),MaxDebt(maxdebt)
	{
		setName(name, size);
		++quanituWater;

	}
	 static int GetQuanituWater() {
		return quanituWater;
	}
	int area() {
		_area = (width*length);
		return _area;
	}
	bool operator ==(const Water&other) {
		return(*this == other);
	}
	static void Type(Water & other1,  Water&other2) {
		if (other1.type == other2.type) {
			cout << "type == " << other1.getNameType() << endl;
		}
	}
	 static int comprasion(Water&other1, Water& other2) {
		if (other1._area > other2._area) {
			return 1;
		}
		if (other1._area < other2._area) {
			return -1;
		}
		if (other1._area == other2._area) {
			return 0;
		}
	}
	void setType(Water::TypeWater position) {

		if (position >= TypeWater::NONE && position <= TypeWater::SEA) {
			this->type = position;
		}
	}
	void operator=(const Water&other) {


		if (this != &other) {
			delete[]name;
			this->size = other.size;
			this->name= new char[size];
			strcpy_s(this->name, size, other.name);
		}
	}

	void setSize(const size_t &size) {
		this->size = size;
	}
	const char * getNameType() {
		const char* namePos[] = { "none","lake","sea" };
		return namePos[type];
   }
	void setWidth(const float & width) {
		this->width = width;
	}
	void setLength(const float & length) {
		this->length = length;
	}
	void setMaxDebt(const float maxdebt) {
		this->MaxDebt = maxdebt;
	}

	float getWigth() {
		return width;
	}
	float getLength() {
		return length;
	}
	float getMaxDebt() {
		return MaxDebt;
	}


		void setName(const char*name, size_t size) {
		if (name == nullptr || strlen(name) == 0)
			return;
		if (this->name != nullptr) {
			delete[]this->name;

		}
		this->size = size;
		size_t NewSize = size;

		if (size <= strlen(name)) {
			cout << "incorect" << endl;
		}
		this->name= new char[NewSize];
		strcpy_s(this->name, NewSize, name);
	    }
		
		void print() {
			cout << "name >> " << name << endl;
			cout << "width >>" << width << endl;
			cout << "length >>" << length << endl;
			cout << "maxdebt >>" << MaxDebt << endl;
			cout << "type >>" << getNameType() << endl;
			cout << "areea >> " << area() << endl;
			cout << "amount >>" << amountWater() << endl;
		}
	
		
		int amountWater() {

			return(width*length*MaxDebt);
		}
		

		~Water() {
			delete[]name;
			name = nullptr;
		}
	
};/
