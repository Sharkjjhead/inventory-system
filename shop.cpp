#include<iostream>
using namespace std;
//global variables
string inventory[10];
int money = 100;

//declarations
void shop();

int main() {
	//local variables
	int room = 1;
	string input;
	do {

		cout << "your inventory :";
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << " | ";
		cout << endl << endl;

		switch (room) {
		case 1:
			cout << "you're in room 1, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 2;
			break;
		case 2:
			shop();
			cout << "you're in room 2, you can go north" << endl;
			cin >> input;
			if (input == "north")
				room = 1;
			break;
		}


	} while (input != "quit");

}
void shop() {
	char input = 'p';
	cout << endl << endl << "---------------" << endl;
	cout << "SHOP" << endl;
	while (input != 'q') {
			cout << "press p for potion(10$), s for sword(20$), a or armor(50$), press q to exit shop" << endl;
			cin >> input;
			switch (input) {
			case 'p':
				if (money >= 10) {
					cout << "you got a potion" << endl;
					inventory[0] = "potion";
					money -= 10;
				}
				else
					cout << "you are broke" << endl;
				break;
			case 's':
				if (money >= 20) {
					cout << "you got a sword" << endl;
					inventory[1] = "sword";
					money -= 20;
				}
				else
					cout << "you are broke" << endl;
				break;
			case 'a':
				if (money >= 50) {
					cout << "you got armor" << endl;
					inventory[2] = "armor";
					money -= 50;
				}
				else
					cout << "you are broke" << endl;
				break;

		}

	}
	cout << "----------------" << endl;
}