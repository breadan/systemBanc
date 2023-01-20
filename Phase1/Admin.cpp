#include "Admin.h"
#include<iostream>
#include"Check.h"

Admin::Admin()
{
	salaryA = 0;
}

Admin::Admin( string name, string passWord, int id, double salaryA)
	:Person(name,passWord,id)
{
	this->salaryA = salaryA;

}

void Admin::setDataA(  string name, string passWord, int id, double salaryA)
{

	this->name = name;
	this->passWord = passWord;
	this->id = id;
	this->salaryA = salaryA;
}



void Admin::setSalaryA(double salaryA)
{
	if (Check::checkSalary(salaryA) != 1) {
		//cout << salaryA;
		this->salaryA = salaryA;
	}
	else {
		cout << "The Salary Not equal to the minimum\n";
	}
}

double Admin::getsalaryA()
{
	
	return salaryA;
}


