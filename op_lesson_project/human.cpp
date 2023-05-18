#include "human.h"
#include"student.h"


//default constructor
Human::Human() {
	cout << " Human defaul constructor " << endl;
	//cout << "default constructor " << endl;
	name = "no name";
	surname = "no surname";
	age = 15;
}

//default constructor with arguments
Human::Human(string nm, string surnm, int a) {
	//cout << "default constructor with arguments" << endl;

	name = nm;
	surname = surnm;
	age = a;
	
}




Human::~Human() {
	cout << " Human destructor " << endl;
	//cout << "distructor" << endl;
}

string Human::getName() {
	return name;
}
void Human::setName(string n) {
	name = n;
}
string Human::getSurname() {
	return name;
}
void Human::setSurname(string n) {
	name = n;
}

int Human::getAge() {
	return age;
}
void Human::setAge(int a) {
	if (a > 0 && a < 120) {
		age = a;
	}
}



string Human::convert() {
	string msg = "";
	msg += name;
	msg += " " + surname;
	msg += " (age = " + to_string(age);
	msg += " )";
	return msg;
}