// file handling :: program to open and write data to the text file.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int roll_no,fees;
    string name;
    cout<<"Enter rollno:";
    cin>>roll_no;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin ,name);
    cout<<"Enter fees:";
    cin>>fees;
    ofstream fout("G:\\smarath(MWF)SE\\demo_sam\\f.txt");
    fout<<"Roll_no"<<roll_no<<"\nName:"<<name<<"\nfee="<<fees; 

fout.close();

    ifstream fin("G:\\smarath(MWF)SE\\demo_sam\\theory\\f.txt");
    fin>>roll_no>>name>>fees;
    fin.close();
    cout<<"rollno"<<roll_no<<endl<<"Name"<<name<<endl<<"Fees:"<<fees<<endl;


}