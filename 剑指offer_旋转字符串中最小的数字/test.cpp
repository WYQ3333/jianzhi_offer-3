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
	int i = 0;
	for (i = 0; i < array.size(); ++i){
		cout << array[i] << " ";
	}
	cout << endl;
	Solution sss;
	sss.minNumberInRotateArray(array);
	for (i = 0; i < array.size(); ++i){
		cout << array[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}