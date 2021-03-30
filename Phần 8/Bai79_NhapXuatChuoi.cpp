#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // Dùng cin khi nhập chuỗi, chuỗi sẽ bị ngắt khi gặp khoảng trắng
    // Dùng cin.getline() hoặc gets
    char *str;
    str=new char[30];
    cout<<"Nhap chuoi"<<endl;
    cin.getline(str,30);
    // gets(str);
    
    // Xuất chuỗi
    // Dùng puts
    cout<<"Xuat chuoi"<<endl;
    puts(str);
    cout<<"-------------------\n";
    // cout<<str<<endl;

    // VD
    #define MAX 255
    char str1[MAX];
    char *str2;
    cout<<"Nhap chuoi str1: "<<endl;
    gets(str1);
    // cin.getline(str1,MAX);
    str2=new char[MAX];
    cout<<"Nhap chuoi str2: "<<endl;
    cin.getline(str2,MAX);
    cout<<"Chuoi str1: "<<str1<<endl;
    cout<<"Chuoi str2: ";
    puts(str2);

    // Tính độ dài chuỗi strlen - khai báo thư viện string.h
    char *ch=new char[50];
    cout<<"Nhap ch=";
    gets(ch);
    cout<<"Do dai ch="<<strlen(ch)<<endl;
    system("pause");
}