#include "Menus.h"
#include<iostream>
#include<string>
#include"Client.h"
#include"Person.h"
#include"ClientMenu.h"
using namespace std;


void Menus::mainMenu() {
	cout << "***********Welcom At Banck System**************\n";
	cout << "\n/t/tEnter Your Choice Please\n";
	cout << "1) \t\t To Enter As A Client \n";
	cout << "2) \t\t To Enter As A Employee\n";
	cout << "3) \t\t To Enter As A Admin\n";
}

void Menus::enterClient()
{

	cout << "Please Enter Your Name\n";
	cout << "Please Enter Your PassWord\n";
	cout << "Please Enter Your ID\n";
}

void Menus::clientMenu()
{

	cout << "************** Welcom Dear Custemer***************\n";
	cout << "\n\t\t1) To checkBalance" << endl;
	cout << "\t\t  2) withdraw" << endl;
	cout << " \t\t 3) transferTo" << endl;
	cout << "\t\t  4) T deposit " << endl;
	cout << " \t\t 5) To Exit" << endl;
	

}

void Menus::employeeMenu()
{
	cout << "Please Enter Your Name\n";
	cout << "Please Enter Your PassWord\n";
	cout << "Please Enter Your ID\n";
}

void Menus::employeeTasks()
{
	cout << "********* Enter Your Choice Please ***********";
	cout << "\n\t\t 1) To Add A Client\n";
	cout << "\t\t 2) To Search A Client\n";
	cout << "\t\t 3) To show List Client\n ";
	cout << "\t\t 4) To Edit A Client\n";
	cout << "\t\t 5) To Exit\n";
}

void Menus::adminTasks()
{
	cout << "******** Please Enter Your Choice ************";
	cout << "\n\t\t 1) To Add A Client \n";
	cout << " \t\t 2) To To Search A Client \n";
	cout << "\t\t 3) To listClient\n";
	cout << " \t\t 4) To Edit A Client\n ";
	cout << " \t\t 5) To Add Employee\n";
	cout << " \t\t 6) To Search An Employee \n";
	cout << " \t\t 7) To Edit Employee Information \n";
	cout << " \t\t 8) To Show Employee List\n";
	cout << "\t\t 9)To Exit\n";

}



