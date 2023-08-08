#include<iostream>
using namespace std;

void revStrring(string s){
    if(s.length()==0){
        return ;
    }
    string ros =s.substr(1);
    revStrring(ros);
    cout<<s[0];
}

int main(){
    revStrring("binod");
}