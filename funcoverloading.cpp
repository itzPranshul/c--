#include <iostream>
using namespace std;

class funcOver{
    //Function overloading
    public:
    void fun(){
        cout<<"function with no argument"<<endl;
    }
    void fun(int n){
        cout<<"function with int argument"<<endl;
    }
    void fun(double n){
        cout<<"function with double argument"<<endl;
    }
};

//function overloading
int main(){
    funcOver obj;
    obj.fun();
    obj.fun(4);
    obj.fun(3.5);
    return 0;
}