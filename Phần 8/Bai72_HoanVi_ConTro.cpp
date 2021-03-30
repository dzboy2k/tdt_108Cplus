#include<iostream>
using namespace std;
void hoanVi(float *&a, float *&b);
int main(){
    float *a,*b;
    a=new float;
    b=new float;
    cout<<"a="; cin>>*a;
    cout<<"b="; cin>>*b;
    cout<<"a="<<*a<<",b="<<*b<<endl;
    hoanVi(a,b);
    cout<<"a="<<*a<<",b="<<*b<<endl;
    system("pause");
}

void hoanVi(float *&a, float *&b){
    float temp=*a;
    *a=*b;
    *b=temp;
}