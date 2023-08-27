#include <iostream>
using namespace std;

bool linearSearch(int n,int  arr[],int  key){    
    for(int i=0;i<n;i++){
    if(arr[i]==key){
        return true;
    }
    }
    return false;
}



int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int ans=linearSearch(n,arr,key);
    cout<<ans;

    return 0;
}