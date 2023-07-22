#include <iostream>
using namespace std;

int add(int a ,int b){
    return a+b;
}

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;

    int ans = add(a,b);

    cout<<ans<<endl;
}