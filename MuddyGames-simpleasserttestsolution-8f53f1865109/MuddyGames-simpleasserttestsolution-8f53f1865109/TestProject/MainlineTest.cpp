//@Author: Oisin Wilson
//@StudentNum : C00213826

#include <iostream>
#include <vector>
#include <assert.h>


#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	int t_ammountOfNums = 6;
	vector<int> m_nums;


	cout << "Please input " << t_ammountOfNums << " numbers, between 1 - 46" << endl;
	int temp;
	for (size_t i = 0; i < t_ammountOfNums; i++)
	{
		cout << "Num " << i + 1 << " : ";
		cin >> temp;
		m_nums.push_back(temp);
	}


	assert(p.checkNumAmmount(m_nums) == 1);
	assert(p.betweenCheck(m_nums) == 1);
	assert(p.repeatCheck(m_nums) == 1);

	
	cin.get();
}