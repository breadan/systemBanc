#include "Client.h"
#include<iostream>
#include"Person.h"

Client::Client()
{
	balance = 0;
}

Client::Client( string name, string passWord, int id, double balance)
	:Person(name,passWord,id)
{
	this->balance = balance;
}


 void Client::setData( string name, string passWord, int id, double balance)
{
	//هندخل كل البيانات لأن الوراثة لا تعمل هنا
	this->name = name;
	this->passWord = passWord;
	this->id = id;
	this->balance = balance;
}

void Client::setBalance(double balance)
{
	this->balance = balance;
}



double Client::getBalance()
{
	return balance;
}




void Client::deposit(double amount)
{
	balance += amount;
}

void Client::withdraw(double amount)
{
	balance -= amount;
}

void Client::transferTo(double amount, Client& c)
{
	if (amount <= balance) {
		balance -= amount;
	}
	c.deposit(amount);
	
}

void Client::checkBalance()
{
	cout << "your balance" << balance;
}

void Client::display()
{
	Person::display();
	cout << "The Balance is: " << getBalance() << endl;

}
