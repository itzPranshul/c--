#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    cin>>a;
    string b;
    cin>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    char n1=a[0];
    char n2=b[0];
    a[0]=n2;
    b[0]=n1;
    cout<<a<<" "<<b;
  
    return 0;
}
