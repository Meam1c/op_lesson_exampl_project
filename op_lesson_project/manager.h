#include"group.h"
#pragma once
class Manager {
public:
	static float calcStudentsAvgAge(Group group);
	static float calcStudentsAvgMark(Group group);
	static Student findBestStudents(Group group);
	static Student findWorstStudents(Group group);


};