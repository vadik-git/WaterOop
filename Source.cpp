#include"Water.h"
#include<iostream>
//#include"String.h"
#include <string>

using namespace std;
int main() {

	
	Water water("river",6,10,3,10);
	Water water1("lva",5,1,1,1);
	water.setType(Water::TypeWater::LAKE);
	water1.setType(Water::TypeWater::LAKE);
	water.print();
	
	cout << "_______________" << endl;
	water1.print();
	Water::GetQuanituWater();
	cout << "compresion >>" << Water::comprasion(water, water1);
	cout << endl;
	cout << "type >> ";
	//Water::Type(water, water1)<<endl;

	

	

	/*String  name("slob",5);
	name.print();
	String name1("tews", 5);
	//name = name1;
	name.print();

	String name2 = move(name);
	cout << "i watch name "; name.print();
	cout << endl;
	name2.print();
	
	name1 = move(name2);
	cout << "name 1 " << endl;
	name1.print();*/


	system("pause");
	return 0;
}