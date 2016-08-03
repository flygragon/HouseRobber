#pragma once
#include<vector>
#include<algorithm>
using namespace std;

class HouseRobber {
public:
	int robMoney(vector<int>& nums) {
		int len = nums.size(), pre_value = 0, value = 0, temp;
		for (int i = 0; i <len; i++) {
			temp = value;
			value = max(pre_value + nums[i], value);
			pre_value = temp;
		}
		return value;
	}
};