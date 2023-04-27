#include"students.h"
#pragma once
class Manager {
public:
	float calcStudentsAvgAge(Student* list, int size);
	float calcStudentsAvgMark(Student* list, int size);
	Student findBestStudents(Student* list, int size);
	Student findWorstStudents(Student* list, int size);


};