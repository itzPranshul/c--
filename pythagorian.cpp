#include <iostream>
using namespace std;

bool checkpythagon(int a , int b ,int c){

   int x,y,z;
     
      x = max(a , max(b,c));

     if (x==a ){
        (y=b);
        (z=c);
     }
     else if (x==b){
        (y=a);
        (z=c);
     }
     else{
        (y=b);
        (z=a);
     }
if(x*x==y*y+z*z){
     return true;
}
     return false;
}

int main(){
     int a,b,c;
     cin>>a>>b>>c;

     cout <<checkpythagon(a,b,c)<<endl;
}