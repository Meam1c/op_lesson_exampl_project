#include"group.h"
#pragma once
class Manager {
public:
	float calcStudentsAvgAge(Group group);
	float calcStudentsAvgMark(Group group);
	Student findBestStudents(Group group);
	Student findWorstStudents(Group group);


};