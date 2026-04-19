#include<iostream>
using namespace std;

int main(){
// finding the even number using while loops from 1 to N
int n; // declaring a variable n of datatype integers
cout<<"Enter a number to find upto N number:";  // process of taking inputs from the users
cin>>n;          // storing a number n
 int i= 1;  // initialization parts 
while(i!=(n+1)){  //<..... use of while loops in this condition we can use while(i<=n) also
  cout<<i<<"\t";  // prints number from 1 to N using while loops
  i++;  // increement by 1
}

  return 0;
}