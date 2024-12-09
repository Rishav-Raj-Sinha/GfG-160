#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int first_largest = -1;
        for(int i=0 ; i<arr.size() ; i++)
        {
            if (arr[i] > first_largest)
            {
                first_largest = arr[i];
            }
        }
        
        int second_largest = -1;
        for (int j=0 ; j<arr.size() ; j++)
        {
            if (arr[j] > second_largest && arr[j] != first_largest)
            {
                second_largest = arr[j];
            }
        }
        return second_largest;
    }
};

int main() {
    Solution sol;
    vector<int> arr;

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int result = sol.getSecondLargest(arr);
    if (result == -1) {
        cout << "No second largest element exists." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}

