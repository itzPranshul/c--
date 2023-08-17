#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int a,int b){
    int ans=a+b;
    cout<<ans<<endl;
    if(a-b<=0){
        cout<<-(a-b)<<endl;
    }
    else {
        cout<<(a-b)<<endl;
    
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    cin>>a;
    int b;
    cin>>b;
    update(a,b);  
    
    return 0;
}
