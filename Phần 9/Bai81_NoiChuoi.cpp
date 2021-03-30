#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // Hàm nối chuỗi
    char str1[20], str2[20];
    cout<<"Nhap chuoi 1:";
    cin.getline(str1,20);
    cout<<"Nhap chuoi 2:";
    cin.getline(str2,20);
    strcat(str1,str2); //nối chuỗi str2 vào chuỗi str1
    cout<<"Xuat chuoi sau khi noi: ";
    puts(str1);   
    
    // Hàm nối n kí tự của chuỗi
    char str3[20], str4[20];
    strcpy(str3,"To be ");
    strcpy(str4,"or not to be");
    strncat(str3,str4,6); //nối n kí tự đầu tiên của chuỗi str4 vào chuỗi str3
    cout<<"Xuat chuoi sau khi noi: ";
    puts(str3);   
    
    system("pause");
}