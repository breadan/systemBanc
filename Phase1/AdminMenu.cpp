#include "AdminMenu.h"
#include"EmployeeMenu.h"
#include"Client.h"
#include<vector>
#include <fstream>
#include"Admin.h"
#include<string>
#include"ClientFile.h"
#include"Person.h"
#include"Employee.h"
#include"EmployeeFile.h"
#include"ClientFile.h"


Admin AdminMenu::getAdmin()
{
	string name, id, passWord, salary;
	Admin a;
	ifstream readFile("admin.txt");
	string lineData;
	while (getline(readFile, lineData)) {
		stringstream e(lineData);
		getline(e, name, ',');
		getline(e, passWord, ',');
		getline(e, id, ',');
		getline(e, salary, ',');
		/*a.setId(stoi(id));
		a.setName(name);
		a.setPassWord(passWord);
		a.setSalaryA(stod(salary));*/
		a.setDataA(name, passWord, stoi(id), stod(salary));
	}
	readFile.close();
	return a;



}
void AdminMenu::enterA()
{
	int choice=0;
	
	while (choice != 9) {
		Menus::adminTasks();

		cin >> choice;		
		if (choice == 1) {
			addClientA();
		}
		else if (choice == 2) {
			searchClient();
		}
		else if (choice == 3) {
			listClient();
		}
		else if (choice == 4) {
			editClient();
		}
		else if (choice == 5) {
			addEmployee();
		}
		else if (choice == 6) {
			searchEmployee();
		}
		else if (choice == 7) {
			editEmployee();
		}
		else if (choice == 8) {
			listEmployee();
		}

	}


}

void AdminMenu::addClientA()
{
	cout << "Welcom To add Clietn\n";
	Client c;
	string name;
	string passWord;
	int id = 0;
	int balance = 0;

	c.setName(name);
	c.setPassWord(passWord);

	cout << "Enter ID \n";
	cin >> id;

	cout << "Enter balance \n";
	cin >> balance;

	c.setId(id);
	c.setBalance(balance);
	cout << "The Name is: \n" << c.getName() << endl;
	cout << "The PassWord is: \n";
	for (int i = 0; i <= c.getPassword().length(); i++) {
		cout << "*";
	}
	cout << endl;
	cout << "The ID is: \n" << c.getId() << endl;
	cout << "The Balance is: \n" << c.getBalance() << endl;

	ClientFile::ClientFiles(c);

}


Client AdminMenu::searchClient()
{
	Client c;
	vector<Client>clients = ClientFile::getClient();
	int id;
	cin >> id;
	for (int i = 0; i < clients.size(); i++) {
		if (id == clients[i].getId()) {
			return clients[i];
		}
	}
	return c;
}

void AdminMenu::listClient()
{
	vector<Client>clients = ClientFile::getClient();
	for (int i = 0; i < clients.size(); i++) {
		clients[i].display();
	}


}

void AdminMenu::editClient()
{
	Client c;
	string name, passWord;
	double balance;
	bool flag = false;
	vector<Client>clients = ClientFile::getClient();
	int id;
	cin >> id;
	for (int i = 0; i < clients.size(); i++) {
		if (id == clients[i].getId()) {
			c.setId(id);
			c.setName(name);
			c.setPassWord(passWord);
			cin >> balance;

			c.setBalance(balance);

			clients[i] = c;
			flag = true;
			break;

		}

	}
	if (flag == false) {
		cout << "Client not Found\n";
		return;
	}
	//بعتنا له الفيكتور  الجديد
	ClientFile::addClients(clients);

}

void AdminMenu::addEmployee()
{
	Employee e;
	string name;
	string passWord;
	int id = 0;

	e.setName(name);
	e.setPassWord(passWord);
	cout << "Enter ID \n";
	cin >> id;

	e.setId(id);
	e.setSalaryE();

	cout << "The Name of Employee is: \n" << e.getName() << endl;
	cout << "The PassWord is: \n";
	for (int i = 0; i <= e.getPassword().length(); i++)
	{
		cout << "*";
	}
	cout << endl;
	cout << "The ID is: \n" << e.getId() << endl;
	cout << "The salary is: \n" << e.getSalaryE() << endl;

	EmployeeFile::employeeFiles(e);

}

Employee AdminMenu::searchEmployee()
{
	Employee e;
	int id;
	cin >> id;
	vector<Employee>employee = EmployeeFile::getEmployee();
	for (int i = 0; i < employee.size(); i++) {
		if (id == employee[i].getId()) {
			return employee[i];
		}
	}
	return e;



}

void AdminMenu::editEmployee()
{
	Employee e;
	string name, passWord;
	double salary;
	bool flag = false;
	vector<Employee>employee = EmployeeFile::getEmployee();//ده معناه ان الفيكتور ده جاي من هناك
	int id;
	cin >> id;
	for (int i = 0; i < employee.size(); i++) {
		if (id == employee[i].getId()) {
			e.setId(id);
			e.setName(name);
			e.setSalaryE();

			employee[i] = e;
			flag = true;
			break;
		}
	}
	if (flag == false) {
		cout << "Employee not Found\n";
		return;
	}
	EmployeeFile::addEmployees(employee);

}

void AdminMenu::listEmployee()
{
	vector<Employee>employee = EmployeeFile::getEmployee();
	for (int i = 0; i < employee.size(); i++) {
		employee[i].display();
	}

}
