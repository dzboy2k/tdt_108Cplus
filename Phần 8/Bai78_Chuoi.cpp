#include<iostream>
using namespace std;
int main(){
    //  Chuỗi: mảng kí tự được kết thúc bằng ký tự null ('\0')
    char str[20]; //khai báo chuỗi - dùng mảng
    str[0]='P';
    str[1]='u';
    str[2]='t';
    str[3]='i';
    str[4]='n';
    cout<<str<<endl;
    // chuỗi str gồm 20 phần tử trong đó 19 kí tự có thể nhập và 1 kí tự null 
    char *str1; //Dùng con trỏ
    str1=new char[51]; //Cấp phát 51 kí tự
    char str2[]={'H','e','l','l','o','\0'};
    char str3[]="Obama\0";
    cout<<str2<<endl;
    cout<<str3<<endl;
    system("pause");
}