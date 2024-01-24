#include <iostream>
#include <random>
using namespace std;
class Resource {
	string Name;
	int Amount
};
class Game {
private:
	string Answer;
	bool VillageFound;
	int Random
	int Location[1] = [0, 0];
	int Food = 3;
	int Hunger = 100;
	int Water = 3;
	int Thirst = 100;
	Resource Wood("Wood", 0);
	Resource Steel("Steel", 0);
	Resource Stone("Stone", 0);
	Resource Coins("Coins", 0);
	Resource Leaves("Leaves", 0)
	void TakeResources(string RName, int Amount) {
		if (Wood.Name == RName) {
			Wood.Amount -= Amount;
		}
		if (Steel.Name == RName) {
			Steel.Amount -= Amount;
		}
		if (Stone.Name == RName) {
			Stone.Amount -= Amount;
		}
		if (Coins.Name == RName) {
			Coins.Amount -= Amount;
		}
		if (Leaves.Name == RName) {
			Leaves.Amount -= Amount
		}
	}
	void Start() {
		cout << "You are in a very cool world!" << endl;
		cout << "Your goal is to go underground into the dungeons to find the golden apple." << endl;
		cout << "Once you do that, you will trade it with the fisherman who will give you a boat to let you explore the sea!" << endl;
		cout << "Now, begin!"
		for (int Loop = 0; GameDone != true; Loop++) {
			if (Hunger <= 0 or Thirst <= 0) {
				cout << "You wasted away..." << endl;
				cout << "Press anything then press enter to stop the program." << endl;
				break;
			cout << "What would you like to do?" << endl;
			cout << "1. Eat" << endl;
			cout << "2. Drink" << endl;
			cout << "3. Forage" << endl;
			cout << "4. Hunt" << endl;
			cout << "5. Move" << endl;
			cout << "6. Create" << endl;
			if (VillageFound == true) {
				cout << "7. Trade" << endl;
			}
			cout << "Press the number that corrosponds." << endl;
			cin >> Answer;
			}
			if (Answer == 1) {
				if (Food != 0) {
					Food -= 1;
					Hunger += 10;
					cout << "You ate 1 piece of food and gained 10 hunger." << endl;
				}
				else {
					cout << "You don't have any food." << endl;
				}
			}
			if (Answer == 2) {
				if (Water != 0) {
					Water -= 1;
					Thirst += 10;
					cout << "You drank 1 piece of water and gained 10 thirst." << endl;
				}
				else {
					cout << "You don't have any water." << endl;
				}
			}
			if (Answer == 3) {
				Random = rand() % 10;
				if (Random == 1) {
					Water += 2;
					cout << "You found some water." << endl;
				}
				if (Random == 2) {
					Water += 4;
					cout << "You found some water." << endl;
				}
				if (Random == 3) {
					Water += 5;
					cout << "You found some water." << endl;
				}
				if (Random == 4) {
					Leaves += 2;
					cout << "You found some leaves." << endl;
				}
				if (Random == 5) {
					Leaves += 4;
					cout << "You found some leaves." << endl;
				}
				if (Random == 6) {
					Water += 2;
					Leaves += 2;
					cout << "You found some leaves and some water." << endl;
				}
				if (Random == 7) {
					Water += 4;
					Leaves += 4;
					cout << "You found some leaves and some water." << endl;
				}
				if (Random == 8) {
					Water += 5;
					Leaves += 5;
					cout << "You found some leaves and some water." << endl;
				}
				if (Random == 9) {
					Coins += 10;
					cout << "You found some coins." << endl;
				}
				Hunger -= 10;
				Thirst -= 10;
			}
			if (Answer == 4) {
				Random = rand() % 6;
				if (Random == 1) {
					Food += 1;
					cout << "You found some food." << endl;
				}
				if (Random == 2) {
					Food += 2;
					cout << "You found some food." << endl;
				}
				if (Random == 3) {
					Food += 3;
					cout << "You found some food." << endl;
				}
				if (Random == 4) {
					Food += 4;
					cout << "You found some food." << endl;
				}
				if (Random == 5) {
					cout << "You didn't find any food!" << endl;
				}
				Hunger -= 10;
				Thirst -= 10;
			}
			if (Answer == 5) {
				cout << "Which way do you want to go?" << endl;
				cout << "1. North" << endl;
				cout << "2. East" << endl;
				cout << "3. South" << endl;
				cout << "4. West" << endl;
				cout << "Press the number that corrosponds." << endl;
				cin >> Answer;
				VillageFound = false;
				Random = rand() % 10;
				if (Random == 1) {
					cout << "You have found a village!" << endl;
					VillageFound = true;
				}
				if (Answer == 1) {
					Location[0] += 1;
					cout << "You moved north." << endl;
				}
				if (Answer == 2) {
					Location[1] += 1;
					cout << "You moved east."
				}
				if (Answer == 3) {
					Location[0] -= 1;
					cout << "You moved south."
				}
				if (Answer == 4) {
					Location[1] -= 1;
					cout << "You moved west."
				}
				Answer = -1;
			}
			if (Answer == 6) {
				cout << "What would you like to craft?" << endl;
				cout << "Shelter:" << endl;
				cout << "10 wood, 7 leaves" << endl;
				cout << "Axe:"
			}
		}
	}
};