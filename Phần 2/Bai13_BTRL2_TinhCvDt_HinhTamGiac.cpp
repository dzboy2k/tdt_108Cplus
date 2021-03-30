#include<iostream>
using namespace std;
int main (){
    int a,b,c,h;
    cout<<"Moi ban nhap Chieu cao: ";
    cin>>h;
    cout<<"Moi ban nhap canh a= ";
    cin>>a;
    cout<<"Moi ban nhap canh b= ";
    cin>>b;
    cout<<"Moi ban nhap canh c= ";
    cin>>c;
    int cv= a+b+c;
    double dt = ((double)1/2)*b*h;
    cout<<"Chu vi tam giac= "<<dt<<endl;
    cout<<"Dien tich tam giac= "<<dt<<endl;
    system("pause");  
}