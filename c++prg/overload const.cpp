//overloading constructor:
#include<iostream>
using namespace std;
class rectangle{
    public:
    int width,height;
    public:
    rectangle();
    rectangle(int,int);
    int area(){
        return width*height;
    }  
};
rectangle :: rectangle(){
    cout<<"Enter width and height:";
    cin>>width>>height;
}
rectangle :: rectangle(int a,int b){
    width=a;
    height=b;
}
int main(){
    rectangle R1;
    rectangle R2;
    cout<<"area of default constructor="<<R1.area()<<endl;   
    cout<<"area of parameterized constructor="<<R2.area()<<endl;   
}