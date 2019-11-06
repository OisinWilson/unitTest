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
	vector<int> m_nums = {1,29,5,34,6,4};

	assert(p.checkNumAmmount(m_nums) == 1);
	assert(p.betweenCheck(m_nums) == 1);
	assert(p.repeatCheck(m_nums) == 1);

	cin.get();
}