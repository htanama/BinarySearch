#include <iostream>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        //int mid = low + (high - low) / 2;
        int mid = (low + high) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1; // search the right side of the tree

        // If x is smaller, ignore right half
        else
            high = mid - 1; // searh the left side of the tree
    }

    // If we reach here, then element was not present
    return -1;
}

// Driver code
int main(void)
{
    const int MAX = 9;
    int arr[MAX] = { 2, 3, 4, 9, 12, 16, 20, 25, 30 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 25; // the target number inside the array
    
    int result = binarySearch(arr, 0, n - 1, target);
    
    for (int i = 0; i < MAX; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (result == -1) 
        cout << "Element is not present in array";
    else 
        cout << "Element is present at index " << result;
    
    return 0;
}