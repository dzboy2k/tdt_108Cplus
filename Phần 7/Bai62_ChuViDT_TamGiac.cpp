#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &a,int &b,int &c);
int chuVi(int a,int b, int c);
double dienTich(int a,int b, int c);
int main(){
    int a,b,c;
    nhap(a,b,c);
    cout<<"Chu vi="<<chuVi(a,b,c)<<endl;
    cout<<"Dien tich="<<dienTich(a,b,c)<<endl;
}

void nhap(int &a,int &b,int &c){
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;
    if(a+b<=c||a+c<=b||b+c<=a||a<=0||b<=0||c<=0){
        cout<<"Ban da nhap sai, moi ban nhap lai"<<endl;
        nhap(a,b,c);
    }
}

int chuVi(int a, int b,int c){
    return a+b+c;
}

double dienTich(int a, int b,int c){
    double p=chuVi(a,b,c)/2.0;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}



