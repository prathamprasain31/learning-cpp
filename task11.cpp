#include<iostream>
using namespace std;

int main(){
  //printing  a number from m to n using for loops
  int m,n;
  cout<<"Enter starting number(m): ";
  cin>>m;
  cout<<"Enter ending number (n): ";
  cin>>n;
  cout<<"Numbers using for loops:\n";
  for(int i=m; i<=n; i++){
    cout<<i<<"\t";
  }

  cout<<"\n\n";
  cout<<"Same numbers using while loops:\n";


  // printing a number from m to n using while loops
  int i=m;
  while(i<=n){
    cout<< i <<"\t";
    i++;
  }
 
  // printing numbers from m to n using do while loops
  cout<<"\n\n";
  cout<<"same numbers using do while loop:\n";
  i=m;
  do{
    cout<<i<<"\t";
    i++;
  }while(i<=n);
  
  return 0;
}