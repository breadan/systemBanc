#include "EmployeeFile.h"
#include<vector>
#include<iostream>
#include<string>
#include<fstream>
#include"Employee.h"
#include<sstream>
using namespace std;

void EmployeeFile::employeeFiles(Employee eAdd)
{

	ofstream writeFile("employee.txt", ios::app);

	writeFile << eAdd.getName() << ",";
	writeFile << eAdd.getPassword() << ",";
	writeFile << eAdd.getId() << ",";
	writeFile << eAdd.getSalaryE();
	writeFile << endl;
	writeFile.close();



}

vector<Employee> EmployeeFile::getEmployee()
{
	string name, id, passWord, salary;
	vector<Employee>vEmployee;

	ifstream readFile("employee.txt");
	string lineData;
	while (getline(readFile,lineData)) {
		stringstream e(lineData);
		getline(e, name, ',');
		getline(e, passWord, ',');
		getline(e, id, ',');
		getline(e, salary, ',');
		Employee eD(name, passWord, stoi(id), stod(salary));
		vEmployee.push_back(eD);

	}
	readFile.close();
	return vEmployee;



}

void EmployeeFile::addEmployees(vector<Employee> EEmployee)
{
	ofstream writeFile("employee.txt", ios::app);
	for (int i = 0; i < EEmployee.size(); i++) {

		writeFile << EEmployee[i].getName() << ",";
		writeFile << EEmployee[i].getPassword() << ",";
		writeFile << EEmployee[i].getId() << ",";
		writeFile << EEmployee[i].getSalaryE();
		writeFile << endl;
	}
	writeFile.close();



}
