// print the sum of the numbers[1,2,3,4,5] using array concepts
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum = " << sum;

    return 0;
}