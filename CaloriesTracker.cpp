#include "CaloriesTracker.h"

CaloriesTracker::CaloriesTracker()
{
	/* Name Description Unit		Amount Calories Carbs Protein Fibers Sugars Fats		IsBreakfest IsLunch IsDinner IsSnack*/

	Food Yoghurt = { "Yoghurt Griekse Stijl 2% Vet", "Zaanse Hoeve", "Gram", 150, 182, 14, 18, 0,  0, 6, true, false, false, false };
	foods.push_back(Yoghurt);

	Food Template = { "Name", "Description", "Unit", 500, 200, 15, 20, 199, 5, 1000, true, false, false, false };
	foods.push_back(Template);
}

void CaloriesTracker::MainMenu()
{
	std::string MenuArt = R"(
		   Calorie Tracker Module

            _________________________________________
           |                                         |
           | [1] Track Food                          |
           | [2] Check Diary                         |
           | [3] Exit                                |
           |                                         |
           |_________________________________________|
    )";
	bool switching = true;
	int menu = 0;
	while (switching) {
		std::cout << MenuArt;
		std::cin >> menu;

		switch (menu) {
		case 1:

			break;
		case 2:
			Diary(foods);

			break;
		case 3:
			switching = false;
			break;
		}
	}
}

void CaloriesTracker::Diary(std::vector<Food>& foods)
{
	system("cls");
	PrintBreakfastFoods(foods);
}

void CaloriesTracker::PrintBreakfastFoods(std::vector<Food>& foods)
{
	for (const auto& food : foods) {
		if (food.IsBreakfest) {
			std::cout << "Name: " << food.Name << std::endl;
			std::cout << "Description: " << food.Description << std::endl;
			std::cout << "Amount: " << food.Amount << " " << food.Unit << std::endl;

			std::cout << "Calories: " << food.Calories << "kcal | " << "Carbs: " << food.Carbs << "g | " << "Fats: " << food.Fats << "g | " << "Protein: " << food.Protein << "g" << std::endl;
			if (food.Fibers > 0) {
				std::cout << "Fibers: " << food.Fibers << "g | ";
			}

			if (food.Sugars > 0) {
				std::cout << "Sugars: " << food.Sugars  << "g" << std::endl;
			}
			std::cout << "------------------------" << std::endl;
		}
	}
}