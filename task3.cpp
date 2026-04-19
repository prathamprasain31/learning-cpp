/*
Write a C++ program to:
Take two integers as input
Print their sum
Example:
Input: 3 4  
Output: Sum = 7
*/ 
#include<iostream>
using namespace std;
int main(){
  int num1,num2;
  cout<<"Enter two numbers :"<<endl;
  cin>>num1>>num2;
  cout<<"Input: "<<num1<<","<<num2 <<endl;
  cout<<"Output: Sum ="<<(num1+num2)<<endl;
  return 0;
}
//type in terminal(CTRL + ~(backtick)): g++ task3.cpp -o task3.exe && ./task3.exe