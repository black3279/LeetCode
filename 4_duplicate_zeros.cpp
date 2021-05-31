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
	void duplicateZeros(vector<int>& arr) {
		int len = arr.size();
		int cnt = 0;
		vector<int> temp;

		for (int i = 0; i < len; i++){
			if (arr[i] == 0){
				temp.push_back(0);
				cnt++;
				if (cnt == len) break;

				temp.push_back(0);
				cnt++;

				if (cnt == len) break;
			}
			else{
				temp.push_back(arr[i]);
				cnt++;
				if (cnt == len) break;
			}
		}

		arr = temp;
	}
};

void main(){

	int temp[8];
	vector<int> vctor;
	for (int i = 0; i <8; i++){
		scanf("%d", &temp[i]);
		vctor.push_back(temp[i]);
	}


	Solution sol = Solution();

	sol.duplicateZeros(vctor);

	for (int i = 0; i < vctor.size(); i++){
		printf("%d ", vctor[i]);
	}
}


#endif