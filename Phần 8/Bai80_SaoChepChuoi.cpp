#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // Để sử dụng hàm strcpy, strncpy phải khai báo thư viện string.h
    char str1[20], str2[20];
    cout<<"Nhap chuoi 1:";  
    gets(str1);
    strcpy(str2,str1); //Sao chép nội dung của str1 vào str2, nội dung của str2 sẽ bị xóa
    // str2=str1 <= Sai
    cout<<"Xuat chuoi 2:"; 
    puts(str2);
    cout<<"--------------------"<<endl;
    char str3[20];
    cout<<"Nhap chuoi 1:";  
    gets(str1);
    strncpy(str3,str1,5); //Sao chép n kí tự từ str1 vào str3, nếu n<chiều dài str1 thì sẽ điền khoảng trắng cho đủ n kí tự vào str3 
    cout<<"Xuat chuoi 3:"; 
    puts(str3);
    system("pause");
}