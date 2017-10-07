#pragma once
#ifndef Student_H
#define Student_H

#include <string>
#include <vector>
using namespace std;

class Student
{
public:
	//constructors
	Student();
	Student(int, string, int, string);

	//get student items
	int getStudentID();
	string getStudentName();
	int getStudentAge();
	string getStudentGender();

	//set student items
	void setStudentID(int);
	void setStudentName(string);
	void setStudentAge(int);
	void setStudentGender(string);
	void ageTest(int);
	
	//deconstructor
	~Student();
private:
	const int minStudentAge = 18;  //min age requirement must be met
	int StudentID;
	string StudentName;
	int StudentAge;
	string StudentGender;
};
#endif // !Student_H
