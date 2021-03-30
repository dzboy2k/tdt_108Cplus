#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14
int main (){
    double r;
    cout<<"Moi ban nhap ban kinh: "<<endl;
    cin>>r;
    double cv=2*PI*r;
    double dt=pow(r,2)*PI;
    cout<<"Chu vi hinh tron: "<<cv<<endl;
    cout<<"Dien tich hinh tron: "<<dt<<endl;
    system("pause");
}