/*
pattern-printing(square pattern)
* * * *
* * * *
* * * *
* * * *
* * * *
*/
#include<iostream>
using namespace std;
int main(){
  for(int i=1; i<=5; i++){
    for(int j=1; j<=4; j++){
      cout<<"*"<<"\t";
    }
    cout<<"\n";
  }
  return 0;
}