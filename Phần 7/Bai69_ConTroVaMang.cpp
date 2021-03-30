#include<iostream>
using namespace std;
int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int *p;
    p = a; //Gán địa chỉ mảng, khác với gán địa chỉ biến &a
    for (int i=0;i<10;i++){
        *(p+i) *= 10; //tương đương với a[i] = a[i]*10
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<endl;
    
    for(int i=0;i<10;i++){
        cout<<"*p+"<<i<<"= "<<*(p+i)<<endl;
    }
    cout<<endl;
    
    *(p+3)=113; //p đổi thì a đổi
    for (int i=0;i<10;i++){
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<endl;
    
    for (int i=0;i<10;i++){
        cout<<"p["<<i<<"] = "<<p[i]<<endl; //Sự tương quan giữa con trỏ và mảng
    }
    cout<<endl;
    system("pause");
}