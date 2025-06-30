# BinarySearch
from https://en.wikipedia.org/wiki/Binary_search

Binary search works on sorted arrays. Binary search begins by comparing an element in the middle of the array with the target value. If the target value matches the element, its position in the array is returned. If the target value is less than the element, the search continues in the lower half of the array. If the target value is greater than the element, the search continues in the upper half of the array. By doing this, the algorithm eliminates the half in which the target value cannot lie in each iteration.

```cpp
// An iterative binary search function.
int binarySearch(int arr[], int low, int high, int x)
{
	// low = left and high = right
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

```
