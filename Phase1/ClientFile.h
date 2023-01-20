#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include"Client.h"
#include<sstream>



class ClientFile
{
public:
	static void ClientFiles(Client cAdd);
	static vector<Client> getClient(); 
	static void addClients(vector<Client>EClient);
};

