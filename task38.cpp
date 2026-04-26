// print largest number among the given numbers in array
#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 9, 2, 7};
    int max = arr[0];

    for(int i = 1; i < 4; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Largest = " << max;

    return 0;
}