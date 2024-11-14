#include "CaloriesTracker.h"

CaloriesTracker::CaloriesTracker()
{
	/* Name Description Unit		Amount Calories Carbs Protein Fibers Sugars Fats		IsBreakfest IsLunch IsDinner IsSnack*/

	Food Yoghurt = { "Yoghurt Griekse Stijl 2% Vet", "Zaanse Hoeve", "Gram", 150, 182, 14, 18, 0,  0, 6, true, false, false, false };
	foods.push_back(Yoghurt);

	Food Template = { "Name", "Description", "Unit", 500, 200, 15, 20, 199, 5, 1000, true, false, false, false };
	foods.push_back(Template);

	Food Kwark = { "Milde Magere Kwark", "Campina", "Gram", 100, 57, 2.8, 10.3, 0, 0, 0.1, false, true, false, false };
	foods.push_back(Kwark);

	Food MacaroniGehaktGroente = { "Macaroni Met Gehakt En Groente ", "", "Gram", 450, 557, 69, 27, 0, 0, 21, false, false, true, false };
	foods.push_back(MacaroniGehaktGroente);

	Food maca = { "macatest Met Gehakt En Groente ", "", "Gram", 450, 557, 69, 27, 0, 0, 21, true, false, false, false };
	foods.push_back(maca);

	Food WheyScoop = { "Vanilla Flavour", "Whey Perfection", "1 maatschep (28g)", 28, 103, 1.5, 22.2, 0, 0, 1, false, false, false, true };
	foods.push_back(WheyScoop);

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
			TrackFood(foods);
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
	PrintDiary(foods);
}

void CaloriesTracker::PrintDiary(std::vector<Food>& foods)
{
	
	for (const auto& food : foods) {
		if (food.IsBreakfest) {
			std::cout << std::endl << "Breakfest" << std::endl;
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
		else if (food.IsLunch)
		{
			std::cout << std::endl << "Lunch" << std::endl;
			std::cout << "Name: " << food.Name << std::endl;
			std::cout << "Description: " << food.Description << std::endl;
			std::cout << "Amount: " << food.Amount << " " << food.Unit << std::endl;

			std::cout << "Calories: " << food.Calories << "kcal | " << "Carbs: " << food.Carbs << "g | " << "Fats: " << food.Fats << "g | " << "Protein: " << food.Protein << "g" << std::endl;
			if (food.Fibers > 0) {
				std::cout << "Fibers: " << food.Fibers << "g | ";
			}

			if (food.Sugars > 0) {
				std::cout << "Sugars: " << food.Sugars << "g" << std::endl;
			}
			std::cout << "------------------------" << std::endl;
		}
		else if (food.IsDinner)
		{
			std::cout << std::endl << "Dinner" << std::endl;
			std::cout << "Name: " << food.Name << std::endl;
			std::cout << "Description: " << food.Description << std::endl;
			std::cout << "Amount: " << food.Amount << " " << food.Unit << std::endl;

			std::cout << "Calories: " << food.Calories << "kcal | " << "Carbs: " << food.Carbs << "g | " << "Fats: " << food.Fats << "g | " << "Protein: " << food.Protein << "g" << std::endl;
			if (food.Fibers > 0) {
				std::cout << "Fibers: " << food.Fibers << "g | ";
			}

			if (food.Sugars > 0) {
				std::cout << "Sugars: " << food.Sugars << "g" << std::endl;
			}
			std::cout << "------------------------" << std::endl;
		}
		else if (food.IsSnack)
		{
			std::cout << std::endl << "Snacks" << std::endl;
			std::cout << "Name: " << food.Name << std::endl;
			std::cout << "Description: " << food.Description << std::endl;
			std::cout << "Amount: " << food.Amount << " " << food.Unit << std::endl;

			std::cout << "Calories: " << food.Calories << "kcal | " << "Carbs: " << food.Carbs << "g | " << "Fats: " << food.Fats << "g | " << "Protein: " << food.Protein << "g" << std::endl;
			if (food.Fibers > 0) {
				std::cout << "Fibers: " << food.Fibers << "g | ";
			}

			if (food.Sugars > 0) {
				std::cout << "Sugars: " << food.Sugars << "g" << std::endl;
			}
			std::cout << "------------------------" << std::endl;
		}
	}
	if (foods.size() == 0)
	std::cout << "No foods have been logged yet. Make sure to log some food!" << std::endl;
}

float CaloriesTracker::convertInputToFloat(const std::string& input) {
	std::string modifiedInput = input;
	std::replace(modifiedInput.begin(), modifiedInput.end(), ',', '.'); // thankyou again internet
	return std::stof(modifiedInput); 
}


void CaloriesTracker::TrackFood(std::vector<Food>& foods)
{
	std::string input = "";

	std::string Name = "";
	std::string Description = "";
	std::string Unit = "";
	float Amount = 0, Calories = 0, Carbs = 0, Protein = 0, Fibers = 0, Sugars = 0, Fats = 0;

	system("cls");
	std::cout << "Please input the following to put some food. Enter 0 as value if its unknown." << std::endl;

	std::cout << std::endl << "Product Name: ";
	std::getline(std::cin >> std::ws, Name);  

	std::cout << std::endl << "Product Description: ";
	std::getline(std::cin >> std::ws, Description);

	std::cout << std::endl << "Product Unit (gram, liter..): ";
	std::getline(std::cin >> std::ws, Unit);

	std::cout << std::endl << "Product Amount (how much gram/liter...): ";
	std::cin >> input;
	Amount = convertInputToFloat(input);

	std::cout << std::endl << "Product Calories per " << Amount << " " << Unit << ":";
	std::cin >> input;
	Calories = convertInputToFloat(input);

	std::cout << std::endl << "Product Carbs per " << Amount << " " << Unit << ":";
	std::cin >> input;
	Carbs = convertInputToFloat(input);

	std::cout << std::endl << "Product Proteins per " << Amount << " " << Unit << ":";
	std::cin >> input;
	Protein = convertInputToFloat(input);

	std::cout << std::endl << "Product Fibers per " << Amount << " " << Unit << ":";
	std::cin >> input;
	Fibers = convertInputToFloat(input);

	std::cout << std::endl << "Product Sugars per " << Amount << " " << Unit << ":";
	std::cin >> input;
	Sugars = convertInputToFloat(input);

	std::cout << std::endl << "Product Fats per " << Amount << " " << Unit << ":";
	std::cin >> input;
	Fats = convertInputToFloat(input);

	system("cls");
	bool isBreakfest = false, isLunch = false, isDinner = false, isSnack = false;
	int menu = 0;
	while (true) {
		std::cout << "\nIs the product consumed as Breakfast, Lunch, Dinner, or Snack?\n";
		std::cout << "[1] Breakfast\n[2] Lunch\n[3] Dinner\n[4] Snack\n";
		std::cin >> menu;

		if (menu == 1) { isBreakfest = true; break; }
		else if (menu == 2) { isLunch = true; break; }
		else if (menu == 3) { isDinner = true; break; }
		else if (menu == 4) { isSnack = true; break; }
		else { std::cout << "Invalid option, try again.\n"; }
	}

	system("cls");
	std::cout << std::endl << "Product Information Successfully Stored";
	std::cout << std::endl;
	std::cout << std::endl << "Name: " << Name << " Description: " << Description << " Unit: " << Unit << " Amount: " << Amount;
	std::cout << std::endl << "Calories: " << Calories << " Carbs: " << Carbs << " Protein: " << Protein << " Fibers: " << Fibers << " Sugars: " << Sugars << " Fats: " << Fats << " ";
	std::cout << std::endl;
	std::cout << std::endl << "Is this alright?";
	std::cout << std::endl << "[1] Yes.";
	std::cout << std::endl << "[2] No." << std::endl;
	int yesorno = 1;
	std::cin >> yesorno;
	
	if (yesorno == 2)
	{
		std::cout << std::endl << "Answer was 2 or no. Restarting module..." << std::endl;
		TrackFood(foods);
	}
	else {
		Food UserInput = { Name, Description, Unit, Amount, Calories, Carbs, Protein, Fibers,  Sugars, Fats, isBreakfest, isLunch, isDinner, isSnack };
		foods.push_back(UserInput);
		std::cout << std::endl << "Sucessfully saved." << std::endl;

	}

}
