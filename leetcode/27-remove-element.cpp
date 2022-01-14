// https://leetcode.com/problems/remove-element/
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int removeElement(vector<int> &nums, int val)
	{
		for (auto ir = nums.rbegin(); ir != nums.rend(); ir++)
		{
			if (*ir == val)
			{
				nums.erase(--(ir.base()));
			}
			// cout << *ir << endl;
		}

		return nums.size();
	}
};

int main()
{
	Solution sol;

	vector<int> nums = {3, 2, 2, 3, 2, 1, 4, 5, 3};
	int val = 3;

	int k = sol.removeElement(nums, val);
	cout << "result: " << k << endl;

	for (auto i = nums.begin(); i != nums.end(); i++)
	{
		cout << *i << endl;
	}
	return 0;
}