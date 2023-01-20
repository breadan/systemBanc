#pragma once
#include<string>
using namespace std;
class Person
{
protected:
	string name;
	string passWord;
	int id;
public:
	Person();
	Person(string name, string passWord, int id);
	 void setData(string name, string passWord, int id);
	 void setName (string name);
	 void setPassWord(string  passWord);
	void setId(int id);
	void display();
	//
	 string getName();
	string getPassword();
	int getId();
};

