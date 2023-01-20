#include "Person.h"
#include"Check.h"
#include<iostream>


Person::Person()
{
	 name = " ";
	passWord = " ";
	id = 0;
}

Person::Person(string name, string passWord, int id)
{
	this->name = name;
	this->passWord = passWord;
	this->id = id;
}

void Person::setData(string name, string passWord, int id)
{
	this->name = name;
	this->passWord = passWord;
	this->id = id;
	
}

 void Person::setName (string name)
{
	 do {
		 cout << "Enter name\n";
		 getline(cin, name);
	 } 
	 while ((Check::checkName(name) == 1));
	 		 this->name = name;
					
}

void Person::setPassWord(string  passWord)
{
	do {
		cout << "Enter PassWord\n";
		cin >> passWord;
	} while ((Check::checkPassword(passWord) == 1));
	this->passWord = passWord;

}

void Person::setId(int id)
{
	this->id = id;
}

void Person::display()
{
	cout << "The Name  is: " << getName() << endl;
	cout << "The PAssWoord is: ";
	for (int i = 0; i <= passWord.length(); i++) {
		cout << "*";
	}	
	cout << endl;
	cout << "The ID is: " << getId() << endl;
}

string Person::getName()
{
	return  name;
	
}

string Person::getPassword()
{
	/*for (int i = 0; i <= passWord.length(); i++) {
		cout << "*";
	}	return "*";	*/	
	return passWord;
}

int Person::getId()
{
	return id;
}
