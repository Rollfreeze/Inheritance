#include "Display.h"

void Display::showmenu()
{
	int Size = interface.inputsize();
	AndArray andy(Size);
	OrArray ory(Size);

	while (true)
	{
		char choice;
		while (true)
		{
			cout << "1. intersection of elemets\n";
			cout << "2. union of elements\n";
			cout << "3. quit\n";
			cin >> choice;
			system("cls");
			if (choice == '1' || choice == '2' || choice == '3')
				break;
			else
				cout << "Incorrcet input. Try again\n";
		}
		
		if (choice == '3')
			break;

		switch (choice)
		{
		case '1':
			system("cls");
			andy.inputarr();
			andy.sum();
			andy.foreach();
			break;
		case '2':
			system("cls");
			ory.inputarr();
			ory.sum();
			ory.foreach();
			break;
		default: cout << "Incorrect input. Try again\n";
			break;
		}
	}
}