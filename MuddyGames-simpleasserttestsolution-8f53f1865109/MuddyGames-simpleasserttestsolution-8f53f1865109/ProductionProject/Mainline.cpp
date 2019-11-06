//@Author: Oisin Wilson
//@StudentNum : C00213826

#include <vector>
#include <assert.h>
#include "../ProductionProject/Production.h"

using namespace std;


int main()
{
	Production p;
	vector<int> m_nums = p.inputNums(6);

	assert(p.checkNumAmmount(m_nums) == 1);
	assert(p.betweenCheck(m_nums) == 1);
	assert(p.repeatCheck(m_nums) == 1);

	cin.get();
}
