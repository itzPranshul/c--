#include <iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    student(string s, int a, bool g){
        cout <<"this is a paramaterized constructor"<<endl;
        name= s;
        age =a;
        gender= g;
    }//paramaterized constructor

    student(){
        cout <<"default constructor"<<endl;
    }//default constructor

    student(student &a){
        cout <<"this is a copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }//copy constructor

    ~student(){
        cout <<"destructor is called"<<endl;
    }//destructor 
    
    //print function
    void printInfo(){
        cout<<"name=";
        cout<<name<<endl;
        cout<<"age=";
        cout<<age<<endl;
        cout<<"Gender=";
        cout<<gender<<endl;
    }
};
int main (){
    // student a;
    // a.name = "pranshul";
    // a.age =18;
    // a.gender =0;
    // a.printInfo();


    // student arr[3];
    // for(int i=0;i<3;i++){
    //     cin>>arr[i].name;
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    //     arr[i].printInfo();
    // }

    
    student a("pranshul", 18 , 0);
    a.printInfo();

    //calling copy constructor
    student b = a;
    b.printInfo();

    return 0;
}
