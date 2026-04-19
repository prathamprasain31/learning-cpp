#include<iostream>
using namespace std;
int main(){
  int n;
  //printing 1 to N number using for loops
  cout<<"Enter upto how many number you want to print: "<<endl;
  cin>>n;

  //implementing the logic to print the number using for loops 
  for(int i=1; i<=n; i++){
    cout<<i<<"\t";
  }

  return 0;
}