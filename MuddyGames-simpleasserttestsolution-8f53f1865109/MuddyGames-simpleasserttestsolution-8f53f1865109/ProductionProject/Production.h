#pragma once

//@Author: Oisin Wilson
//@StudentNum : C00213826


#include <iostream>
#include <vector>


class Production{
public:
	std::vector<int> inputNums(int t_numOfInputs);
	bool checkNumAmmount(std::vector<int> t_nums);
	bool betweenCheck( std::vector<int> t_nums);
	bool repeatCheck(std::vector<int> t_nums);

};
