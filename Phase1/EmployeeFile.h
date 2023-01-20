#pragma once
#include<vector>
#include<fstream>
#include<iostream>
#include<string>
#include"Employee.h"
#include<sstream>

using namespace std;


class EmployeeFile
{
public:
	static void employeeFiles(Employee eAdd);
	static vector<Employee>getEmployee();
	static void addEmployees(vector<Employee>EEmployee);

};

