#include "stdafx.h"
#include "Student.h"

#include <iostream>
#include <string>
using namespace std;

//Student initializer
Student::Student(int ID, string name, int age, string gender) :
	StudentID(ID), StudentName(name), StudentAge(age), StudentGender(gender)
	{}

//A series of get and set functions that grab the student information
int Student::getStudentID() {
	return StudentID;
}

string Student::getStudentName() {
	return StudentName;
}

int Student::getStudentAge() {
	return StudentAge;
}

string Student::getStudentGender() {
	return StudentGender;
}

void Student::setStudentID(int ID) {
	this->StudentID = ID;
}

void Student::setStudentName(string name) {
	this->StudentName = name;
}

void Student::setStudentAge(int age) {
	this->StudentAge = age;
}

void Student::setStudentGender(string gender) {
	this->StudentGender = gender;
}

void Student::ageTest(int age) {
	while (age < minStudentAge) {
		cout << "That age is too young to be a college student. Please enter an older age." << endl;
		cin >> age;
	}

}

Student::~Student()
{
}
