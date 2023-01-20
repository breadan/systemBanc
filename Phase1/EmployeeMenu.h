#pragma once
#include"Client.h"
#include<iostream>
#include<vector>
class EmployeeMenu
{
protected:
	Client cInfo;
public:
	static void enterE(int id, string password);
	static void addClient();
	static Client searchClient(int id);
	static void listClients();
	static void editClient();
	static bool test(int id);

};

