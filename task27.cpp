/*
Binary triangle pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main(){
  int n=5;
  for(int i=1; i<=n; i++){    // it tells the no of rows 
    for(int j=1; j<=i; j++){
      if((i+j)%2==0){   //<-- when the sum of i and j are perfectly divisible by 2 then we print "1"
        cout<<"1 ";
      }
      else{              //<-- otherwise we print "0" if tee number is not perfectly divisible by 2
        cout<<"0 ";
      }
    }
    cout<<endl;
  }
  return 0;
}