#include"manager.h"

int main() {
	Human* h1 = new Human();
	Human* h2 = new Human();
	Human* h3 = new Human("Ivan", "Ivanov", 14);

	h1->name = "Alex";
	h1->age = 15;
	h1->surname = "no surname";

	cout << h3->getName() << endl;
	cout << h3->getSurname() << endl;
	cout << h3->getAge() << endl;


	delete h1;
	delete h2;
	delete h3;


	return 0;
}