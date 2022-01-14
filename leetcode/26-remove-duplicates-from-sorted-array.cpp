#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int removeDuplicates(vector<int> &nums)
	{
		if (nums.size() == 0)
			return 0;
		for (auto i = nums.begin(); i + 1 != nums.end(); i++)
		{
			cout << *i << " " << *(i + 1) << endl;
			if (*i == *(i + 1))
			{
				nums.erase(i);
				i = i - 1;
			}
		}
		return nums.size();
	}

	void display(vector<int> &nums)
	{
		for (auto i = nums.begin(); i != nums.end(); ++i)
		{
			cout << *i << " ";
		}
		cout << endl;
	}

	void reverseDisplay(vector<int> &nums)
	{

		for (auto i = nums.rbegin(); i != nums.rend(); i++)
		{

			cout << *i << " ";
		}
		cout << endl;
	}
};

int main()
{
	vector<int> a = {1, 1, 2, 2, 2, 3, 4, 5, 5};
	// vector<int> a = {1, 3, 1, 2};

	Solution sol;
	int k = sol.removeDuplicates(a);
	sol.display(a);
	sol.reverseDisplay(a);
}