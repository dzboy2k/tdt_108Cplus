#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Nhap chuoi ki tu:";
    cin.getline(str,50);
    int n=strlen(str);
    for(int i=n-1;i>=0;i--){
        putchar(*(str+i));
    }
    cout<<endl;
    system("pause");
}