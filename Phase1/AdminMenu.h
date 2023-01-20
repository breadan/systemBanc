#pragma once
#include"EmployeeMenu.h"
#include"ClientMenu.h"
#include<string>
#include"ClientFile.h"
#include"Employee.h"
#include"Client.h"
#include "Admin.h"
class AdminMenu
{
protected:
	Employee Eedit;
	Client cEdit;

public:
	static void enterA();
	static void addClientA();
	static Client searchClient();
	static void listClient();
	static void editClient();
	static void addEmployee();
	static Employee searchEmployee();
	static void editEmployee();
	static void listEmployee();
	static Admin getAdmin();



};

