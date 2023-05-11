#include"manager.h"

int main() {

	Student s1("Ivan", "Ivanov", 14, 7.6);
	Student s2("Alex", "Invisible", 15, 10);
	Student s3("Peter", "Pen", 12, 4);
	Student s4("Harry", "Potter", 14, 9.6);
	Student s5("Alice", "Under", 13, 8);

	cout << "Number of students:" << Student::getCount() << endl;

	return 0;
}