#include <iostream>
using namespace std;
void insert(int arr[], int size, int index) {
    int key = arr[index]; 
    int j = index - 1;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        insert(arr, size, i); 
    }
}

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
    int arr[N];
    cout << "Enter the elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    insertionSort(arr, N); 
    cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}
