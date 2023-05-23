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
Human::Human(string name, string surnmame, int age) {
	//cout << "default constructor with arguments" << endl;

	this->name = name;
	this->surname = surname;
	this->age = age;
	
}




Human::~Human() {
	cout << " Human destructor " << endl;
	//cout << "distructor" << endl;
}

string Human::getName() {
	return name;
}
void Human::setName(string name) {
	this->name = name;
}
string Human::getSurname() {
	return surname;
}
void Human::setSurname(string surname) {
	this->surname = surname;
}

int Human::getAge() {
	return age;
}
void Human::setAge(int age) {
	if (age > 0 && age < 120) {
		this->age = age;
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