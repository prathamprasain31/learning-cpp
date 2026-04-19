/*
Q6. Swap Two Numbers (Without Third Variable - optional challenge ⭐)
Write a C++ program to swap two numbers.
Basic version: using a third variable
Challenge version: without using a third variable
Example:
Input: a = 5, b = 10  
Output: a = 10, b = 5
*/
#include<iostream>
using namespace std;
int main(){
  int num1,num2,temp,a,b;
  cout<<"Enter two numbers:"<<endl; //input is a = x , b = y
  cin>>num1>>num2;
  cout<<"Input: "<<"a ="<<num1 <<"  b= "<<num2<<endl;
//using temporary variables
temp=num1;
num1=num2;
num2=temp;
cout<<"Swaped numbers are"<<endl;
cout<<"Output: "<<"a = "<<num1 <<"  b = "<<num2 <<endl; //upto here number already swapped to a = y , b = x;

  //without using temporary variables:(//previously the numbers is swapped already now it will further swap and gives original values)
  a=num1;
  b=num2;
  a = a + b;
  b = a - b;
  a = a - b;
  cout<<"Output: a = "<< a <<" b = "<< b<<endl; //finally a = x b = y (same as initial values)
   return 0;
}