#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		sort(rotateArray.begin(), rotateArray.end());
		return rotateArray[0];
	}
};

int main(){
	vector<int> array = {3,4,5,1,2};
	Solution s;
	s.minNumberInRotateArray(array);
	system("pause");
	return 0;
}