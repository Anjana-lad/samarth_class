// file handling to read any file with the help of ifstream
#include<iostream>
#include<fstream>

using namespace std;
int main(){
    // char str[1500];
    // ifstream fin("G:\\smarath(MWF)SE\\demo_sam\\theory\\class.txt");
    // fin>>str;
    // fin.close();
    // cout<<str;
    int roll_no,fee;
    char name[50];
    ifstream fin("G:\\smarath(MWF)SE\\demo_sam\\theory\\f.txt");
    fin>>roll_no>>name>>fee;
    fin.close();
    cout<<"rollno"<<roll_no<<endl<<"Name"<<name<<endl<<"Fees:"<<fee<<endl;
}