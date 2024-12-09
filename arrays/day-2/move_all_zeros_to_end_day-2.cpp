#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int non_zero_count = 0;

        // Move all non-zero elements to the beginning of the array
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[non_zero_count] = arr[i];
                non_zero_count += 1;
            }
        }

        // If all elements are zeros, no modification needed
        if (non_zero_count == 0) {
            return;
        }

        // Fill the remaining positions with zeros
        for (int j = non_zero_count; j < n; j++) {
            arr[j] = 0;
        }
    }
};

int main() {
    // Input section
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Processing the array
    Solution sol;
    sol.pushZerosToEnd(arr);

    // Output section
    cout << "Array after moving zeros to the end: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

