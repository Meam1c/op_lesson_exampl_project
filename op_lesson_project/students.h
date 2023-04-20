#pragma once
#include "main.h"
class Student {
private:

	string name;
	string surname;
	int age;
	float avg_mark;
public:
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
	Student(const Student& student) {

		name = student.name;
		surname = student.surname;
		age = student.age;
		avg_mark = student.avg_mark;

	}

	~Student() {
		cout << "distructor" << endl;
	}

	string getName() {
		return name;
	}
	void setName(string n) {
		name = n;
	}
	string getSurname() {
		return name;
	}
	void setSurname(string n) {
		name = n;
	}

	int getAge() {
		return age;
	}
	int setAge(int a) {
		if (a > 0 && a < 120) {
			age = a;
		}
	}
	float getAvgMark() {
		return avg_mark;
	}
	int setAvgMark(int mark) {
		if (mark > 0 && mark <= 10) {
			avg_mark = mark;
		}
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