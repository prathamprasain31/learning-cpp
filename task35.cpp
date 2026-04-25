// program to count the digit present in the given number
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter number: ";
    cin >> n;

    while(n > 0) {
        n /= 10;
        count++;
    }

    cout << "Digits = " << count;
    return 0;
  }