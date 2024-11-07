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
	std::string MenuArt = R"(
                   GymSync Offline Menu
				
            _________________________________________
           |                                         |
           | [1] Calorie Tracker                     |
           | [2] Workout Logger                      |
           | [3] Sync Devices                        |
           | [4] Profile                             |
           |                                         |
           |_________________________________________|
    )";
	system("cls");
	bool switching = true;
	int menu = 0;
	while (switching) {
		std::cout << MenuArt;
		std::cin >> menu;


		switch (menu) {
		case 1:
			caltr.MainMenu();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		}
	}
}

