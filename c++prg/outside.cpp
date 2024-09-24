// defining member function outside the class.
//syntax:  return-type class name :: member function name(){
//}
#include<iostream>
using namespace std;
class student{
    int rollno;
    string name;
    public:
    int data();  // define member function;
    int show();  
};
  int student :: data(){
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter name:";
        cin.ignore();
        cin>>name; // getline(cin, name);
    }
    int student :: show(){
        cout<<"Details:"<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Name="<<name<<endl;
    }
int main(){
    student s1;
    s1.data();
    s1.show();
}