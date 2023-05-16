#include"student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

//default constructor
Student::Student() {
	count++;
	//cout << "default constructor " << endl;
	setName("no name");
	setSurname("no surname");
	setAge(15);
	avg_mark = 4;
}

//default constructor with arguments
Student::Student(string nm, string surnm, int a, float mark) {
	//cout << "default constructor with arguments" << endl;
	count++;
	setName(nm);
	setSurname(surnm);
	setAge(a);
	avg_mark = mark;
}

Student::~Student() {
	
}

float Student::getAvgMark() {
	return avg_mark;
}
void Student::setAvgMark(float mark) {
	if (mark > 0 && mark <= 10) {
		avg_mark = mark;
	}
}



