#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[]="OBAMA hahaa ali33";
    int n1=strlen(str1); //Trả về độ dài của chuỗi
    for(int i=0;i<n1;i++){
        char c=str1[i];
        putchar(toupper(c)); //putchar: xuất kí tự, touppper:chuyển kí tự thường sang kí tự IN HOA
    }
    cout<<endl;
    char str2[]="OBAMA HAHAA ALI33";
    int n2=strlen(str2); 
    for(int i=0;i<n2;i++){
        char c=str2[i];
        putchar(tolower(c)); //tolower:chuyển kí tự IN HOA sang kí tự thường
    }
    cout<<"\n";
    system("pause");
}