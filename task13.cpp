#include<iostream>
using namespace std;

int main(){
   for(int i=1; i<=5; i++){
    for(int j=1; j<=4; j++){
     if(i==2||i==3||i==4){
      if(j==2||j==3){
        cout<<"\t";
      }
      else{
         cout<<j<<"\t";
      }
     }
     else{
        cout<<j<<"\t";
     }
   }
     cout<<"\n";
   }
  return 0;
}