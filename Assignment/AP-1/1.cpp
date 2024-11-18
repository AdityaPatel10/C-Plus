#include <iostream>
#include <vector>
using namespace std;

int countOfElements(vector<int>& arr, int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        
        if (arr[mid] <= x) {
            result = mid;  
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }    
    return result + 1; 
}

int main() {
    int n, x;    
    cout << "Enter the size of the array: ";
    cin >> n;    
    vector<int> arr(n);    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value of X: ";
    cin >> x;
    int result = countOfElements(arr, n, x);    
    cout << "Number of elements less than or equal to " << x << ": " << result << endl;
    return 0;
}
