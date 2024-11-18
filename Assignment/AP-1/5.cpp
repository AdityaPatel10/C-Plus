#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; 
        }
        if (nums[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
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
    cout << "Index: " << index << endl;
    return 0;
}
