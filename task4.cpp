/*
Write a C++ program to check whether a given number is:
Even or odd 
Example:
Input: 6  
Output: Even
*/
#include<iostream>
using namespace std;

int main(){
  int number;
  cout<<"Enter a number: ";
  cin>>number;
  cout<<"Input: "<<number<<endl;
  if(number%2==0){
    cout<<"Output: even"<<endl;
  }
  else{
  cout<<"Output: odd"<<endl;
  }
  return 0;
}
//type in terminal(CTRL + ~(backtick)): g++ task4.cpp -o task4.exe; ./task4.exe  
