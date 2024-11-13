#pragma once
#include <windows.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>




class CaloriesTracker
{

public:
	struct Food {
		std::string Name;
		std::string Description;
		std::string Unit;
		float Amount;
		float Calories;
		float Carbs;
		float Protein;
		float Fibers;
		float Sugars;
		float Fats;
		bool IsBreakfest = false;
		bool IsLunch = false;
		bool IsDinner = false;
		bool IsSnack = false;
	};
	std::vector<Food> foods;


	CaloriesTracker();
	void MainMenu();
	void Diary(std::vector<Food>& foods);
	void PrintDiary(std::vector<Food>& foods);
	void TrackFood(std::vector<Food>& foods);
	float convertInputToFloat(const std::string& input);


	private:


		
};

