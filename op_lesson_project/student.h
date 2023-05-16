#pragma once
#include "human.h"

class Student:public Human {
private:
	static int count;
	float avg_mark;
public:
	//default constructor
	Student();
	//default constructor with arguments
	Student(string nm, string surnm, int a, float mark);
	~Student();

	static int getCount();
	
	float getAvgMark();
	void setAvgMark(float mark);
};