#pragma once
#include <windows.h>
#include <iostream>
#include <vector>




class CaloriesTracker
{

public:
	struct Food {
		std::string Name;
		std::string Description;
		std::string Unit;
		int Amount;
		int Calories;
		int Carbs;
		int Protein;
		int Fibers;
		int Sugars;
		int Fats;
		bool IsBreakfest = false;
		bool IsLunch = false;
		bool IsDinner = false;
		bool IsSnack = false;
	};
	std::vector<Food> foods;


	CaloriesTracker();
	void MainMenu();
	void Diary(std::vector<Food>& foods);
	void PrintBreakfastFoods(std::vector<Food>& foods);



	private:



};

