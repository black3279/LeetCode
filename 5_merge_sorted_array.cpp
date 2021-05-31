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
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int left, right;
		left = right = 0;
		vector<int> temp;
		while (left < m && right < n){
			if (nums1[left] < nums2[right]){
				temp.push_back(nums1[left++]);
			}
			else{
				temp.push_back(nums2[right++]);
			}
		}

		if (left < m){
			while (left < m) temp.push_back(nums1[left++]);
		}

		if (right < n){
			while (right<n) temp.push_back(nums2[right++]);
		}

		nums1 = temp;
	}
};

void main(){

	int temp[6];
	vector<int> vctor;
	vector<int> vctor2;
	for (int i = 0; i <6; i++){
		scanf("%d", &temp[i]);
		if(i<3) vctor.push_back(temp[i]);
		else vctor2.push_back(temp[i]);
	}


	Solution sol = Solution();

	sol.merge(vctor, 3, vctor2, 3);

	for (int i = 0; i < vctor.size(); i++){
		printf("%d ", vctor[i]);
	}
}


#endif