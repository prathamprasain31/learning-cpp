// to find the second largest element in an array
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort (Ascending)
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Find second largest using n-1
    int largest = arr[n - 1];
    int secondLargest = -1;

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] != largest) {
            secondLargest = arr[i];
            break;
        }
    }

    // Output
    if(secondLargest == -1)
        cout << "No second largest element";
    else
        cout << "Second largest element: " << secondLargest;

    return 0;
}