#pragma once
#include<string>
#include<iostream>
using namespace std;


class Check
{
	  
public:
	Check();
	static bool checkPassword(string password);
	static bool checkName(string name);
	static bool checkSalary(double salary);
};
