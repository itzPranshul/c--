#include <iostream>
using namespace std;

int main (){

    int n1,n2 ;
    char op;

    cin>>n1>>op>>n2;

    switch (op){
       
       case '+':
       cout<<n1+n2<<endl;
       break;

       case '-':
       cout<<n1-n2<<endl;
       break;
       
       case '*':
       cout<<n1*n2<<endl;
       break;

       case '/':
       cout<<n1/n2<<endl;
       break;


       case '%':
       cout<<n1%n2<<endl;
       break;

       default :
       cout<<"operator not found "<<endl;

    }
    return 0;
}
