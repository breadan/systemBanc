#include "Check.h"
#include"Person.h"



bool Check::checkPassword(string password)
{
	bool status = true;
	if (password.length() < 20 && password.length() > 8) {
		status = false;
	}return status;
}

bool Check::checkName(string name)
{
	bool status = true;
	if (name.length()< 20 && name.length()> 5) {
		status = false;
	}
	return status;
}

bool Check::checkSalary(double salary)
{
	bool status = true;
	if (salary > 5000) {
		status = false;
	}
	return status;

}






