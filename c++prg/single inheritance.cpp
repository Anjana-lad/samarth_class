// In single inheritance: We have one base class and one child class.
// here base class can be identifies  as parent class or super class or base class and child class can be identifies as child class,sub class or derived class.
//syntax:  class child_class_name : access specifier base class name{
// body;
//}
#include<iostream>
using namespace std;
class Person{  //base class 
    private:
     int id;
    string name;
    public:
    int get_data(){
        cout<<"Enter id:";
        cin>>id;
        cin.ignore();
        cout<<"Enter name:";
        getline(cin, name);
    }
    void show(){
        cout<<"Id="<<id<<"\n Name="<<name<<endl;
    }
};
class student:public Person{// child class
    public:
    int fees,course_id;
    public:
    int set_dt(){
        get_data();
        cout<<"Enter course_id:";
        cin>>course_id;
        cout<<"Enters fees:";
        cin>>fees;
    }
    int show1(){
        show();
        cout<<"Course_id:"<<course_id<<"\n Fees="<<fees<<endl;
    }
};
int main(){
    student st;
    st.set_dt();
    st.show1();
}