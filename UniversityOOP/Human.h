#pragma once
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	string name;
	int age;

public:
	int id;

	Human() {
	
	}

	Human(string name, int age) :
		name(name), age(age) {}

	~Human() {

	}

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);

	string getInfo();
};