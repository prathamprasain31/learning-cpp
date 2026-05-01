// find sum and average of positive and negative number
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

    int posCount = 0, negCount = 0;
    int posSum = 0, negSum = 0;

    // Process array
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            posSum += arr[i];
            posCount++;
        }
        else if(arr[i] < 0) {
            negSum += arr[i];
            negCount++;
        }
    }

    // Output results
    cout << "\nPositive Sum = " << posSum << endl;
    if(posCount != 0)
        cout << "Positive Average = " << (float)posSum / posCount << endl;
    else
        cout << "No positive numbers" << endl;

    cout << "\nNegative Sum = " << negSum << endl;
    if(negCount != 0)
        cout << "Negative Average = " << (float)negSum / negCount << endl;
    else
        cout << "No negative numbers" << endl;

    return 0;
}