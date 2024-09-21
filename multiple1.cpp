// the problem is that if i have same name of member function in both the child as well as base class. 
#include<iostream>
using namespace std;
class A{
 public:
 void show(){
    cout<<"I am in class A"<<endl;
 }
};
class B{
    public:
    void show(){
        cout<<"I am in class B"<<endl;
    }

};
class C:public A,public B{
    public:
    void show(){
       A::show();
       B::show();
        cout<<"I am in class C"<<endl;
    }
};

int main(){
    C c;
    c.show();
}