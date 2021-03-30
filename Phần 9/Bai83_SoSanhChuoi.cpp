#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char *s1=new char[20];
    char *s2=new char[20];
    strcpy(s1,"Xin chao!");
    strcpy(s2,"Obama");
    int ret=strcmp(s1,s2);
    // So sánh chuỗi s2 và s1 theo nguyên tắc thứ tự từ điển phân biệt chữ hoa, chữ thuòng
    // 0: Nếu s1 = s2
    // >0: Nếu s1>s2
    // <0: Nếu s1<s2
    cout<<"ket qua="<<ret<<endl;
    if (ret==0)
    {
        cout<<"Hai thang do bang nhau"<<endl;
    }
    else if(ret==1){
        cout<<"Thang 1 > thang 2"<<endl;
    }
    else if(ret==-1){
        cout<<"Thang 1 < thang 2"<<endl;
    }
    
    char str1[15],str2[15];
    strcpy(str1,"abcdef");
    strcpy(str2,"ABCDEF");
    int ret1=strncmp(str1,str2,4);
    // So sánh n kí tự của chuỗi s2 với n kí tự chuỗi s1 theo nguyên tắc thứ tự từ điển
    // 0: Nếu str1 = str2
    // >0: Nếu str1>str2
    // <0: Nếu str1<str2
    cout<<"ket qua="<<ret1<<endl;
    if (ret1==0)
    {
        cout<<"Str1 = Str2"<<endl;
    }
    else if(ret1>0){
        cout<<"Str2 < Str1"<<endl;
    }
    else {
        cout<<"Str1 < Str2"<<endl;
    }

    char str3[15],str4[15];
    strcpy(str3,"Cha me");
    strcpy(str4,"Co chong");
    int kq=strncmp(str3,str4,3);
    
    if (kq==0)
    {
        cout<<"Str3 = Str4"<<endl;
    }
    else if(kq>0){
        cout<<"Str4 < Str3"<<endl;
    }
    else {
        cout<<"Str3 < Str4"<<endl;
    }

    int kq1=strncmp(str3,str4,1);
    if (kq1==0)
    {
        cout<<"Str3 = Str4"<<endl;
    }
    else if(kq1>0){
        cout<<"Str4 < Str3"<<endl;
    }
    else {
        cout<<"Str3 < Str4"<<endl;
    }
    system("pause");
}