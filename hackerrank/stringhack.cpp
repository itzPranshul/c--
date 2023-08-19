#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    public:
    int age;
    int standard;
    string first_name;
    string last_name;
    
    int set_age(int a){
        age=a;
        return age;
    }
    int set_standard(int b){
        standard=b;
        return standard;
    }
    string set_first_name(string a){
        first_name=a;
        return first_name;
    }
    string  set_last_name(string b){
        last_name=b;
        return last_name;
    }
    
    int get_age(){
        return age;
    }
    string get_last_name(){
        return last_name;
    }
    string get_first_name(){
        return first_name;
    }
    int get_standard(){
        return standard;
    }
    string to_string(){
        return std::__cxx11::to_string(age)+","+first_name+","+last_name+","+std::__cxx11::to_string(standard);
    }
    };

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.   get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}