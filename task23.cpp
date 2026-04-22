/*Hollow diamond pattern
    *
   * *
  *   *
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;
int main(){
  int n=4;
  //for upper part 
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
    for(int j=1; j<=2*i-1; j++){
      if(j==1||j==2*i-1){    //<---for pattern to print * in 1st and last only logic
      cout<<"*";
      }
      else{          
        cout<<" ";
      }
    }
    cout<<"\n";
  }

  // for lower part
  for(int i=n-1; i>=1; i--){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
    for(int j=1; j<=2*i-1; j++){
    if(j==1||j==2*i-1){ //<--for pattern to print * in 1st and last only logic of lower part
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<"\n";
  }
  return 0;
}