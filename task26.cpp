/* pascal triangle pattern
    1
   1 1
  1 2 1
 1 3 3 1
*/
#include<iostream>
using namespace std;

int main() {
    int n = 5;

for(int i = 0; i < n; i++) {
int value = 1;

// spaces
for(int j = 0; j < n - i - 1; j++) {
 cout << " ";
}

  // numbers
for(int j = 0; j<= i; j++) {
cout << value << " ";
 value = value * (i - j) / (j + 1);
 }

 cout << endl;
}

return 0;
}