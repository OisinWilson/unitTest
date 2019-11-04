//@Author: Oisin Wilson
//@StudentNum : C00213826

#include "Production.h"

int Production::someMethod(int a)
{
	return a - a;
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