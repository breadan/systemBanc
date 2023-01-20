#include<iostream>
#include<string>
#include"Person.h"
#include"Employee.h"
#include"Admin.h"
#include"Client.h"
#include "Menus.h"
#include"ClientMenu.h"
#include"EnterMain.h"
#include"EmployeeMenu.h"
#include"AdminMenu.h"
#include<fstream>
#include"AdminMenu.h"
#include<vector>
#include"ClientFile.h"
#include"EmployeeFile.h"

using namespace std;
#define TEXT_FIE_PATH "data.text"
//#define BIN_FIE_PATH "data.bin"//to save objects
//
//typedef struct{
//	string name;
//	double salary;
//	string position;
//}omployee;
//
//
//enum class option { add = 1, view = 2, close =3 };
//void addToTxt(string text, string filepath) {
//	try {
//		ofstream file1;
//		file1.open(filepath, ios::out | ios::app);
//		file1 << text + "\n";
//		file1.close();
//		cout << "- - > Record is Added To file\n";
//	}
//	catch (exception& e) {
//		cout<<"--> Standerd exception: "<<e.what()<<endl;
//	}
//}
//
//vector<string> readFromFile(string filepath) {
//	vector<string>fileLines;
//	//حيلف عليهم سطر سطر
//	string line;
//	ifstream file1(filepath);
//	//check it open
//	try {
//		if (file1.is_open()) {
//			while (getline(file1, line)) {
//				fileLines.push_back(line);
//			}
//		}
//		else {
//			cout << "--> Unable To Open file\n";
//		}
//	}
//	catch (exception& e) {
//		cout << "--> Standerd exception: " << e.what() << endl;
//	}
//	
//		
//
//
//	return fileLines;
//}

void addToText() {
	ofstream writeFile("clients.txt", ios::app);
	for (int i = 0; i < 10; i++) {
		writeFile << "alaa, ";
		writeFile << "breadan, ";
		writeFile << "sadasdasdasd, ";
	}
	writeFile.close();
}


int main()
{
	EnterMain::enterToSystem();

	/*int choice=0;
	Menus::mainMenu();
	cin >> choice;*/
	//if (choice == 1) {
	//	string password;
	//	int id;
	//	cout << "Enter Your ID please\n";
	//	cin >> id;
	//	cout << "Enter Your passWord Please\n";
	//	cin >> password;
	//	ClientMenu::menu(id, password);

	//}
	//else if (choice == 2)
	//{
	//	string password;
	//	int id;
	//	cout << "Enter Your ID please\n";
	//	cin >> id;
	//	cout << "Enter Your passWord Please\n";
	//	cin >> password;
	//	EmployeeMenu::enterE(id, password);
	//}
	//else if (choice == 3) {
	//	/*string password;
	//	int id;
	//	cout << "Enter Your ID please\n";
	//	cin >> id;
	//	cout << "Enter Your passWord Please\n";
	//	cin >> password;*/
	//	AdminMenu::enterA();
	//}
	//else {
	//	return 0;
	//}

return 0;

}