/*Numbered pyramid centered pattern
    1
   121
  12321
 1234321
*/
#include<iostream>
using namespace std;
int main(){
  int n=4;
  for(int i=1; i<=4; i++){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
  for(int j=1; j<=i; j++){   //<-- it helps to print the number straight to the center 
    cout<<j;
  }
  for(int j=i-1; j>=1; j--){  //<--it helps to print number reverse from the center of each row
    cout<<j;
  }
  cout<<"\n";
}
  return 0;
}