#include"student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

//default constructor
Student::Student() : Human() {
	cout << " Student defaul constructor " << endl;
	count++;
	avg_mark = 4;
}

//default constructor with arguments
Student::Student(string nm, string surnm, int a, float mark):Human(nm, surnm,a) {
	count++;
	avg_mark = mark;
}

Student::~Student() {
	cout << " Student  destructor " << endl;
}

float Student::getAvgMark() {
	return avg_mark;
}
void Student::setAvgMark(float mark) {
	if (mark > 0 && mark <= 10) {
		avg_mark = mark;
	}
}



