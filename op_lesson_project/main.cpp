#include"main.h"

class Student {
public:
	string name ;
	string surname;
	int age;
	float avg_mark;

	//default constructor
	Student() {
		cout << "default constructor " << endl;
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	//default constructor with arguments
	Student(string nm, string surnm, int a, float mark) {
		cout << "default constructor with arguments" << endl;
		name = nm;
		surname = surnm;
		age = a;
		avg_mark = mark;
	}
	Student(string nm, string surnm) {
		cout << "default constructor with arguments" << endl;
		name = nm;
		surname = surnm;
		age = 15;
		avg_mark = 4;
	}

	// copy constructor
	Student( const Student &student) {
		
		name = student.name;
		surname = student.surname;
		age = student.age;
		avg_mark = student.avg_mark;

	}

	~Student() {
		cout << "distructor" << endl;
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
	Student st1; //defaul constructor
	//cout << st1.convert() << endl;
	Student st2("Ivan", "Ivanov", 14, 10);         //defaul constructor with arguments
	cout << st2.convert() << endl;
	/*Student st3("Dima", "Ivanov");
	cout << st3.convert() << endl;*/
	Student st4 = st2;                             //copy constructor
	Student st5(st2);                              //copy constructor
	
	
	cout << st4.convert() << endl;
	cout << st5.convert() << endl;
	return 0;
}