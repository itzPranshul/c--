#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n;
   cin>>n;

   for(int i=2;i<sqrt(n);i++){
      if(n%i==0){
        cout<<"n is not a prime number"<<endl;
      }
   
      else{
        cout<<"n is a prime number"<<endl;
      }
   }
   return 0;
}