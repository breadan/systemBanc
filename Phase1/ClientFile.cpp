#include "ClientFile.h"
#include<vector>
#include<sstream>
#include"Client.h"
#include<iostream>
#include<string>

void ClientFile::ClientFiles(Client cAdd)
{
	ofstream writeFile("clients.txt", ios::app);
	
		writeFile << cAdd.getName() << ",";
		writeFile << cAdd.getPassword() << ",";
		writeFile << cAdd.getId() << ",";
		writeFile << cAdd.getBalance() ;
		writeFile << endl;
	writeFile.close();

}
//بيرجع لها الداتا بعد التعديل يعني بتاخد فيكتور تضيفه للملف
void ClientFile::addClients(vector<Client>EClient)
{
	ofstream writeFile("clients.txt");
	for (int i = 0; i < EClient.size(); i++) {
		writeFile << EClient[i].getName() << ",";
		writeFile << EClient[i].getPassword() << ",";
		writeFile << EClient[i].getId() << ",";
		writeFile << EClient[i].getBalance();
		writeFile << endl;
	}
	
	writeFile.close();

}

vector<Client> ClientFile::getClient()
{
	string name, id, passWord, balance;
	vector<Client> vClient;
	
	ifstream readFile("clients.txt");
	string lineData;
	while (getline(readFile, lineData)) {
		stringstream s(lineData);//what about s?? && class vv?? ازاي اقطع
		getline(s, name, ',');
		getline(s, passWord, ',');
		getline(s, id, ',');
		getline(s, balance, ',');
		Client cR(name, passWord, stoi(id), stod(balance));
		//cR.setId(id);
		vClient.push_back(cR);
	}
	readFile.close();
	return vClient;
}
