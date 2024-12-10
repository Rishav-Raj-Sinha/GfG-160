#include <iostream>
#include <vector>
using namespace std;

// Class Definition
class ArrayReverser {
public:
    void reverseArray(vector<int>& arr) {
        int n = arr.size();
        if (n % 2 == 0) {
            int mid_term_left = (n / 2) - 1;
            int last_term = n - 1;
            for (int i = 0; i <= mid_term_left; i++) {
                int temp = arr[i];
                arr[i] = arr[last_term];
                arr[last_term] = temp;
                last_term = last_term - 1;
            }
        } else {
            int mid_term = n / 2;
            int last_term = n - 1;
            for (int i = 0; i < mid_term; i++) {
                int temp = arr[i];
                arr[i] = arr[last_term];
                arr[last_term] = temp;
                last_term = last_term - 1;
            }
        }
    }
};

// Main Function
int main() {
    // Input Section
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse Logic (Using the Class)
    ArrayReverser reverser;
    reverser.reverseArray(arr);

    // Output Section
    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

