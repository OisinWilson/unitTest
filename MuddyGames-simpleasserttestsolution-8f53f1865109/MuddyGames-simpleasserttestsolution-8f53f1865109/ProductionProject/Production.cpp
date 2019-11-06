//@Author: Oisin Wilson
//@StudentNum : C00213826

#include "Production.h"


std::vector<int> Production::inputNums(int t_numOfInputs)
{
	std::vector<int> temp_nums;

	std::cout << "Please input " << t_numOfInputs << " numbers, between 1 - 46" << std::endl;
	int temp_input;
	for (size_t i = 0; i < t_numOfInputs; i++)
	{
		std::cout << "Num " << i + 1 << " : ";
		std::cin >> temp_input;
		temp_nums.push_back(temp_input);
	}

	return temp_nums;
}

//Checks if only 6 nums are entered
bool Production::checkNumAmmount(std::vector<int> t_nums)
{
	if (t_nums.size() > 6)
	{
		return false;
	}
	return true;
}


//Checks if nums are between 1 - 46
bool Production::betweenCheck(std::vector<int> t_nums)
{
	for (auto i = t_nums.begin(); i != t_nums.end(); ++i)
	{
		if (!(*i >= 1 && *i <= 46))
		{
			return false;
		}
	}
	return true;
}

//checks if there are any repeat nums
bool Production::repeatCheck(std::vector<int> t_nums)
{
	for (size_t i = 0; i < t_nums.size(); i++)
	{
		for (size_t j = 0; j < t_nums.size(); j++)
		{
			if (i != j)
			{
				if (t_nums[i] == t_nums[j])
				{
					return false;
				}
			}
		}
	}
	return true;
}