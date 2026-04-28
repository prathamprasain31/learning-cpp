// finding smallest number using selection sort 
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Only first pass of selection sort
    int minIndex = 0;

    for(int j = 1; j < n; j++) {
        if(arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }

    // Swap to bring smallest at front
    int temp = arr[0];
    arr[0] = arr[minIndex];
    arr[minIndex] = temp;

    cout << "Smallest element = " << arr[0];

    return 0;
}