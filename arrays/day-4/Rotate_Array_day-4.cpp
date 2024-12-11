#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
    int n = arr.size();
	int equi_d = d % n;
	
	reverse(arr.begin(),arr.end());
	
	reverse(arr.begin(),arr.begin()+(n-equi_d));

	reverse(arr.begin()+(n-equi_d), arr.end());
    }
};

