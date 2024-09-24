// class demonstration
#include<iostream>
using namespace std;
class Person{  //person is the name of the class
    public:   //access specifier
        int rollNo;   // data members
        string name;
    public:
    void get_data(){    // member function
        cout<<"Enter rollno:";
        cin>>rollNo;
        cout<<"Enter Name:";
        cin.ignore();
       getline(cin, name);
    }
    void Display(){    // member function
        cout<<"Rollno="<<rollNo<<endl<<"Name="<<name<<endl;
    }
};
int main(){
    Person p,p1;   // p object for class person
    p.get_data();
    p1.get_data();
    p.Display();
    p1.Display();
}