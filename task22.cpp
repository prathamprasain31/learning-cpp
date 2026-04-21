/*
    *       <---- A daimond can be formed by merging upper and lower/inverted pyramid
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include<iostream>
using namespace std;
int main(){
  int n = 5;
//upper pyramid logic 
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
    for(int j=1; j<=2*i-1; j++){
      cout<<"*";
    }
       
    cout<<endl;
  }
  // lower/inverted pyramid logic
    for(int k=n-1; k>=1; k--){
      for(int l=1; l<=n-k; l++){
         cout<<" ";
      }
      for(int l=1; l<=(2*k-1); l++){
        cout<<"*";
      }
cout<<endl;

  }
  return 0;
}