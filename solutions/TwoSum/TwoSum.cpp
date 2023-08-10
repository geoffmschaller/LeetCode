/* 
* Created by Geoff on 8/9/2023.
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int>
TestTwoSum(
		vector<int> &nums,
		int target
)
{
	vector<int> compliments{};
	for (int i = 0; i < nums.size(); i++)
	{
		auto it = std::find(compliments.begin(), compliments.end(), nums[i]);
		if (it != compliments.end())
			return {static_cast<int>(it - compliments.begin()), i};
		compliments.push_back(target - nums[i]);
	}
}

void
TwoSum()
{
	vector<int> nums{1, 2, 3, 4, 9};
	vector<int> case_one = TestTwoSum(nums, 6);
	vector<int> case_two = TestTwoSum(nums, 10);

	printf("%d and %d\n", case_one.at(0), case_one.at(1));
	printf("%d and %d\n", case_two.at(0), case_two.at(1));
}