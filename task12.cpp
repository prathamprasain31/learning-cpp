// printing a number from m to n which are even adn summing them 
#include<iostream>
using namespace std;

int main(){
    int i,m,n,sum=0;
  cout<<"Enter a number from m to n: ";
  cin>>m>>n;
  cout<<"Even numbers are:\n";
  for(i=m; i<=n; i++){
    if(i%2==0){
      sum+=i;
      cout<<i<<"\t";
    }
  }
  cout<<"The sum of even number from "<<m<<" to "<<n <<" is "<<sum<<endl;
  return 0;
}