#include <iostream>
using namespace std;

// Function to find the smallest number in an array
int tinishquxr(int arr[], int size) {
    int min = arr[0]; // Assume the first element is the smallest
    for (int i = 1; i < size; i++) { // Loop through the array
        if (arr[i] < min) { // If a smaller number is found
            min = arr[i]; // Update min
        }
    }
    return min; // Return the smallest number
}

int main() {
    int arr[] = {4, 2, 7, 1, 9, -3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Smallest number: " << tinishquxr(arr, size) << endl;
    return 0;
}
