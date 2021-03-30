#include<iostream>
using namespace std;
// Khai Báo Hàm
int tongHaiSo(int a, int b);
void xuatDuLieu(int x);
void Ouput();
int main(){
    int a,b,kq;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    kq=tongHaiSo(a,b);
    cout<<"Tong "<<a<<"+"<<b<<"="<<kq<<endl;
    int kq2=tongHaiSo(113,114);
    cout<<"kq2="<<kq2<<endl;
    int kq3=tongHaiSo(1,5);
    xuatDuLieu(kq3);
    cout<<"Ham goi ham:"<<endl;
    Ouput();
    system("pause");
}

// Nội dung Hàm

int tongHaiSo(int a,int b){
    return a+b;
}

/* Hàm void không có giá trị trả về, không dùng return */
void xuatDuLieu(int x){ 
    cout<<x<<endl;
}

void Ouput(){
    int kq=tongHaiSo(9,10);
    xuatDuLieu(kq);
}