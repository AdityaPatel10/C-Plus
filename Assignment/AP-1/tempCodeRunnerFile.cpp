#include <iostream>
#include <vector>
using namespace std;

// Function to find the index of the target value or the insertion index
int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid potential overflow

        if (nums[mid] == target) {
            return mid; // Target found
        }
        if (nums[mid] < target) {
            left = mid + 1; // Target is in the right half
        } else {
            right = mid - 1; // Target is in the left half
        }
    }

    // If the target is not found, 'left' will be the insertion index
    return left;
}

int main() {
    vector<int> nums;
    int n, value, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the sorted distinct integers: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        nums.push_back(value);
    }

    cout << "Enter the target value: ";
    cin >> target;

    int index = searchInsert(nums, target);
    cout << "Output: " << index << endl;

    return 0;
}
