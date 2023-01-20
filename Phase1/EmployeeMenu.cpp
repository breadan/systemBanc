#include "EmployeeMenu.h"
#include"Client.h"
#include<string>
#include<fstream>
#include <vector>
#include"EmployeeFile.h"
#include"Employee.h"
#include"ClientMenu.h"
#include"ClientFile.h"
#include"Person.h"
#include"Check.h"
#include"ClientFile.h"

vector<Client> vClient;

void EmployeeMenu::enterE(int id, string password)
{
	bool flag = false;
	vector<Employee>vEmployee = EmployeeFile::getEmployee();
	Employee e1;
	for (int i = 0; i < vEmployee.size(); i++) {
		if (vEmployee[i].getId() == id && vEmployee[i].getPassword() == password) {
			e1 = vEmployee[i];
			flag = true;
		}
	}
	if (!flag) {
		cout << "not found !\n";
		return;
	}

	int choice = 0;
	while (choice != 5) {
		Menus::employeeTasks();
		cout << "Enter Your choice Please\n";

		cin >> choice;
		cout << endl;

		if (choice == 1) {
			addClient();
		}
		else if (choice == 2) {
			//searchClient();
			int id;
			cin >> id;
			if (test(id)) {
				Client c = searchClient(id);
				c.display();
			}
			else {
				cout << "not found !\n";
			}
		}
		else if (choice == 3) {
			listClients();
		}
		else if (choice == 4) {
			editClient();
		}
		else if(choice==5) {
			return;
		}


		//return;
	}
	for (int i = 0; i < vEmployee.size(); i++) {
		if (vEmployee[i].getId() == id && vEmployee[i].getPassword() == password) {
			vEmployee[i] = e1;
		}
	}
	EmployeeFile::addEmployees(vEmployee);

}
bool EmployeeMenu::test(int id) {
	Client c;
	vector<Client>clients = ClientFile::getClient();
	for (int i = 0; i < clients.size(); i++) {
		if (id == clients[i].getId()) {
			return true;
		}
	}
	return false;
}

void EmployeeMenu::addClient()
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

 Client EmployeeMenu::searchClient(int id)
 {
	 Client c;
	 vector<Client>clients = ClientFile::getClient();
	 for (int i = 0;i< clients.size(); i++) {
		 if (id == clients[i].getId()) {
			 c = clients[i];
		 }
	 }
	 return c;
 }

 void EmployeeMenu::listClients()
 {

	 vector<Client>clients = ClientFile::getClient();
	 for (int i = 0; i < clients.size(); i++) {
		 clients[i].display();
	 }
 }

 void EmployeeMenu::editClient()
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


 
