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
	vector<int> sortedSquares(vector<int>& nums) {

		int idx;
		int min = 0x7fff0000;

		vector<int> temp;
		vector<int>& list = temp;

		for (int i = 0; i < nums.size(); i++){
			
			if (nums[i] < 0){
				nums[i] *= -1;
			}

			if (nums[i] < min){
				min = nums[i];
				idx = i;
			}

		}

		int left = idx - 1;
		int right = idx;

		while (left>=0 && right < nums.size()){
			if (nums[left] < nums[right]){
				list.push_back(nums[left] * nums[left]);
				left--;
			}
			else{
				list.push_back(nums[right] * nums[right]);
				right++;
			}
		}

		if (left >= 0){
			while (left >= 0){
				list.push_back(nums[left] * nums[left]);
				left--;
			}
		}

		if (right < nums.size()){
			while (right < nums.size()){
				list.push_back(nums[right] * nums[right]);
				right++;
			}
		}


		return list;
	}
};

void main(){

	int temp[5];
	vector<int> vctor;
	for (int i = 0; i < 5; i++){
		scanf("%d", &temp[i]);
		vctor.push_back(temp[i]);
	}
	
	
	Solution sol = Solution();

	vctor = sol.sortedSquares(vctor);

	for (int i = 0; i < vctor.size(); i++){
		printf("%d ", vctor[i]);
	}
}


#endif