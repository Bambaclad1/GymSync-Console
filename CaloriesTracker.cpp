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
	bool switching = true;
	int menu = 0;
	while (switching) {
		std::cout << "\n" << "You are now in the GymSync Calorie Tracker Module." << "\n";
		std::cout << "[1]Track food\n";
		std::cout << "[2]Check Diary\n";
		std::cout << "[3]Exit\n";

		std::cin >> menu;

		switch (menu) {
		case 1:
			switching = false;
			break;
		case 2:
			Diary(foods);
			switching = false;
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
			std::cout << "------------------------" << std::endl;
		}
	}
}