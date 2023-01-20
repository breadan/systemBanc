#include "EnterMain.h"

void EnterMain::enterToSystem()
{
	int choice=0;
	while (choice != 4) {
		Menus::mainMenu();
		cin >> choice;

		if (choice == 1) {
			string password;
			int id;
			cout << "Enter Your ID please\n";
			cin >> id;
			cout << "Enter Your passWord Please\n";
			cin >> password;
			ClientMenu::menu(id, password);

		}
		else if (choice == 2)
		{
			string password;
			int id;
			cout << "Enter Your ID please\n";
			cin >> id;
			cout << "Enter Your passWord Please\n";
			cin >> password;
			EmployeeMenu::enterE(id, password);
		}
		else if (choice == 3) {
			string password;
			int id;
			cout << "Enter Your ID please\n";
			cin >> id;
			cout << "Enter Your passWord Please\n";
			cin >> password;
			Admin a = AdminMenu::getAdmin();
			//cout << a.getName() << endl;
			if (a.getId() == id) {
				AdminMenu::enterA();
			}
			else {
				cout << "not found !\n";
			}
		}
		else if(choice == 4) {
			return ;
		}

	}


}
