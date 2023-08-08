#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if (arr[i]==key){
        return i;
    }
    return firstOccurence(arr,n,i+1,key);
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    cout <<firstOccurence(arr,7,0,2);
}