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
		int max = 0;
		int continuous = 0;
		int prevNum = -1;

		for (int i = 0; i < nums.size(); i++){
			if (nums[i] == 1){
				if (prevNum == 1){
					continuous++;
				}
				else{
					continuous = prevNum = 1;
				}

				if (continuous>max) max = continuous;
			}
			else {
				prevNum = nums[i];
				continuous = 0;
			}
		}

		return max;
	}
};


#endif