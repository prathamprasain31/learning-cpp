// print number in descending order using selection sort technique
#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection Sort (Descending)
    for(int i = 0; i < n - 1; i++) {
        int maxIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        // Swap
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }

    cout << "Sorted array in descending order:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}