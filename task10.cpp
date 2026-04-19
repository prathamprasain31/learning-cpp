#include<iostream>
using namespace std;
int main(){
 // finding the numbers from 1 to N using do while loops 
 int n;
cout<<"Enter a number upto where it should be print:";
cin>>n;
int i=1;
 do{
  cout<<i<<"\t";
  i++;
}while(i!=(n+1));  // here also in condition part we can use while(i<=n) instead of while(i!=(n+1)) 
  return 0; 
}