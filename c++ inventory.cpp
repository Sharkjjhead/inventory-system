#include<iostream>
using namespace std;

string inventory[10];
int PlayerHealth = 100;

int main() {
	int room = 1;
	string input = "SANS";
	while (input != "quit") {
		
		cout << endl << "-----------------------------------------------" << endl;
		cout << "you inventory:";
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << " | ";
		cout << endl;

		switch (room) {
		case 1:
			cout << "you're in room 1,you can go east" << endl;
			cout << "you found a pineapple!" << endl;
			cout << "theres a chest in the room" << endl;
			inventory[0] = "pineapple";
			cin >> input;
			if (input == "east" || input == "go east")
				room = 2;
			if (input == "chest" || input == "look" || input == "open" || input == "open chest") {
				if (inventory[2] != "key")
					cout << "you found a rusty key" << endl;
				inventory[2] = "key";
			}
			break;
		case 2:
			cout << "you're in room 2,you can go west or you can go north" << endl;
			if(inventory[1]!= "sword")
			cout << "you see a sword on the ground." << endl;
			cin >> input;
			if (input == "west" || input == "go west")
				room = 1;
			if(input == "north" || input == "go north")
				if (inventory[2] == "key") {
					cout << "you unlock the door with the key" << endl;
					inventory[2] = "";
					room = 3;
				}
			if (input == "north" || input == "go north")
				room = 3;
				else {
					cout << "the door is locked (get a key)" << endl;
				}
			if (input == "sword" || input == "pick up sword" || input == "get sword") {
				inventory[1] = "sword";
				cout << "you picked up the sword and hear boss music but no boss?" << endl;
			}
			break;
		case 3:
			cout << "you're in room 3,you found a orc boss *poop*" << endl;
			if (inventory[1] == "sword") {
				cout << "you slay the orc and escape" << endl;
				input = "quit";
			}
			else {
				cout << "you died womp womp" << endl;
				input = "quit";
			}

			break;
		}
	}
	cout << "thanks for playing..." << endl;
}