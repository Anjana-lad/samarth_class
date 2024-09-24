// multilevel inheritance :
#include<iostream>
using namespace std;
class Employee{
protected:
int eid;
string name;
    public:
    void getdata(){
        cout<<"Enter id and name:";
        cin>>eid;
        cin.ignore();
        getline(cin, name);
    }
    void show(){
        cout<<"Eid:"<<eid<<"\n Name"<<name<<endl;
    }
};
class Task:public Employee{
    public:
    int task1,task2;
    public:
    void getTask(){
        getdata();
        cout<<"Enter the values for task1 and task2:";
        cin>>task1>>task2;
    }
    void showTask(){
        show();
        cout<<"Task1="<<task1<<"Task2="<<task2<<endl;
    }
};
class Appraisal:public Task{
    public:int total;
    public:
    int total_Task(){
        getTask();
        total=task1+task2;
    }
    int show_app(){
        showTask();
        cout<<"Total task ="<<total<<endl;
    }
};
int main(){
    Appraisal app;
    app.total_Task();
    app.show_app();
}