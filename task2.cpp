/*Write a C++ program to:
Take an integer input from the user
Display the entered number
Input: 5  
Output: You entered: 5

*/
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a number:"<<endl;
  cin>>num;
  cout<<"Input:"<<num <<"\n";
  cout<<"Output: you entered : "<<num <<endl;
  
  return 0;
}
//type in terminal(CTRL + ~(backtick)): g++ task2.cpp -o task2.exe && ./task2.exe