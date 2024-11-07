#include <iostream>

#include "WelcomeScreen.h"
#include "CaloriesTracker.h"

void menu();

int main()
{
	WelcomeScreen welcomescreen;

	welcomescreen.Intro();
	
	menu();
	
	return 0;
}





void menu() {
	CaloriesTracker caltr;

	system("cls");
	bool switching = true;
	int menu = 0;
	while (switching) {
		std::cout << "GymSync Offline Menu\n";
		std::cout << "[1] Calorie Tracker\n";
		std::cout << "[2] Workout Logger\n";
		std::cout << "[3] Sync Devices\n";
		std::cout << "[4] Profile\n";
		std::cin >> menu;


		switch (menu) {
		case 1:
			caltr.MainMenu();
			switching = false;
			break;
		case 2:
			switching = false;
			break;
		case 3:
			switching = false;
			break;
		case 4:
			switching = false;
			break;
		}
	}
}

