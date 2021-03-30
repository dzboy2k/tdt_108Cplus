#include<iostream>
using namespace std;
void hamThamTri(int a);  
void hamThamBien(int &a); //&: địa chỉ biến được truyền
int main(){
    int a;
    cout<<"a="; cin>>a;
    cout<<"----------------"<<endl;
    hamThamTri(a);
    cout<<"a="<<a<<endl;
    cout<<"----------------"<<endl;
    hamThamBien(a); 
    cout<<"a="<<a<<endl; //a sau khi được gán địa chỉ truyền vào hàm tham biến
}

void hamThamTri(int a){
    a=a*2;
    cout<<"a1="<<a<<endl;
}

void hamThamBien(int &a){
    a=a*2;
    cout<<"a2="<<a<<endl;
}