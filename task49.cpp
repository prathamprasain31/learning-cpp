// to find the second smallest number
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

    // Find second smallest
    int smallest = arr[0];
    int secondSmallest = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] != smallest) {
            secondSmallest = arr[i];
            break;
        }
    }

    // Output
    if(secondSmallest == -1)
        cout << "No second smallest element";
    else
        cout << "Second smallest element: " << secondSmallest;

    return 0;
}