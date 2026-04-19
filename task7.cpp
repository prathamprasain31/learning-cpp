/*
Q7. Simple Interest Calculation
Write a C++ program to calculate Simple Interest using formula:
SI=(p*t*r)/100
Where:
P = Principal,R = Rate,T = Time
Example:
Input: P=1000, R=5, T=2  
Output: SI = 100
*/
#include<iostream>
using namespace std;
int main(){
  int p =1000;
  int r = 5;
  int t= 2;
  int si; // we let here integer data type because we are getting actuall 100 so if not fixed used float datatypes
  si=(p*t*r)/100;
  cout<<"SI : "<<si<<endl; // here we simply calculate the simple interest 

  return 0;
}