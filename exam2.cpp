#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int cmd;
    string line;
    string name;
    ofstream writefile;
    ifstream readfile;

    do{
        cout<<"MENU"<<endl;
        cout<<"1.Add student."<<endl;
        cout<<"2.List student."<<endl;
        cout<<"3.Search list student."<<endl;
        cout<<"4.Quit."<<endl;
        cout<<"Please enter menu";
        cin>>cmd;

        if(cmd==1){
        cout<<"Enter Std name : ";
        cin>>name;

        writefile.open("std.txt",fstream::app);
        if(writefile.is_open()){
            writefile<<name<<endl;
        }else{

        cout<<"unable to open file";
        }
        }else if(cmd==2){
        readfile.open("std.txt");
        if(readfile.is_open()){
            while(getline(readfile,line)){
                cout<<line<<endl;
            }
        }else if(cmd==3){
        cout<<"Enter name :";
        cin>>name;

        readfile.open("std.txt");
        if(readfile.is_open()){
            (name="&name&",name);
            while(getline(readfile,name)){
                cout<<name<<endl;
            }
        }
        }
        }else{
        break;}

    }while("myfile.close");

        return 0;
}
