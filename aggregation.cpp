// aggregation: Has-A relationship . It is a process in which one class defines another class as a n entity reference.It is another way to reuse the class.
#include<iostream>
using namespace std;
class address{
    public:
    string city,state;
    public:
    address(string city,string state){
        this->city=city;
        this->state=state;
    }
};
class employee{
    public:
    address *add;
    int id;
    string name;
    public:
    employee(int id,string name,address *add){
        this->id=id;
        this->name=name;
        this->add=add;
    }  
    int show(){
        cout<<"Id="<<id<<"\n name="<<name<<"\n city address="<<add->city<<"\n state address="<<add->state<<endl;
    }
};
int main(){
    address ad("surat","gujarat");
    employee emp(1,"Dipak",&ad);
    emp.show();
}