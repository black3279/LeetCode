#pragma warning(disable:4996)

#if 01

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>

using namespace std;

vector<int> numsData;
vector<int>& nums = numsData;

class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int sol = 0;
		int cnt;

		for (int i = 0; i < nums.size(); i++){
			cnt = 0;
			while (nums[i]>0){
				cnt++;
				nums[i] /= 10;
			}
			if (cnt % 2 == 0) sol++;

		}

		return sol;
	}
};


#endif