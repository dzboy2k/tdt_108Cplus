#include<iostream>
using namespace std;
int main(){
    int *p[5]; //Khai báo mảng con trỏ
    int a=5;
    p[0]=&a; //gán địa chỉ của a
    p[2]=p[0]; //sao chép địa chỉ
    int b=*p[0]; //gán giá trị p[0] cho b
    cout<<*p[2]<<endl;

    for (int i=0;i<5;i++){
        p[i]=new int; /*Cấp phát bộ nhớ*/
        *p[i]=i*2;
    }
    for (int i=0;i<5;i++){
        cout<<p[i]<<"=>"<<*p[i]<<endl;
    }
}