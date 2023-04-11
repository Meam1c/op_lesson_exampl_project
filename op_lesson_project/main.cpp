#include"main.h"

class Student {
public:
	string name ;
	string surname;
	int age;
	float avg_mark;

	Student() {
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	void clear() {
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;

	}

	string convert() {
		string msg = "";
		msg += name;
		msg += " " + surname;
		msg += " (age = " + to_string(age);
		msg += " , average mark =  " + to_string(avg_mark);
		msg += " )";
		return msg;
	}
};

int main() {
	Student st1;
	cout << st1.convert() << endl;
	/*st1.name="ivan";
	st1.surname="ivanov";
	st1.age = 14;
	st1.avg_mark = 10;
	

	
	cout << "Defore:" << endl;
	cout << st1.convert() << endl;

	st1.clear();

	cout << "\nAfter:" << endl;
	cout << st1.convert() << endl;*/

	return 0;
}