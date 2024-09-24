//hierarchical inheritance
#include<iostream>
using namespace std;
class Shape{
    public:
    string sh_name;
    public:
    void get_name(){
        cout<<"Enter name:";
        cin>>sh_name;
        cout<<"Name="<<sh_name<<endl;
    }
};
class Rectangle :public Shape{
    public:
    int length,width,area;
    public:
    int getdata(){
        get_name();
        cout<<"Enter length,width:";
        cin>>length>>width;
    }
    int show_rect(){
        area=length*width;
        cout<<"Area of rectangle="<<area<<endl;
    }
};
class Square :public Shape{
    public:
    int side,area1;
    public:
    void getside(){
        get_name();
        cout<<"Enter side:";
        cin>>side;
    }
    void display(){
        area1=4*side;
        cout<<"Area of square="<<area1<<endl;
    }
};
int main(){
    Rectangle rect;
    rect.getdata();
    rect.show_rect();
    Square sq;
    sq.getside();
    sq.display();
}