#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector <int> temp;
		int length = nums.size();
		for (int i = 0; i < length - 1; i++)
		{
			for (int j = 1; j < length; j++)
			{
				if (((nums[i] + nums[j]) == target) && i != j)
				{
					temp.push_back(i);
					temp.push_back(j);
					return temp;
				}
			}
		}
	}
};