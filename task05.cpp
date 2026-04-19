/*Q5. Largest of Two Numbers
Write a C++ program to Input two numbers:
Print the larger number
Example:
Input: 10 20  
Output: 20 is greater
*/
#include<iostream>
using namespace std;
int main(){
  int num1, num2;
  cout<<"Enter two number to find greatest among them:"<<endl;
  cin>>num1>>num2;
  cout<<"Input: "<<num1<<","<<num2<<endl;
  if(num1>num2){
    cout<< num1 <<"is greater"<<endl;
  }
  else{
    cout<< num2<<" is greater"<<endl;
  }
  return 0;
}
