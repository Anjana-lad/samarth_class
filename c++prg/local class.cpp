//local class which is defined inside the main function.
#include<iostream>
using namespace std;
int main(){
    class person{
        public:
        int rollNo,marks;
        public:
        int get_details(){
            cout<<"Enter rollno and marks:";
            cin>>rollNo>>marks;
        }
        void display(){
            cout<<"Details:"<<endl;
            cout<<"Rollno="<<rollNo<<endl<<"Marks="<<marks<<endl;
        }
    };
    person p;
    p.get_details();
    p.display();
}