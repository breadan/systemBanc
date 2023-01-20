#include "ClientMenu.h"
#include"Client.h"
#include"Person.h"
#include "ClientFile.h"

 void ClientMenu::menu(int id, string password)
{
	 int choicee = 0, amount;
	 vector<Client>vClient = ClientFile::getClient();
	 Client c, c2;
	 for (int i = 0; i < vClient.size(); i++) {
		 if (vClient[i].getId() == id && vClient[i].getPassword() == password) {
			 c = vClient[i];
		 }
	 }
	 cout << "\n\n------------------------------------\n\n";
	 for (int i = 0; i < vClient.size(); i++) {
			 cout << vClient[i].getName() << endl;
	 }
	 cout << "\n\n------------------------------------\n\n";

	while (choicee != 5) {
		Menus::clientMenu();

		cout << "Enter Choice\n";

		cin >> choicee;

		cout << endl;
		if (choicee == 1) {

			c.checkBalance();
		}
		else if (choicee == 2) {
			cin >> amount;
			if (amount < c.getBalance()) {
				c.withdraw(amount);
				c.checkBalance();

			}
			else {
				cout << "Sorry The balance Not Enough\n";

			}
		}
		else if (choicee == 3) {
			cin >> amount;
			if (amount < c.getBalance()) {

				c.transferTo(amount, c2);
				c.checkBalance();
			}
			else {
				cout << "Sorry The balance Not Enough\n";

			}
		}
		else if (choicee == 4) {
			cin >> amount;
			c.deposit(amount);
			cout << endl;
			c.checkBalance();
		}
		else if (choicee == 5) {
			return;
		}
		cout << endl;

		return;
	}
	for (int i = 0; i < vClient.size(); i++) {
		if (vClient[i].getId() == id && vClient[i].getPassword() == password) {
			vClient[i] = c;
		}
	}
	ClientFile::addClients(vClient);
}
