# Find-Smallest-Number

A C++ program to find the smallest number in an array

# Find Smallest Number in an Array

This project contains a C++ program that finds the smallest number in a given array using a simple loop.

## Algorithm

The algorithm to find the smallest number in the array is as follows:

1. Assume the first element of the array as the smallest.
2. Loop through the array and compare each element with the current smallest.
3. If a smaller element is found, update the smallest value.
4. After the loop finishes, the smallest number will be returned.

## Pseudocode

Step 1: Start
Step 2: min ← arr[0] // Assume the first element is the smallest
Step 3: For i from 1 to size-1 do If arr[i] < min then min ← arr[i] // Update min if a smaller value is found End For Step 4: Return min
Step 5: End

## Code Implementation

```cpp
#include <iostream>
using namespace std;

// Function to find the smallest number in an array
int tinishquxr(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {4, 2, 7, 1, 9, -3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Smallest number: " << tinishquxr(arr, size) << endl;
    return 0;
}
1. How to Run
Compile the program using:
g++ smallest_number.cpp -o output

2. Run the program:
./output


3. The program will print the smallest number in the array.

                    Author
                    Samuel Diriba

```
