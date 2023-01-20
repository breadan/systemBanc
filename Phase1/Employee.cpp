#include "Employee.h"
#include"Check.h"

Employee::Employee()
{
	salary = 0;
}

Employee::Employee( string name, string passWord, int id, double salary)
	:Person(name,passWord,id)
{
	this->salary = salary;
}

void Employee::setData(  string name, string passWord, int id, double salary)
{
	this->name = name;
	this->passWord = passWord;
	this->id = id;
	this->salary = salary;

}



void Employee::setSalaryE()
{
	double salary;
	do {
		cout << "Enter Salary\n";
		cin >> salary;

	} while (Check::checkSalary(salary) ==1);
	this->salary = salary;
		


}



double Employee::getSalaryE()
{

	return salary;
}

void Employee::display()
{
	Person::display();
	cout << "The Salary of Employee is: " << getSalaryE() << endl;

}
