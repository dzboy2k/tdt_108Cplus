#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char *p,h,str1[20];
    cout<<"Nhap chuoi 1: ";
    gets(str1);
    cout<<"Nhap ki tu muon tim: ";
    cin>>h;
    p=strchr(str1,h); //Trả về con trỏ đến vị trí xuất hiện đầu tiên của kí tự h trong chuỗi s1
    if(p==NULL)
        cout<<"Khong tim thay "<<h<<" o trong chuoi"<<endl;
    else 
        cout<<"Tim thay "<<h<<" tai vi tri "<<(p-str1)<<endl;
    cout<<"--------------------------------"<<endl;
    
    char *p1,str2[20],str3[20];
    cout<<"Nhap chuoi 2: ";
    fflush(stdin); //Xóa bộ nhớ đệm
    gets(str2);  
    cout<<"Nhap chuoi 3: ";
    fflush(stdin); 
    cin.getline(str3,20);
    p1=strstr(str2,str3); //Trả về con trỏ đến vị trí xuất hiện đầu tiên của chuỗi s2 trong chuỗi s1
    if(p1==NULL)
        cout<<"Khong tim thay"<<endl;
    else 
        cout<<"Tim thay tai vi tri "<<(p1-str2)<<endl;
    cout<<"--------------------------------"<<endl;
    
    system("pause");
}