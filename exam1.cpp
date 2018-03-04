#include <iostream>
using namespace std;

float add(float a,float b) {
    return a+b;
}

float sub(float a,float b) {
    return a-b;
}

float mul(float a,float b) {
    return a*b;
}

float div(float a,float b) {
    return a/b;
}

int main() {
    float a=0,b=0,result=0;
    int cmd;
    cout<<"Welcome to CLT Calculator V1.00"<<endl;
    cout<<"Number 1 : ";
    cin>>a;
    cout<<"Number 2 : ";
    cin>>b;
    cout<<"1.+\n2.-\n3.*\n4./\n5.quit"<<endl;
    cin>>cmd;
    switch(cmd){
    case 1 : cout<<"Result="<<add(a,b)<<endl;break;
    case 2 : cout<<"Result="<<sub(a,b)<<endl;break;
    case 3 : cout<<"Result="<<mul(a,b)<<endl;break;
    case 4 : cout<<"Result="<<div(a,b)<<endl;break;
    case 5 : break;
}
        return 0;
}
