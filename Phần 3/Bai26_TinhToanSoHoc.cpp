#include<iostream>
using namespace std;
int main(){
    int a,b;
    char chon;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"Nhap phep tinh (+,-,*,/):";
    do
    {
        cin>>chon;
        if (chon!='+'&&chon!='-'&&chon!='*'&&chon!='/')
        {
            cout<<"Moi ban nhap lai: "<<endl;
        }
    } while (chon!='+'&&chon!='-'&&chon!='*'&&chon!='/');

    switch (chon)
    {
    case '+': cout<<"Ket qua a+b="<<a+b<<endl; break;
    case '-': cout<<"Ket qua a-b="<<a-b<<endl; break;
    case '*': cout<<"Ket qua a*b="<<a*b<<endl; break;
    case '/':
        if(b==0){
            cout<<"Mau so phai khac 0"<<endl;
        }
        else
        {
            cout<<"Ket qua a/b="<<a*1.0/b<<endl;
        }
        break;
    default:
        break;
    }
    system("pause");
}