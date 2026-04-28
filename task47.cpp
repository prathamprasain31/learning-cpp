// copy element of one array into another array
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int A[100], B[100];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++) {
        B[i] = A[i];
    }

    cout << "Copied array: ";
    for(int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }

    return 0;
}
