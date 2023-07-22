#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=1;
    for (int i=1;i<=n;i++){
        ans=ans*i;
}
cout<<ans<<endl;
}

// void fib(int n){

//     int t1=0;
//     int t2=1;
//     int nextterm;

//     for (int i=1;i<=n;i++){
//               cout<<t1<<endl;
//               nextterm=t1+t2;
//               t1=t2;
//               t2=nextterm;
//     }

// }
// int main(){
// int n ;
// cin>>n;

// fib(n);
// }